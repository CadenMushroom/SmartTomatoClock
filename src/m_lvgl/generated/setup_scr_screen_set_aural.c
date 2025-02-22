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


void setup_scr_screen_set_aural(lv_ui *ui)
{
    //Write codes screen_set_aural
    ui->screen_set_aural = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_set_aural, 320, 170);
    lv_obj_set_scrollbar_mode(ui->screen_set_aural, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_set_aural, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_aural_slider_buzzer
    ui->screen_set_aural_slider_buzzer = lv_slider_create(ui->screen_set_aural);
    lv_slider_set_range(ui->screen_set_aural_slider_buzzer, 0, 10);
    lv_slider_set_mode(ui->screen_set_aural_slider_buzzer, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_set_aural_slider_buzzer, 5, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_set_aural_slider_buzzer, 80, 100);
    lv_obj_set_size(ui->screen_set_aural_slider_buzzer, 160, 8);

    //Write style for screen_set_aural_slider_buzzer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural_slider_buzzer, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural_slider_buzzer, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural_slider_buzzer, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_slider_buzzer, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_set_aural_slider_buzzer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_aural_slider_buzzer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_aural_slider_buzzer, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural_slider_buzzer, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural_slider_buzzer, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural_slider_buzzer, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_slider_buzzer, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_set_aural_slider_buzzer, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural_slider_buzzer, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural_slider_buzzer, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural_slider_buzzer, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_slider_buzzer, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_set_aural_slider_motor
    ui->screen_set_aural_slider_motor = lv_slider_create(ui->screen_set_aural);
    lv_slider_set_range(ui->screen_set_aural_slider_motor, 0, 10);
    lv_slider_set_mode(ui->screen_set_aural_slider_motor, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_set_aural_slider_motor, 5, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_set_aural_slider_motor, 80, 60);
    lv_obj_set_size(ui->screen_set_aural_slider_motor, 160, 8);

    //Write style for screen_set_aural_slider_motor, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural_slider_motor, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural_slider_motor, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural_slider_motor, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_slider_motor, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_set_aural_slider_motor, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_aural_slider_motor, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_aural_slider_motor, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural_slider_motor, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural_slider_motor, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural_slider_motor, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_slider_motor, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_set_aural_slider_motor, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural_slider_motor, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural_slider_motor, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural_slider_motor, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_slider_motor, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_set_aural_slider_light
    ui->screen_set_aural_slider_light = lv_slider_create(ui->screen_set_aural);
    lv_slider_set_range(ui->screen_set_aural_slider_light, 0, 10);
    lv_slider_set_mode(ui->screen_set_aural_slider_light, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_set_aural_slider_light, 5, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_set_aural_slider_light, 80, 140);
    lv_obj_set_size(ui->screen_set_aural_slider_light, 160, 8);

    //Write style for screen_set_aural_slider_light, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural_slider_light, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural_slider_light, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural_slider_light, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_slider_light, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_set_aural_slider_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_aural_slider_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_aural_slider_light, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural_slider_light, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural_slider_light, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural_slider_light, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_slider_light, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_set_aural_slider_light, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural_slider_light, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural_slider_light, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural_slider_light, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_slider_light, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_set_aural_btn_back
    ui->screen_set_aural_btn_back = lv_btn_create(ui->screen_set_aural);
    ui->screen_set_aural_btn_back_label = lv_label_create(ui->screen_set_aural_btn_back);
    lv_label_set_text(ui->screen_set_aural_btn_back_label, "返回");
    lv_label_set_long_mode(ui->screen_set_aural_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_aural_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_aural_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_aural_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_aural_btn_back, 0, 0);
    lv_obj_set_size(ui->screen_set_aural_btn_back, 40, 40);

    //Write style for screen_set_aural_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_aural_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_aural_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_aural_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_aural_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_aural_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_aural_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_aural_btn_back, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_aural_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_aural_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_aural_label_1
    ui->screen_set_aural_label_1 = lv_label_create(ui->screen_set_aural);
    lv_label_set_text(ui->screen_set_aural_label_1, "振动");
    lv_label_set_long_mode(ui->screen_set_aural_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_set_aural_label_1, 20, 56);
    lv_obj_set_size(ui->screen_set_aural_label_1, 46, 16);

    //Write style for screen_set_aural_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_set_aural_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_aural_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_aural_label_1, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_aural_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_set_aural_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_set_aural_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_aural_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_set_aural_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_set_aural_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_set_aural_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_set_aural_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_set_aural_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_aural_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_aural_label_2
    ui->screen_set_aural_label_2 = lv_label_create(ui->screen_set_aural);
    lv_label_set_text(ui->screen_set_aural_label_2, "蜂鸣器\n");
    lv_label_set_long_mode(ui->screen_set_aural_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_set_aural_label_2, 20, 96);
    lv_obj_set_size(ui->screen_set_aural_label_2, 56, 16);

    //Write style for screen_set_aural_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_set_aural_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_aural_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_aural_label_2, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_aural_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_set_aural_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_set_aural_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_aural_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_set_aural_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_set_aural_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_set_aural_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_set_aural_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_set_aural_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_aural_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_aural_label_3
    ui->screen_set_aural_label_3 = lv_label_create(ui->screen_set_aural);
    lv_label_set_text(ui->screen_set_aural_label_3, "亮度");
    lv_label_set_long_mode(ui->screen_set_aural_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_set_aural_label_3, 20, 136);
    lv_obj_set_size(ui->screen_set_aural_label_3, 46, 16);

    //Write style for screen_set_aural_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_set_aural_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_aural_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_aural_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_aural_label_3, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_aural_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_set_aural_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_set_aural_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_aural_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_set_aural_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_set_aural_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_set_aural_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_set_aural_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_set_aural_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_aural_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_set_aural.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_set_aural);

    //Init events for screen.
    events_init_screen_set_aural(ui);
}
