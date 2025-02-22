/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "m_lvgl\custom\custom.h"

extern lv_group_t * group_home;

int screen_home_digitalClock_min_value = 25;
int screen_home_digitalClock_hour_value = 11;
int screen_home_digitalClock_sec_value = 50;
char screen_home_digitalClock_meridiem[] = "AM";
void setup_scr_screen_home(lv_ui *ui)
{
    //Write codes screen_home
    ui->screen_home = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_home, 320, 170);
    lv_obj_set_scrollbar_mode(ui->screen_home, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_home, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_digitalClock
    static bool screen_home_digitalClock_timer_enabled = false;
    ui->screen_home_digitalClock = lv_dclock_create(ui->screen_home, "11:25:50 AM");
    if (!screen_home_digitalClock_timer_enabled) {
        lv_timer_create(screen_home_digitalClock_timer, 1000, NULL);
        screen_home_digitalClock_timer_enabled = true;
    }
    lv_obj_set_pos(ui->screen_home_digitalClock, 80, 65);
    lv_obj_set_size(ui->screen_home_digitalClock, 160, 39);

    //Write style for screen_home_digitalClock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_home_digitalClock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_digitalClock, lv_color_hex(0x12548b), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_digitalClock, &lv_font_Alatsi_Regular_25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_digitalClock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_digitalClock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_digitalClock, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_digitalClock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_digitalClock, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_digitalClock, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_digitalClock, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_digitalClock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_digitalClock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_digitalClock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_digitalClock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_calender
    ui->screen_home_calender = lv_label_create(ui->screen_home);
    lv_label_set_text(ui->screen_home_calender, "2023/07/31");
    lv_obj_set_style_text_align(ui->screen_home_calender, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_flag(ui->screen_home_calender, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(ui->screen_home_calender, screen_home_calender_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_set_pos(ui->screen_home_calender, 89, 99);
    lv_obj_set_size(ui->screen_home_calender, 142, 24);

    //Write style for screen_home_calender, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_home_calender, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_calender, &lv_font_Abel_regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_calender, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_calender, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_calender, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_calender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_home_calender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_calender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_calender, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_calender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_calender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_calender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_day
    ui->screen_home_day = lv_bar_create(ui->screen_home);
    lv_obj_set_style_anim_time(ui->screen_home_day, 100, 0);
    lv_bar_set_mode(ui->screen_home_day, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->screen_home_day, 0, 1440);
    lv_bar_set_value(ui->screen_home_day, 840, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_home_day, 10, 10);
    lv_obj_set_size(ui->screen_home_day, 300, 20);

    //Write style for screen_home_day, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_day, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_day, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_day, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_day, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_day, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_day, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_home_day, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_home_day, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_home_day, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_day, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_home_tomato
    ui->screen_home_tomato = lv_imgbtn_create(ui->screen_home);
    lv_obj_add_flag(ui->screen_home_tomato, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_home_tomato, LV_IMGBTN_STATE_RELEASED, NULL, &_fanqiegongjv_alpha_40x40, NULL);
    lv_imgbtn_set_src(ui->screen_home_tomato, LV_IMGBTN_STATE_PRESSED, NULL, &_fanqiegongjv_xuanzhong_alpha_40x40, NULL);
    ui->screen_home_tomato_label = lv_label_create(ui->screen_home_tomato);
    lv_label_set_text(ui->screen_home_tomato_label, "");
    lv_label_set_long_mode(ui->screen_home_tomato_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_tomato_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_tomato, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_home_tomato, 32, 126);
    lv_obj_set_size(ui->screen_home_tomato, 40, 40);

    //Write style for screen_home_tomato, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_home_tomato, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_tomato, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_tomato, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_tomato, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_tomato, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_home_tomato, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_tomato, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_tomato, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_tomato, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_home_tomato, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_home_tomato, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_home_tomato, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_home_tomato, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_home_tomato, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_home_tomato, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_tomato, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_home_tomato, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_home_tomato, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_home_tomato, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_home_tomato, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_home_tomato, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_home_tomato, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_tomato, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_home_tomato, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_home_setting
    ui->screen_home_setting = lv_imgbtn_create(ui->screen_home);
    lv_obj_add_flag(ui->screen_home_setting, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_home_setting, LV_IMGBTN_STATE_RELEASED, NULL, &_shezhi_alpha_40x40, NULL);
    ui->screen_home_setting_label = lv_label_create(ui->screen_home_setting);
    lv_label_set_text(ui->screen_home_setting_label, "");
    lv_label_set_long_mode(ui->screen_home_setting_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_setting_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_setting, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_home_setting, 104, 126);
    lv_obj_set_size(ui->screen_home_setting, 40, 40);

    //Write style for screen_home_setting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_home_setting, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_setting, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_setting, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_setting, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_home_setting, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_setting, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_setting, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_setting, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_home_setting, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_home_setting, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_home_setting, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_home_setting, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_home_setting, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_home_setting, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_setting, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_home_setting, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_home_setting, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_home_setting, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_home_setting, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_home_setting, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_home_setting, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_setting, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_home_setting, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_home_label_1
    ui->screen_home_label_1 = lv_label_create(ui->screen_home);
    lv_label_set_text(ui->screen_home_label_1, "温度：\n湿度：");
    lv_label_set_long_mode(ui->screen_home_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_home_label_1, 10, 36);
    lv_obj_set_size(ui->screen_home_label_1, 65, 38);

    //Write style for screen_home_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_1, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_2
    ui->screen_home_label_2 = lv_label_create(ui->screen_home);
    lv_label_set_text(ui->screen_home_label_2, "26C\n60%");
    lv_label_set_long_mode(ui->screen_home_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_home_label_2, 65, 37);
    lv_obj_set_size(ui->screen_home_label_2, 60, 36);

    //Write style for screen_home_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_2, &lv_font_Abel_regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_imgbtn_1
    ui->screen_home_imgbtn_1 = lv_imgbtn_create(ui->screen_home);
    lv_obj_add_flag(ui->screen_home_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_home_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_zhexian_alpha_40x40, NULL);
    lv_imgbtn_set_src(ui->screen_home_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_zhexian_xuanzhonhg_alpha_40x40, NULL);
    ui->screen_home_imgbtn_1_label = lv_label_create(ui->screen_home_imgbtn_1);
    lv_label_set_text(ui->screen_home_imgbtn_1_label, "");
    lv_label_set_long_mode(ui->screen_home_imgbtn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_imgbtn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_home_imgbtn_1, 176, 126);
    lv_obj_set_size(ui->screen_home_imgbtn_1, 40, 40);

    //Write style for screen_home_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_imgbtn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_home_imgbtn_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_home_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_home_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_imgbtn_1, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_home_imgbtn_1, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_home_imgbtn_2
    ui->screen_home_imgbtn_2 = lv_imgbtn_create(ui->screen_home);
    lv_obj_add_flag(ui->screen_home_imgbtn_2, LV_OBJ_FLAG_CHECKABLE);
    lv_imgbtn_set_src(ui->screen_home_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_zhuzhuang_alpha_40x40, NULL);
    lv_imgbtn_set_src(ui->screen_home_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_zhuzhuang_xuanzhong_alpha_40x40, NULL);
    ui->screen_home_imgbtn_2_label = lv_label_create(ui->screen_home_imgbtn_2);
    lv_label_set_text(ui->screen_home_imgbtn_2_label, "");
    lv_label_set_long_mode(ui->screen_home_imgbtn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_home_imgbtn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_home_imgbtn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_home_imgbtn_2, 248, 126);
    lv_obj_set_size(ui->screen_home_imgbtn_2, 40, 40);

    //Write style for screen_home_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_imgbtn_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_home_imgbtn_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_home_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_img_opa(ui->screen_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_home_imgbtn_2, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_img_opa(ui->screen_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_home_imgbtn_2, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_home_imgbtn_2, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_home_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_home_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_home_imgbtn_2, Part: LV_PART_MAIN, State: LV_IMGBTN_STATE_RELEASED.
    lv_obj_set_style_img_recolor_opa(ui->screen_home_imgbtn_2, 0, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);
    lv_obj_set_style_img_opa(ui->screen_home_imgbtn_2, 255, LV_PART_MAIN|LV_IMGBTN_STATE_RELEASED);

    //Write codes screen_home_label_3
    ui->screen_home_label_3 = lv_label_create(ui->screen_home);
    lv_label_set_text(ui->screen_home_label_3, "今日专注：");
    lv_label_set_long_mode(ui->screen_home_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_home_label_3, 159, 37);
    lv_obj_set_size(ui->screen_home_label_3, 90, 22);

    //Write style for screen_home_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_3, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_home_label_focusTime
    ui->screen_home_label_focusTime = lv_label_create(ui->screen_home);
    lv_label_set_text(ui->screen_home_label_focusTime, "6.3小时");
    lv_label_set_long_mode(ui->screen_home_label_focusTime, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_home_label_focusTime, 244, 37);
    lv_obj_set_size(ui->screen_home_label_focusTime, 66, 19);

    //Write style for screen_home_label_focusTime, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_home_label_focusTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_home_label_focusTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_home_label_focusTime, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_home_label_focusTime, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_home_label_focusTime, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_home_label_focusTime, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_home_label_focusTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_home_label_focusTime, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_home_label_focusTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_home_label_focusTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_home_label_focusTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_home_label_focusTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_home_label_focusTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_home_label_focusTime, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_home.
    lv_group_add_obj(group_home, guider_ui.screen_home_tomato);
    lv_group_add_obj(group_home, guider_ui.screen_home_setting);

    //Update current screen layout.
    lv_obj_update_layout(ui->screen_home);

    //Init events for screen.
    events_init_screen_home(ui);
}
