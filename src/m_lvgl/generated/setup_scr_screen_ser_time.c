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


void setup_scr_screen_ser_time(lv_ui *ui)
{
    //Write codes screen_ser_time
    ui->screen_ser_time = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_ser_time, 320, 170);
    lv_obj_set_scrollbar_mode(ui->screen_ser_time, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_ser_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_ser_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_ser_time, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_ser_time, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ser_time_btn_1
    ui->screen_ser_time_btn_1 = lv_btn_create(ui->screen_ser_time);
    ui->screen_ser_time_btn_1_label = lv_label_create(ui->screen_ser_time_btn_1);
    lv_label_set_text(ui->screen_ser_time_btn_1_label, "返回");
    lv_label_set_long_mode(ui->screen_ser_time_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_ser_time_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_ser_time_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_ser_time_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_ser_time_btn_1, 0, 0);
    lv_obj_set_size(ui->screen_ser_time_btn_1, 40, 40);

    //Write style for screen_ser_time_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_ser_time_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_ser_time_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_ser_time_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_ser_time_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ser_time_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ser_time_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ser_time_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ser_time_btn_1, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ser_time_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ser_time_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ser_time_QR_time
    ui->screen_ser_time_QR_time = lv_img_create(ui->screen_ser_time);
    lv_obj_add_flag(ui->screen_ser_time_QR_time, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_ser_time_QR_time, &_verifyTime_alpha_150x150);
    lv_img_set_pivot(ui->screen_ser_time_QR_time, 50,50);
    lv_img_set_angle(ui->screen_ser_time_QR_time, 0);
    lv_obj_set_pos(ui->screen_ser_time_QR_time, 85, 10);
    lv_obj_set_size(ui->screen_ser_time_QR_time, 150, 150);

    //Write style for screen_ser_time_QR_time, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_ser_time_QR_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_ser_time_QR_time, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ser_time_QR_time, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_ser_time_QR_time, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_ser_time_btn_2
    ui->screen_ser_time_btn_2 = lv_btn_create(ui->screen_ser_time);
    ui->screen_ser_time_btn_2_label = lv_label_create(ui->screen_ser_time_btn_2);
    lv_label_set_text(ui->screen_ser_time_btn_2_label, "校准");
    lv_label_set_long_mode(ui->screen_ser_time_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_ser_time_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_ser_time_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_ser_time_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_ser_time_btn_2, 280, 0);
    lv_obj_set_size(ui->screen_ser_time_btn_2, 40, 40);

    //Write style for screen_ser_time_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_ser_time_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_ser_time_btn_2, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_ser_time_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_ser_time_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_ser_time_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_ser_time_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_ser_time_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_ser_time_btn_2, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_ser_time_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_ser_time_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_ser_time.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_ser_time);

    //Init events for screen.
    events_init_screen_ser_time(ui);
}
