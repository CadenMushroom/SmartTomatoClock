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


void setup_scr_screen_zhuzhuang(lv_ui *ui)
{
    //Write codes screen_zhuzhuang
    ui->screen_zhuzhuang = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_zhuzhuang, 320, 170);
    lv_obj_set_scrollbar_mode(ui->screen_zhuzhuang, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_zhuzhuang, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_zhuzhuang, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_zhuzhuang, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_zhuzhuang, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_zhuzhuang_btn_back
    ui->screen_zhuzhuang_btn_back = lv_btn_create(ui->screen_zhuzhuang);
    ui->screen_zhuzhuang_btn_back_label = lv_label_create(ui->screen_zhuzhuang_btn_back);
    lv_label_set_text(ui->screen_zhuzhuang_btn_back_label, "返回");
    lv_label_set_long_mode(ui->screen_zhuzhuang_btn_back_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_zhuzhuang_btn_back_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_zhuzhuang_btn_back, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_zhuzhuang_btn_back_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_zhuzhuang_btn_back, 0, 0);
    lv_obj_set_size(ui->screen_zhuzhuang_btn_back, 40, 40);

    //Write style for screen_zhuzhuang_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_zhuzhuang_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_zhuzhuang_btn_back, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_zhuzhuang_btn_back, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_zhuzhuang_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_zhuzhuang_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_zhuzhuang_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_zhuzhuang_btn_back, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_zhuzhuang_btn_back, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_zhuzhuang_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_zhuzhuang_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_zhuzhuang_chart_1
    ui->screen_zhuzhuang_chart_1 = lv_chart_create(ui->screen_zhuzhuang);
    lv_chart_set_type(ui->screen_zhuzhuang_chart_1, LV_CHART_TYPE_BAR);
    lv_chart_set_div_line_count(ui->screen_zhuzhuang_chart_1, 3, 5);
    lv_chart_set_point_count(ui->screen_zhuzhuang_chart_1, 7);
    lv_chart_set_range(ui->screen_zhuzhuang_chart_1, LV_CHART_AXIS_PRIMARY_Y, 0, 24);
    lv_chart_set_axis_tick(ui->screen_zhuzhuang_chart_1, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 4, 6, true, 40);
    lv_chart_set_range(ui->screen_zhuzhuang_chart_1, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
    lv_chart_set_axis_tick(ui->screen_zhuzhuang_chart_1, LV_CHART_AXIS_PRIMARY_X, 5, 7, 7, 1, true, 40);
    lv_chart_set_zoom_x(ui->screen_zhuzhuang_chart_1, 256);
    lv_chart_set_zoom_y(ui->screen_zhuzhuang_chart_1, 256);
    ui->screen_zhuzhuang_chart_1_0 = lv_chart_add_series(ui->screen_zhuzhuang_chart_1, lv_color_hex(0x0032ff), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_0, 4);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_0, 0);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_0, 7);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_0, 3);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_0, 2);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_0, 8);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_0, 8);
#endif
    ui->screen_zhuzhuang_chart_1_1 = lv_chart_add_series(ui->screen_zhuzhuang_chart_1, lv_color_hex(0x00ff40), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_1, 4);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_1, 2);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_1, 12);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_1, 3);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_1, 2);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_1, 8);
    lv_chart_set_next_value(ui->screen_zhuzhuang_chart_1, ui->screen_zhuzhuang_chart_1_1, 10);
#endif
    lv_obj_set_pos(ui->screen_zhuzhuang_chart_1, 80, 23);
    lv_obj_set_size(ui->screen_zhuzhuang_chart_1, 200, 117);
    lv_obj_set_scrollbar_mode(ui->screen_zhuzhuang_chart_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_zhuzhuang_chart_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_zhuzhuang_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_zhuzhuang_chart_1, lv_color_hex(0x979a8c), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_zhuzhuang_chart_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_zhuzhuang_chart_1, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_zhuzhuang_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_zhuzhuang_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_zhuzhuang_chart_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_zhuzhuang_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_zhuzhuang_chart_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_zhuzhuang_chart_1, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_zhuzhuang_chart_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_zhuzhuang_chart_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_zhuzhuang_chart_1, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_zhuzhuang_chart_1, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_zhuzhuang_chart_1, &lv_font_montserratMedium_12, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_zhuzhuang_chart_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui->screen_zhuzhuang_chart_1, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_zhuzhuang_chart_1, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_zhuzhuang_chart_1, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

    //Write codes screen_zhuzhuang_label_3
    ui->screen_zhuzhuang_label_3 = lv_label_create(ui->screen_zhuzhuang);
    lv_label_set_text(ui->screen_zhuzhuang_label_3, "番茄周期比较");
    lv_label_set_long_mode(ui->screen_zhuzhuang_label_3, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_zhuzhuang_label_3, 125, 3);
    lv_obj_set_size(ui->screen_zhuzhuang_label_3, 108, 16);

    //Write style for screen_zhuzhuang_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_zhuzhuang_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_zhuzhuang_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_zhuzhuang_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_zhuzhuang_label_3, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_zhuzhuang_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_zhuzhuang_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_zhuzhuang_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_zhuzhuang_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_zhuzhuang_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_zhuzhuang_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_zhuzhuang_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_zhuzhuang_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_zhuzhuang_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_zhuzhuang_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_zhuzhuang_line_2
    ui->screen_zhuzhuang_line_2 = lv_line_create(ui->screen_zhuzhuang);
    static lv_point_t screen_zhuzhuang_line_2[] = {{0, 0},{50, 0},};
    lv_line_set_points(ui->screen_zhuzhuang_line_2, screen_zhuzhuang_line_2, 2);
    lv_obj_set_pos(ui->screen_zhuzhuang_line_2, 2, 126);
    lv_obj_set_size(ui->screen_zhuzhuang_line_2, 55, 10);

    //Write style for screen_zhuzhuang_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_zhuzhuang_line_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_zhuzhuang_line_2, lv_color_hex(0x0032FF), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_zhuzhuang_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_zhuzhuang_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_zhuzhuang_label_2
    ui->screen_zhuzhuang_label_2 = lv_label_create(ui->screen_zhuzhuang);
    lv_label_set_text(ui->screen_zhuzhuang_label_2, "上周期");
    lv_label_set_long_mode(ui->screen_zhuzhuang_label_2, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_zhuzhuang_label_2, 2, 100);
    lv_obj_set_size(ui->screen_zhuzhuang_label_2, 54, 16);

    //Write style for screen_zhuzhuang_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_zhuzhuang_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_zhuzhuang_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_zhuzhuang_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_zhuzhuang_label_2, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_zhuzhuang_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_zhuzhuang_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_zhuzhuang_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_zhuzhuang_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_zhuzhuang_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_zhuzhuang_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_zhuzhuang_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_zhuzhuang_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_zhuzhuang_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_zhuzhuang_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_zhuzhuang_label_1
    ui->screen_zhuzhuang_label_1 = lv_label_create(ui->screen_zhuzhuang);
    lv_label_set_text(ui->screen_zhuzhuang_label_1, "本周期");
    lv_label_set_long_mode(ui->screen_zhuzhuang_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_zhuzhuang_label_1, 2, 50);
    lv_obj_set_size(ui->screen_zhuzhuang_label_1, 54, 16);

    //Write style for screen_zhuzhuang_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_zhuzhuang_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_zhuzhuang_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_zhuzhuang_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_zhuzhuang_label_1, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_zhuzhuang_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_zhuzhuang_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_zhuzhuang_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_zhuzhuang_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_zhuzhuang_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_zhuzhuang_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_zhuzhuang_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_zhuzhuang_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_zhuzhuang_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_zhuzhuang_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_zhuzhuang_line_1
    ui->screen_zhuzhuang_line_1 = lv_line_create(ui->screen_zhuzhuang);
    static lv_point_t screen_zhuzhuang_line_1[] = {{0, 0},{50, 0},};
    lv_line_set_points(ui->screen_zhuzhuang_line_1, screen_zhuzhuang_line_1, 2);
    lv_obj_set_pos(ui->screen_zhuzhuang_line_1, 2, 76);
    lv_obj_set_size(ui->screen_zhuzhuang_line_1, 55, 10);

    //Write style for screen_zhuzhuang_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_zhuzhuang_line_1, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_zhuzhuang_line_1, lv_color_hex(0x00ff40), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_zhuzhuang_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_zhuzhuang_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_zhuzhuang.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_zhuzhuang);

    //Init events for screen.
    events_init_screen_zhuzhuang(ui);
}
