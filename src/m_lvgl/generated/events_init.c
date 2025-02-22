/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"
#include "Arduino.h"
#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif

extern unsigned int minutes;
extern lv_indev_t * indev_keypad;
extern lv_group_t * group_tom;
extern lv_group_t * group_home;
extern lv_group_t * group_set;

extern hw_timer_t *tim1;
extern time_t dsec;
extern time_t dsec0;

static void screen_home_tomato_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_tom, guider_ui.screen_tom_del, &guider_ui.screen_home_del, setup_scr_screen_tom, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 200, false, true);
        lv_indev_set_group(indev_keypad, group_tom);
        break;
    }
    case LV_EVENT_FOCUSED:
    {
        lv_obj_set_y(guider_ui.screen_home_tomato, 121);
        break;
    }
    case LV_EVENT_DEFOCUSED:
    {
        lv_obj_set_y(guider_ui.screen_home_tomato, 126);
        break;
    }
    default:
        break;
    }
}

static void screen_home_setting_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_set, guider_ui.screen_set_del, &guider_ui.screen_home_del, setup_scr_screen_set, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 200, false, true);
        lv_indev_set_group(indev_keypad, group_set);
        break;
    }
    case LV_EVENT_FOCUSED:
    {
        lv_obj_set_y(guider_ui.screen_home_setting, 121);
        break;
    }
    case LV_EVENT_DEFOCUSED:
    {
        lv_obj_set_y(guider_ui.screen_home_setting, 126);
        break;
    }
    default:
        break;
    }
}

static void screen_home_imgbtn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_zhexian, guider_ui.screen_zhexian_del, &guider_ui.screen_home_del, setup_scr_screen_zhexian, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_home_imgbtn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_zhuzhuang, guider_ui.screen_zhuzhuang_del, &guider_ui.screen_home_del, setup_scr_screen_zhuzhuang, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_home (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_home_tomato, screen_home_tomato_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_setting, screen_home_setting_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_imgbtn_1, screen_home_imgbtn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_home_imgbtn_2, screen_home_imgbtn_2_event_handler, LV_EVENT_ALL, ui);
}

static void screen_tom_btn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, guider_ui.screen_home_del, &guider_ui.screen_tom_del, setup_scr_screen_home, LV_SCR_LOAD_ANIM_MOVE_TOP, 200, 200, false, true);
        lv_indev_set_group(indev_keypad, group_home);
        break;
    }
    default:
        break;
    }
}

static void screen_tom_btn_begin_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        /*
        my word
        */
        break;
    }
    default:
        break;
    }
}

static void screen_tom_btn_subtract_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        //my
        break;
    }
    case LV_EVENT_LONG_PRESSED_REPEAT:
    {
        //my
        break;
    }
    default:
        break;
    }
}

static void screen_tom_btn_plus_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_LONG_PRESSED_REPEAT:
    {
        //my
        break;
    }
    case LV_EVENT_PRESSED:
    {
        //my
        break;
    }
    default:
        break;
    }
}

void events_init_screen_tom (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_tom_btn_back, screen_tom_btn_back_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_tom_btn_begin, screen_tom_btn_begin_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_tom_btn_subtract, screen_tom_btn_subtract_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_tom_btn_plus, screen_tom_btn_plus_event_handler, LV_EVENT_ALL, ui);
}

static void screen_set_btn_set_aural_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_set_aural, guider_ui.screen_set_aural_del, &guider_ui.screen_set_del, setup_scr_screen_set_aural, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        lv_indev_set_group(indev_keypad, group_home);
        break;
    }
    default:
        break;
    }
}

static void screen_set_btn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, guider_ui.screen_home_del, &guider_ui.screen_set_del, setup_scr_screen_home, LV_SCR_LOAD_ANIM_MOVE_TOP, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_set_btn_set_time_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_ser_time, guider_ui.screen_ser_time_del, &guider_ui.screen_set_del, setup_scr_screen_ser_time, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_set (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_set_btn_set_aural, screen_set_btn_set_aural_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_set_btn_back, screen_set_btn_back_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_set_btn_set_time, screen_set_btn_set_time_event_handler, LV_EVENT_ALL, ui);
}

static void screen_ser_time_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {

        break;
    }
    default:
        break;
    }
}

static void screen_ser_time_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_set, guider_ui.screen_set_del, &guider_ui.screen_ser_time_del, setup_scr_screen_set, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_ser_time_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_LONG_PRESSED:
    {
        //my

        break;
    }
    default:
        break;
    }
}

void events_init_screen_ser_time (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_ser_time, screen_ser_time_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_ser_time_btn_1, screen_ser_time_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_ser_time_btn_2, screen_ser_time_btn_2_event_handler, LV_EVENT_ALL, ui);
}

static void screen_set_clock_btn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_set, guider_ui.screen_set_del, &guider_ui.screen_set_clock_del, setup_scr_screen_set, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_set_clock (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_set_clock_btn_back, screen_set_clock_btn_back_event_handler, LV_EVENT_ALL, ui);
}

static void screen_set_aural_slider_buzzer_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        //my
        break;
    }
    default:
        break;
    }
}

static void screen_set_aural_slider_motor_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        //my
        break;
    }
    default:
        break;
    }
}

static void screen_set_aural_slider_light_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        //my
        break;
    }
    default:
        break;
    }
}

static void screen_set_aural_btn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_set, guider_ui.screen_set_del, &guider_ui.screen_set_aural_del, setup_scr_screen_set, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_set_aural (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_set_aural_slider_buzzer, screen_set_aural_slider_buzzer_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_set_aural_slider_motor, screen_set_aural_slider_motor_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_set_aural_slider_light, screen_set_aural_slider_light_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_set_aural_btn_back, screen_set_aural_btn_back_event_handler, LV_EVENT_ALL, ui);
}

static void screen_zhexian_btn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, guider_ui.screen_home_del, &guider_ui.screen_zhexian_del, setup_scr_screen_home, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_zhexian (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_zhexian_btn_back, screen_zhexian_btn_back_event_handler, LV_EVENT_ALL, ui);
}

static void screen_zhuzhuang_btn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_home, guider_ui.screen_home_del, &guider_ui.screen_zhuzhuang_del, setup_scr_screen_home, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_zhuzhuang (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_zhuzhuang_btn_back, screen_zhuzhuang_btn_back_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
