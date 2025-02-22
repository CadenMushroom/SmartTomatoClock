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


void setup_scr_screen_set(lv_ui *ui)
{
    //Write codes screen_set
    ui->screen_set = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_set, 320, 170);
    lv_obj_set_scrollbar_mode(ui->screen_set, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_set, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_btn_set_aural
    ui->screen_set_btn_set_aural = lv_btn_create(ui->screen_set);
    ui->screen_set_btn_set_aural_label = lv_label_create(ui->screen_set_btn_set_aural);
    lv_label_set_text(ui->screen_set_btn_set_aural_label, "蜂鸣器、振动与亮度");
    lv_label_set_long_mode(ui->screen_set_btn_set_aural_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_btn_set_aural_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_btn_set_aural, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_btn_set_aural_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_btn_set_aural, 0, 40);
    lv_obj_set_size(ui->screen_set_btn_set_aural, 320, 30);

    //Write style for screen_set_btn_set_aural, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_btn_set_aural, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_btn_set_aural, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_btn_set_aural, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_btn_set_aural, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_set_btn_set_aural, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_set_btn_set_aural, lv_color_hex(0xbbbbbb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_set_btn_set_aural, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_btn_set_aural, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_btn_set_aural, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_btn_set_aural, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_btn_set_aural, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_btn_set_aural, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_btn_set_aural, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_btn_back
    ui->screen_set_btn_back = lv_btn_create(ui->screen_set);
    ui->screen_set_btn_back_label = lv_label_create(ui->screen_set_btn_back);
    lv_label_set_text(ui->screen_set_btn_back_label, "返回");
    lv_label_set_long_mode(ui->screen_set_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_btn_back, 0, 0);
    lv_obj_set_size(ui->screen_set_btn_back, 40, 40);

    //Write style for screen_set_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_btn_back, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_btn_reserve
    ui->screen_set_btn_reserve = lv_btn_create(ui->screen_set);
    ui->screen_set_btn_reserve_label = lv_label_create(ui->screen_set_btn_reserve);
    lv_label_set_text(ui->screen_set_btn_reserve_label, "保留");
    lv_label_set_long_mode(ui->screen_set_btn_reserve_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_btn_reserve_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_btn_reserve, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_btn_reserve_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_btn_reserve, 0, 130);
    lv_obj_set_size(ui->screen_set_btn_reserve, 320, 30);

    //Write style for screen_set_btn_reserve, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_btn_reserve, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_btn_reserve, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_btn_reserve, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_btn_reserve, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_set_btn_reserve, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_set_btn_reserve, lv_color_hex(0xbbbbbb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_set_btn_reserve, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_btn_reserve, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_btn_reserve, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_btn_reserve, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_btn_reserve, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_btn_reserve, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_btn_reserve, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_btn_set_time
    ui->screen_set_btn_set_time = lv_btn_create(ui->screen_set);
    ui->screen_set_btn_set_time_label = lv_label_create(ui->screen_set_btn_set_time);
    lv_label_set_text(ui->screen_set_btn_set_time_label, "时间与联网");
    lv_label_set_long_mode(ui->screen_set_btn_set_time_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_btn_set_time_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_btn_set_time, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_btn_set_time_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_btn_set_time, 0, 100);
    lv_obj_set_size(ui->screen_set_btn_set_time, 320, 30);

    //Write style for screen_set_btn_set_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_btn_set_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_btn_set_time, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_btn_set_time, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_btn_set_time, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_set_btn_set_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_set_btn_set_time, lv_color_hex(0xbbbbbb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_set_btn_set_time, LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_TOP, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_btn_set_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_btn_set_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_btn_set_time, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_btn_set_time, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_btn_set_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_btn_set_time, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_btn_set_clock
    ui->screen_set_btn_set_clock = lv_btn_create(ui->screen_set);
    ui->screen_set_btn_set_clock_label = lv_label_create(ui->screen_set_btn_set_clock);
    lv_label_set_text(ui->screen_set_btn_set_clock_label, "闹钟");
    lv_label_set_long_mode(ui->screen_set_btn_set_clock_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_btn_set_clock_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_btn_set_clock, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_btn_set_clock_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_btn_set_clock, 0, 70);
    lv_obj_set_size(ui->screen_set_btn_set_clock, 320, 30);

    //Write style for screen_set_btn_set_clock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_btn_set_clock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_btn_set_clock, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_btn_set_clock, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_btn_set_clock, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_set_btn_set_clock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_set_btn_set_clock, lv_color_hex(0xbbbbbb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_set_btn_set_clock, LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_TOP, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_btn_set_clock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_btn_set_clock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_btn_set_clock, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_btn_set_clock, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_btn_set_clock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_btn_set_clock, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_set.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_set);

    //Init events for screen.
    events_init_screen_set(ui);
}
