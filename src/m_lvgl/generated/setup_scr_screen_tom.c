/*
* Copyright 2024 NXP
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

extern lv_group_t * group_tom;


unsigned int minutes;
void setup_scr_screen_tom(lv_ui *ui)
{
    //Write codes screen_tom
    ui->screen_tom = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_tom, 320, 170);
    lv_obj_set_scrollbar_mode(ui->screen_tom, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_tom, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_tom, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_tom, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_tom, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_tom_clockdown
    ui->screen_tom_clockdown = lv_arc_create(ui->screen_tom);
    lv_arc_set_mode(ui->screen_tom_clockdown, LV_ARC_MODE_NORMAL);
    lv_arc_set_range(ui->screen_tom_clockdown, 0, 100);
    lv_arc_set_bg_angles(ui->screen_tom_clockdown, 135, 45);
    lv_arc_set_value(ui->screen_tom_clockdown, 100);
    lv_arc_set_rotation(ui->screen_tom_clockdown, 0);
    lv_obj_set_style_arc_rounded(ui->screen_tom_clockdown, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui->screen_tom_clockdown, 0, LV_STATE_DEFAULT);
    lv_obj_set_pos(ui->screen_tom_clockdown, 0, 0);
    lv_obj_set_size(ui->screen_tom_clockdown, 320, 170);

    //Write style for screen_tom_clockdown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_tom_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_tom_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui->screen_tom_clockdown, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->screen_tom_clockdown, 69, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->screen_tom_clockdown, lv_color_hex(0x00cbff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_tom_clockdown, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_tom_clockdown, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_tom_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_tom_clockdown, 80, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_tom_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_tom_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_tom_clockdown, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_arc_width(ui->screen_tom_clockdown, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui->screen_tom_clockdown, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui->screen_tom_clockdown, lv_color_hex(0x0091b7), LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_tom_clockdown, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_tom_clockdown, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_tom_clockdown, lv_color_hex(0x00afdc), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_tom_clockdown, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(ui->screen_tom_clockdown, 5, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_tom_btn_back
    ui->screen_tom_btn_back = lv_btn_create(ui->screen_tom);
    ui->screen_tom_btn_back_label = lv_label_create(ui->screen_tom_btn_back);
    lv_label_set_text(ui->screen_tom_btn_back_label, "返回");
    lv_label_set_long_mode(ui->screen_tom_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_tom_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_tom_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_tom_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_tom_btn_back, 0, 0);
    lv_obj_set_size(ui->screen_tom_btn_back, 40, 40);

    //Write style for screen_tom_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_tom_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_tom_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_tom_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_tom_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_tom_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_tom_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_tom_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_tom_btn_back, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_tom_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_tom_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_tom_label_clockdown
    ui->screen_tom_label_clockdown = lv_label_create(ui->screen_tom);
    lv_label_set_text(ui->screen_tom_label_clockdown, "25:00\n");
    lv_label_set_long_mode(ui->screen_tom_label_clockdown, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_tom_label_clockdown, 110, 130);
    lv_obj_set_size(ui->screen_tom_label_clockdown, 100, 32);

    //Write style for screen_tom_label_clockdown, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_tom_label_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_tom_label_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_tom_label_clockdown, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_tom_label_clockdown, &lv_font_Abel_regular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_tom_label_clockdown, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_tom_label_clockdown, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_tom_label_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_tom_label_clockdown, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_tom_label_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_tom_label_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_tom_label_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_tom_label_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_tom_label_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_tom_label_clockdown, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_tom_btn_begin
    ui->screen_tom_btn_begin = lv_btn_create(ui->screen_tom);
    ui->screen_tom_btn_begin_label = lv_label_create(ui->screen_tom_btn_begin);
    lv_label_set_text(ui->screen_tom_btn_begin_label, "开始");
    lv_label_set_long_mode(ui->screen_tom_btn_begin_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_tom_btn_begin_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_tom_btn_begin, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_tom_btn_begin_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_tom_btn_begin, 280, 0);
    lv_obj_set_size(ui->screen_tom_btn_begin, 40, 40);

    //Write style for screen_tom_btn_begin, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_tom_btn_begin, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_tom_btn_begin, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_tom_btn_begin, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_tom_btn_begin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_tom_btn_begin, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_tom_btn_begin, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_tom_btn_begin, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_tom_btn_begin, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_tom_btn_begin, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_tom_btn_begin, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_tom_btn_subtract
    ui->screen_tom_btn_subtract = lv_btn_create(ui->screen_tom);
    ui->screen_tom_btn_subtract_label = lv_label_create(ui->screen_tom_btn_subtract);
    lv_label_set_text(ui->screen_tom_btn_subtract_label, "-");
    lv_label_set_long_mode(ui->screen_tom_btn_subtract_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_tom_btn_subtract_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_tom_btn_subtract, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_tom_btn_subtract_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_tom_btn_subtract, 30, 126);
    lv_obj_set_size(ui->screen_tom_btn_subtract, 40, 40);

    //Write style for screen_tom_btn_subtract, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_tom_btn_subtract, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_tom_btn_subtract, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_tom_btn_subtract, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_tom_btn_subtract, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_tom_btn_subtract, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_tom_btn_subtract, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_tom_btn_subtract, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_tom_btn_subtract, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_tom_btn_subtract, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_tom_btn_subtract, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_tom_btn_plus
    ui->screen_tom_btn_plus = lv_btn_create(ui->screen_tom);
    ui->screen_tom_btn_plus_label = lv_label_create(ui->screen_tom_btn_plus);
    lv_label_set_text(ui->screen_tom_btn_plus_label, "+");
    lv_label_set_long_mode(ui->screen_tom_btn_plus_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_tom_btn_plus_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_tom_btn_plus, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_tom_btn_plus_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_tom_btn_plus, 250, 126);
    lv_obj_set_size(ui->screen_tom_btn_plus, 40, 40);
    

    //Write style for screen_tom_btn_plus, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_tom_btn_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_tom_btn_plus, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_tom_btn_plus, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_tom_btn_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_tom_btn_plus, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_tom_btn_plus, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_tom_btn_plus, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_tom_btn_plus, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_tom_btn_plus, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_tom_btn_plus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_tom.
    minutes = 25; //默认番茄钟为25分钟
    lv_group_add_obj(group_tom, guider_ui.screen_tom_btn_subtract);
    lv_group_add_obj(group_tom, guider_ui.screen_tom_btn_back);
    lv_group_add_obj(group_tom, guider_ui.screen_tom_btn_plus);
    lv_group_add_obj(group_tom, guider_ui.screen_tom_btn_begin);

    lv_group_focus_obj(ui->screen_tom_btn_back);

    //Update current screen layout.
    lv_obj_update_layout(ui->screen_tom);

    //Init events for screen.
    events_init_screen_tom(ui);
}
