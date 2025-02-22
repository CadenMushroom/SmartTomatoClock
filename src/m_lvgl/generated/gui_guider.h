/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen_home;
	bool screen_home_del;
	lv_obj_t *screen_home_digitalClock;
	lv_obj_t *screen_home_calender;
	lv_obj_t *screen_home_day;
	lv_obj_t *screen_home_tomato;
	lv_obj_t *screen_home_tomato_label;
	lv_obj_t *screen_home_setting;
	lv_obj_t *screen_home_setting_label;
	lv_obj_t *screen_home_label_1;
	lv_obj_t *screen_home_label_2;
	lv_obj_t *screen_home_imgbtn_1;
	lv_obj_t *screen_home_imgbtn_1_label;
	lv_obj_t *screen_home_imgbtn_2;
	lv_obj_t *screen_home_imgbtn_2_label;
	lv_obj_t *screen_home_label_3;
	lv_obj_t *screen_home_label_focusTime;
	lv_obj_t *screen_tom;
	bool screen_tom_del;
	lv_obj_t *screen_tom_clockdown;
	lv_obj_t *screen_tom_btn_back;
	lv_obj_t *screen_tom_btn_back_label;
	lv_obj_t *screen_tom_label_clockdown;
	lv_obj_t *screen_tom_btn_begin;
	lv_obj_t *screen_tom_btn_begin_label;
	lv_obj_t *screen_tom_btn_subtract;
	lv_obj_t *screen_tom_btn_subtract_label;
	lv_obj_t *screen_tom_btn_plus;
	lv_obj_t *screen_tom_btn_plus_label;
	lv_obj_t *screen_set;
	bool screen_set_del;
	lv_obj_t *screen_set_btn_set_aural;
	lv_obj_t *screen_set_btn_set_aural_label;
	lv_obj_t *screen_set_btn_back;
	lv_obj_t *screen_set_btn_back_label;
	lv_obj_t *screen_set_btn_reserve;
	lv_obj_t *screen_set_btn_reserve_label;
	lv_obj_t *screen_set_btn_set_time;
	lv_obj_t *screen_set_btn_set_time_label;
	lv_obj_t *screen_set_btn_set_clock;
	lv_obj_t *screen_set_btn_set_clock_label;
	lv_obj_t *screen_ser_time;
	bool screen_ser_time_del;
	lv_obj_t *screen_ser_time_btn_1;
	lv_obj_t *screen_ser_time_btn_1_label;
	lv_obj_t *screen_ser_time_QR_time;
	lv_obj_t *screen_ser_time_btn_2;
	lv_obj_t *screen_ser_time_btn_2_label;
	lv_obj_t *screen_set_clock;
	bool screen_set_clock_del;
	lv_obj_t *screen_set_clock_btn_back;
	lv_obj_t *screen_set_clock_btn_back_label;
	lv_obj_t *screen_set_clock_btn_4;
	lv_obj_t *screen_set_clock_btn_4_label;
	lv_obj_t *screen_set_clock_btn_3;
	lv_obj_t *screen_set_clock_btn_3_label;
	lv_obj_t *screen_set_clock_btn_2;
	lv_obj_t *screen_set_clock_btn_2_label;
	lv_obj_t *screen_set_clock_btn_1;
	lv_obj_t *screen_set_clock_btn_1_label;
	lv_obj_t *screen_set_clock_sw_1;
	lv_obj_t *screen_set_clock_sw_2;
	lv_obj_t *screen_set_clock_sw_3;
	lv_obj_t *screen_set_clock_sw_4;
	lv_obj_t *screen_set_clock_alarm;
	bool screen_set_clock_alarm_del;
	lv_obj_t *screen_set_clock_alarm_btn_back;
	lv_obj_t *screen_set_clock_alarm_btn_back_label;
	lv_obj_t *screen_set_aural;
	bool screen_set_aural_del;
	lv_obj_t *screen_set_aural_slider_buzzer;
	lv_obj_t *screen_set_aural_slider_motor;
	lv_obj_t *screen_set_aural_slider_light;
	lv_obj_t *screen_set_aural_btn_back;
	lv_obj_t *screen_set_aural_btn_back_label;
	lv_obj_t *screen_set_aural_label_1;
	lv_obj_t *screen_set_aural_label_2;
	lv_obj_t *screen_set_aural_label_3;
	lv_obj_t *screen_set2;
	bool screen_set2_del;
	lv_obj_t *screen_zhexian;
	bool screen_zhexian_del;
	lv_obj_t *screen_zhexian_btn_back;
	lv_obj_t *screen_zhexian_btn_back_label;
	lv_obj_t *screen_zhexian_chart_1;
	lv_chart_series_t *screen_zhexian_chart_1_0;
	lv_chart_series_t *screen_zhexian_chart_1_1;
	lv_obj_t *screen_zhexian_label_1;
	lv_obj_t *screen_zhexian_label_2;
	lv_obj_t *screen_zhexian_label_3;
	lv_obj_t *screen_zhexian_line_1;
	lv_obj_t *screen_zhexian_line_2;
	lv_obj_t *screen_zhuzhuang;
	bool screen_zhuzhuang_del;
	lv_obj_t *screen_zhuzhuang_btn_back;
	lv_obj_t *screen_zhuzhuang_btn_back_label;
	lv_obj_t *screen_zhuzhuang_chart_1;
	lv_chart_series_t *screen_zhuzhuang_chart_1_0;
	lv_chart_series_t *screen_zhuzhuang_chart_1_1;
	lv_obj_t *screen_zhuzhuang_label_3;
	lv_obj_t *screen_zhuzhuang_line_2;
	lv_obj_t *screen_zhuzhuang_label_2;
	lv_obj_t *screen_zhuzhuang_label_1;
	lv_obj_t *screen_zhuzhuang_line_1;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);


extern lv_ui guider_ui;


void setup_scr_screen_home(lv_ui *ui);
void setup_scr_screen_tom(lv_ui *ui);
void setup_scr_screen_set(lv_ui *ui);
void setup_scr_screen_ser_time(lv_ui *ui);
void setup_scr_screen_set_clock(lv_ui *ui);
void setup_scr_screen_set_clock_alarm(lv_ui *ui);
void setup_scr_screen_set_aural(lv_ui *ui);
void setup_scr_screen_set2(lv_ui *ui);
void setup_scr_screen_zhexian(lv_ui *ui);
void setup_scr_screen_zhuzhuang(lv_ui *ui);
LV_IMG_DECLARE(_fanqiegongjv_alpha_40x40);
LV_IMG_DECLARE(_fanqiegongjv_xuanzhong_alpha_40x40);
LV_IMG_DECLARE(_shezhi_alpha_40x40);
LV_IMG_DECLARE(_zhexian_alpha_40x40);
LV_IMG_DECLARE(_zhexian_xuanzhonhg_alpha_40x40);
LV_IMG_DECLARE(_zhuzhuang_alpha_40x40);
LV_IMG_DECLARE(_zhuzhuang_xuanzhong_alpha_40x40);
LV_IMG_DECLARE(_verifyTime_alpha_150x150);

LV_FONT_DECLARE(lv_font_Alatsi_Regular_25)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_Abel_regular_16)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_SIMYOU_16)
LV_FONT_DECLARE(lv_font_Abel_regular_24)


#ifdef __cplusplus
}
#endif
#endif
