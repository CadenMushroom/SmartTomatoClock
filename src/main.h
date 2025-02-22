#include "lv_port_indev.h"
#include <lvgl.h>
#include <TFT_eSPI.h>

#include "m_lvgl\generated\events_init.h"
#include "m_lvgl\generated\gui_guider.h"
#include "m_lvgl\custom\custom.h"

#include <NTPClient.h>
#include <WiFiUdp.h>
#include <WiFi.h>

#include <TimeLib.h>

#ifndef MAIN_HH

/*
    WiFi和NTP服务器配置
*/
const char *ssid     = "Mi18";
const char *password = "12345678";

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);
volatile unsigned int tim1_IRQ_count = 0;

extern int screen_digitalClock_min_value;
extern int screen_digitalClock_hour_value;
extern int screen_digitalClock_sec_value;
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

#endif