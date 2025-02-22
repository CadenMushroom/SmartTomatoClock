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



void setup_scr_screen_set_clock(lv_ui *ui)
{
    //Write codes screen_set_clock
    ui->screen_set_clock = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_set_clock, 320, 170);
    lv_obj_set_scrollbar_mode(ui->screen_set_clock, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_set_clock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_clock_btn_back
    ui->screen_set_clock_btn_back = lv_btn_create(ui->screen_set_clock);
    ui->screen_set_clock_btn_back_label = lv_label_create(ui->screen_set_clock_btn_back);
    lv_label_set_text(ui->screen_set_clock_btn_back_label, "返回");
    lv_label_set_long_mode(ui->screen_set_clock_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_clock_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_clock_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_clock_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_clock_btn_back, 0, 0);
    lv_obj_set_size(ui->screen_set_clock_btn_back, 40, 40);

    //Write style for screen_set_clock_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_clock_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_clock_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_clock_btn_back, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_clock_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_clock_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_clock_btn_4
    ui->screen_set_clock_btn_4 = lv_btn_create(ui->screen_set_clock);
    ui->screen_set_clock_btn_4_label = lv_label_create(ui->screen_set_clock_btn_4);
    lv_label_set_text(ui->screen_set_clock_btn_4_label, "闹钟4");
    lv_label_set_long_mode(ui->screen_set_clock_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_clock_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_clock_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_clock_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_clock_btn_4, 0, 130);
    lv_obj_set_size(ui->screen_set_clock_btn_4, 280, 30);

    //Write style for screen_set_clock_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_btn_4, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_set_clock_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_set_clock_btn_4, lv_color_hex(0xbbbbbb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_set_clock_btn_4, LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_clock_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_clock_btn_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_clock_btn_4, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_clock_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_clock_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_clock_btn_3
    ui->screen_set_clock_btn_3 = lv_btn_create(ui->screen_set_clock);
    ui->screen_set_clock_btn_3_label = lv_label_create(ui->screen_set_clock_btn_3);
    lv_label_set_text(ui->screen_set_clock_btn_3_label, "闹钟3");
    lv_label_set_long_mode(ui->screen_set_clock_btn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_clock_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_clock_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_clock_btn_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_clock_btn_3, 0, 100);
    lv_obj_set_size(ui->screen_set_clock_btn_3, 280, 30);

    //Write style for screen_set_clock_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_btn_3, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_set_clock_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_set_clock_btn_3, lv_color_hex(0xbbbbbb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_set_clock_btn_3, LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_clock_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_clock_btn_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_clock_btn_3, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_clock_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_clock_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_clock_btn_2
    ui->screen_set_clock_btn_2 = lv_btn_create(ui->screen_set_clock);
    ui->screen_set_clock_btn_2_label = lv_label_create(ui->screen_set_clock_btn_2);
    lv_label_set_text(ui->screen_set_clock_btn_2_label, "闹钟2");
    lv_label_set_long_mode(ui->screen_set_clock_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_clock_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_clock_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_clock_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_clock_btn_2, 0, 70);
    lv_obj_set_size(ui->screen_set_clock_btn_2, 280, 30);

    //Write style for screen_set_clock_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_btn_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_set_clock_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_set_clock_btn_2, lv_color_hex(0xbbbbbb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_set_clock_btn_2, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_clock_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_clock_btn_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_clock_btn_2, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_clock_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_clock_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_clock_btn_1
    ui->screen_set_clock_btn_1 = lv_btn_create(ui->screen_set_clock);
    ui->screen_set_clock_btn_1_label = lv_label_create(ui->screen_set_clock_btn_1);
    lv_label_set_text(ui->screen_set_clock_btn_1_label, "闹钟1");
    lv_label_set_long_mode(ui->screen_set_clock_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_clock_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_clock_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_clock_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_clock_btn_1, 0, 40);
    lv_obj_set_size(ui->screen_set_clock_btn_1, 280, 30);

    //Write style for screen_set_clock_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_btn_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_set_clock_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_set_clock_btn_1, lv_color_hex(0xbbbbbb), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_set_clock_btn_1, LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_clock_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_clock_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_clock_btn_1, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_clock_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_clock_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_clock_sw_1
    ui->screen_set_clock_sw_1 = lv_switch_create(ui->screen_set_clock);
    lv_obj_set_pos(ui->screen_set_clock_sw_1, 280, 45);
    lv_obj_set_size(ui->screen_set_clock_sw_1, 40, 20);

    //Write style for screen_set_clock_sw_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_1, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_sw_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_clock_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_clock_sw_1, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_1, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_1, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_set_clock_sw_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_1, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_1, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_sw_1, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_set_clock_sw_2
    ui->screen_set_clock_sw_2 = lv_switch_create(ui->screen_set_clock);
    lv_obj_set_pos(ui->screen_set_clock_sw_2, 280, 75);
    lv_obj_set_size(ui->screen_set_clock_sw_2, 40, 20);

    //Write style for screen_set_clock_sw_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_2, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_sw_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_clock_sw_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_clock_sw_2, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_2, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_2, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_2, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_set_clock_sw_2, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_2, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_2, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_2, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_2, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_sw_2, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_set_clock_sw_3
    ui->screen_set_clock_sw_3 = lv_switch_create(ui->screen_set_clock);
    lv_obj_set_pos(ui->screen_set_clock_sw_3, 280, 105);
    lv_obj_set_size(ui->screen_set_clock_sw_3, 40, 20);

    //Write style for screen_set_clock_sw_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_3, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_sw_3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_clock_sw_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_clock_sw_3, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_3, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_3, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_3, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_3, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_set_clock_sw_3, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_3, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_3, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_3, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_3, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_sw_3, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_set_clock_sw_4
    ui->screen_set_clock_sw_4 = lv_switch_create(ui->screen_set_clock);
    lv_obj_set_pos(ui->screen_set_clock_sw_4, 280, 135);
    lv_obj_set_size(ui->screen_set_clock_sw_4, 40, 20);

    //Write style for screen_set_clock_sw_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_4, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_sw_4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_clock_sw_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_clock_sw_4, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_4, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_4, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_4, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_set_clock_sw_4, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_clock_sw_4, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_clock_sw_4, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_clock_sw_4, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_clock_sw_4, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_clock_sw_4, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //The custom code of screen_set_clock.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_set_clock);

    //Init events for screen.
    events_init_screen_set_clock(ui);
}
