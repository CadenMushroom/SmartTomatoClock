#include<Arduino.h>
//显示库
#include "lv_port_indev.h"
#include <lvgl.h>
#include <TFT_eSPI.h>
//自定义LVGL库
#include "m_lvgl\generated\events_init.h"
#include "m_lvgl\generated\gui_guider.h"
#include "m_lvgl\custom\custom.h"
//WiFi和获取NTP时间库
#include <NTPClient.h>
#include <WiFiUdp.h>
#include <WiFi.h>
//时间解析库
#include <TimeLib.h>
//OTA库
#include<m_OTA.h>

/*
    WiFi和NTP服务器配置
*/
const char *ssid     = "荣耀Magic7";
const char *password = "12345678";

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);
volatile unsigned int tim1_IRQ_count = 0;

extern int screen_home_digitalClock_min_value;
extern int screen_home_digitalClock_hour_value;
extern int screen_home_digitalClock_sec_value;
extern char screen_digitalClock_meridiem;

/*
    LVGL和TFT屏幕配置
*/


#define TFT_HOR_RES 170
#define TFT_VER_RES 320

lv_ui guider_ui;

static const uint16_t screenWidth  = 170;
static const uint16_t screenHeight = 320;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

/*
    番茄钟模块配置
*/
time_t dsec;
time_t dsec0;
hw_timer_t *tim1 = NULL;
int flag;


char str[10];  // 足够容纳数字字符和字符串结束符


void my_disp_flush( lv_disp_drv_t *disp_drv, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp_drv );
}

// 定义WiFi事件处理器
void WiFiEvent(WiFiEvent_t event) {
  const char* formattedTime;
  
  String sformattedTime;
  switch (event) {
    case SYSTEM_EVENT_STA_GOT_IP:
      Serial.println("Connected");

      timeClient.begin();
      timeClient.update();
      
      screen_home_digitalClock_min_value = timeClient.getMinutes();
      screen_home_digitalClock_hour_value= timeClient.getHours();
      screen_home_digitalClock_sec_value = timeClient.getSeconds();
      // 这里可以添加更多连接成功后的操作，这就是回调函数的执行部分
      break;
    case SYSTEM_EVENT_STA_DISCONNECTED:
      Serial.println("Disconnected from WiFi. Reconnecting...");
      WiFi.reconnect();
      break;
    default:
      break;
  }
}

void Tim1Interrupt()
{
  //中断服务函数
  dsec--;
  // 先格式化分钟
  sprintf(str, "%02d", minute(dsec));
  // 拼接冒号
  char temp[10];
  sprintf(temp, ":%02d", second(dsec));
  strcat(str, temp);
  // 拼接换行符
  strcat(str, "\n");
  lv_label_set_text(guider_ui.screen_tom_label_clockdown, str);

  lv_arc_set_value(guider_ui.screen_tom_clockdown, dsec);

  if(dsec == 0){
    timerAlarmDisable(tim1);
  }
  flag = 1;
}

void setup()
{
    tim1 = timerBegin(1, 80, true);
    timerAttachInterrupt(tim1, Tim1Interrupt, true);
    timerAlarmWrite(tim1, 1000000ul, true);//100ms进一次中断

    WiFi.onEvent(WiFiEvent);

    Serial.begin( 115200 ); /* prepare for possible serial debug */
    WiFi.begin(ssid, password);

    timeClient.setTimeOffset(60*60*8);	//东八区时间设置
    
    lv_init();
    tft.begin();          /* TFT init */
    tft.setRotation( 3 ); /* Landscape orientation, flipped */
    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 10 );
    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    disp_drv.rotated = LV_DISP_ROT_90;
    lv_disp_drv_register( &disp_drv );

    lv_port_indev_init();    
    setup_ui(&guider_ui);
    events_init(&guider_ui);
    custom_init(&guider_ui);

    Serial.println( "Setup done" );
}

void loop()
{ 
    if(flag == 1){
    Serial.printf(str);
    flag = 0;
    }
    lv_timer_handler(); /* let the GUI do its work */
    delay( 5 );
}

