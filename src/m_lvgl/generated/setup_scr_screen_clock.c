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



void setup_scr_screen_clock(lv_ui *ui)
{
    //Write codes screen_clock
    ui->screen_clock = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_clock, 320, 170);
    lv_obj_set_scrollbar_mode(ui->screen_clock, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_clock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_clock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_clock, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_clock, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_clock_tabview_1
    ui->screen_clock_tabview_1 = lv_tabview_create(ui->screen_clock, LV_DIR_TOP, 50);
    lv_obj_set_pos(ui->screen_clock_tabview_1, 40, 0);
    lv_obj_set_size(ui->screen_clock_tabview_1, 280, 170);
    lv_obj_set_scrollbar_mode(ui->screen_clock_tabview_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_clock_tabview_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_clock_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_clock_tabview_1, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_clock_tabview_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_clock_tabview_1, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_clock_tabview_1, &lv_font_SIMYOU_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_clock_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_clock_tabview_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_clock_tabview_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_clock_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_clock_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_clock_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_clock_tabview_1_extra_btnm_main_default
    static lv_style_t style_screen_clock_tabview_1_extra_btnm_main_default;
    ui_init_style(&style_screen_clock_tabview_1_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_screen_clock_tabview_1_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_screen_clock_tabview_1_extra_btnm_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_clock_tabview_1_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_clock_tabview_1_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_screen_clock_tabview_1_extra_btnm_main_default, 0);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_clock_tabview_1), &style_screen_clock_tabview_1_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_clock_tabview_1_extra_btnm_items_default
    static lv_style_t style_screen_clock_tabview_1_extra_btnm_items_default;
    ui_init_style(&style_screen_clock_tabview_1_extra_btnm_items_default);

    lv_style_set_text_color(&style_screen_clock_tabview_1_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
    lv_style_set_text_font(&style_screen_clock_tabview_1_extra_btnm_items_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_clock_tabview_1_extra_btnm_items_default, 255);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_clock_tabview_1), &style_screen_clock_tabview_1_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_clock_tabview_1_extra_btnm_items_checked
    static lv_style_t style_screen_clock_tabview_1_extra_btnm_items_checked;
    ui_init_style(&style_screen_clock_tabview_1_extra_btnm_items_checked);

    lv_style_set_text_color(&style_screen_clock_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_text_font(&style_screen_clock_tabview_1_extra_btnm_items_checked, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_clock_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_screen_clock_tabview_1_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_screen_clock_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_screen_clock_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_screen_clock_tabview_1_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_clock_tabview_1_extra_btnm_items_checked, 0);
    lv_style_set_bg_opa(&style_screen_clock_tabview_1_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_screen_clock_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_bg_grad_dir(&style_screen_clock_tabview_1_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_clock_tabview_1), &style_screen_clock_tabview_1_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

    //Write codes 闹钟1
    ui->screen_clock_tabview_1_tab_1 = lv_tabview_add_tab(ui->screen_clock_tabview_1,"闹钟1");
    lv_obj_t * screen_clock_tabview_1_tab_1_label = lv_label_create(ui->screen_clock_tabview_1_tab_1);
    lv_label_set_text(screen_clock_tabview_1_tab_1_label, "");

    //Write codes screen_clock_bar_1
    ui->screen_clock_bar_1 = lv_bar_create(ui->screen_clock_tabview_1_tab_1);
    lv_obj_set_style_anim_time(ui->screen_clock_bar_1, 1000, 0);
    lv_bar_set_mode(ui->screen_clock_bar_1, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->screen_clock_bar_1, 0, 100);
    lv_bar_set_value(ui->screen_clock_bar_1, 50, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_clock_bar_1, 159, -11);
    lv_obj_set_size(ui->screen_clock_bar_1, 90, 20);

    //Write style for screen_clock_bar_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_clock_bar_1, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_clock_bar_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_clock_bar_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_clock_bar_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_clock_bar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_clock_bar_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_clock_bar_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_clock_bar_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_clock_bar_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_clock_bar_1, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes 闹钟2
    ui->screen_clock_tabview_1_tab_2 = lv_tabview_add_tab(ui->screen_clock_tabview_1,"闹钟2");
    lv_obj_t * screen_clock_tabview_1_tab_2_label = lv_label_create(ui->screen_clock_tabview_1_tab_2);
    lv_label_set_text(screen_clock_tabview_1_tab_2_label, "con2");

    //Write codes 闹钟3
    ui->screen_clock_tabview_1_tab_3 = lv_tabview_add_tab(ui->screen_clock_tabview_1,"闹钟3");
    lv_obj_t * screen_clock_tabview_1_tab_3_label = lv_label_create(ui->screen_clock_tabview_1_tab_3);
    lv_label_set_text(screen_clock_tabview_1_tab_3_label, "con3");

    //Write codes 闹钟4
    ui->screen_clock_tabview_1_tab_4 = lv_tabview_add_tab(ui->screen_clock_tabview_1,"闹钟4");
    lv_obj_t * screen_clock_tabview_1_tab_4_label = lv_label_create(ui->screen_clock_tabview_1_tab_4);
    lv_label_set_text(screen_clock_tabview_1_tab_4_label, "text");

    //Write codes 闹钟5
    ui->screen_clock_tabview_1_tab_5 = lv_tabview_add_tab(ui->screen_clock_tabview_1,"闹钟5");
    lv_obj_t * screen_clock_tabview_1_tab_5_label = lv_label_create(ui->screen_clock_tabview_1_tab_5);
    lv_label_set_text(screen_clock_tabview_1_tab_5_label, "text");

    //Write codes screen_clock_btn_1
    ui->screen_clock_btn_1 = lv_btn_create(ui->screen_clock);
    ui->screen_clock_btn_1_label = lv_label_create(ui->screen_clock_btn_1);
    lv_label_set_text(ui->screen_clock_btn_1_label, "返回");
    lv_label_set_long_mode(ui->screen_clock_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_clock_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_clock_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_clock_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_clock_btn_1, 0, 0);
    lv_obj_set_size(ui->screen_clock_btn_1, 40, 40);

    //Write style for screen_clock_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_clock_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_clock_btn_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_clock_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_clock_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_clock_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_clock_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_clock_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_clock_btn_1, &lv_font_SIMYOU_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_clock_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_clock_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_clock.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_clock);

    //Init events for screen.
    events_init_screen_clock(ui);
}
