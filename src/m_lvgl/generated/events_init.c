/*
* Copyright 2024 NXP
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

static void screen_tomato_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_tom, guider_ui.screen_tom_del, &guider_ui.screen_del, setup_scr_screen_tom, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 200, false, true);
        lv_indev_set_group(indev_keypad, group_tom);

        break;
    }
    case LV_EVENT_FOCUSED:
    {
        lv_obj_set_y(guider_ui.screen_tomato, 121);
        break;
    }
    case LV_EVENT_DEFOCUSED:
    {
        lv_obj_set_y(guider_ui.screen_tomato, 126);
        break;
    }
    default:
        break;
    }
}

static void screen_setting_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_set, guider_ui.screen_set_del, &guider_ui.screen_del, setup_scr_screen_set, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 200, false, true);
        lv_indev_set_group(indev_keypad, group_set);
        break;
    }
    case LV_EVENT_FOCUSED:
    {
        lv_obj_set_y(guider_ui.screen_setting, 121);
        break;
    }
    case LV_EVENT_DEFOCUSED:
    {
        lv_obj_set_y(guider_ui.screen_setting, 126);
        break;
    }
    default:
        break;
    }
}

void events_init_screen (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_tomato, screen_tomato_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_setting, screen_setting_event_handler, LV_EVENT_ALL, ui);
}

/*
    设置界面
*/
static void screen_set_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen, guider_ui.screen_del, &guider_ui.screen_set_del, setup_scr_screen, LV_SCR_LOAD_ANIM_MOVE_TOP, 200, 200, false, true);
        lv_indev_set_group(indev_keypad, group_home);
        break;
    }
    default:
        break;
    }
}

static void screen_set_btn_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_time, guider_ui.screen_time_del, &guider_ui.screen_set_del, setup_scr_screen_time, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_set_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_clock, guider_ui.screen_clock_del, &guider_ui.screen_set_del, setup_scr_screen_clock, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}


void events_init_screen_set (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_set_btn_1, screen_set_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_set_btn_4, screen_set_btn_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_set_btn_3, screen_set_btn_3_event_handler, LV_EVENT_ALL, ui);
}

static void screen_tom_btn_back_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen, guider_ui.screen_del, &guider_ui.screen_tom_del, setup_scr_screen, LV_SCR_LOAD_ANIM_MOVE_TOP, 200, 200, false, true);
        lv_indev_set_group(indev_keypad, group_home);

        break;
    }
    default:
        break;
    }
}

static void screen_tom_btn_begin_event_handler (lv_event_t *e)
{
    static char tomato_flag = 0;
    char str[7];  // 足够容纳数字字符和字符串结束符
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        if(tomato_flag == 0 ){
        dsec = minutes*60;
        dsec0 = dsec;
        lv_label_set_text(guider_ui.screen_tom_btn_begin_label, "停止");
        lv_arc_set_range(guider_ui.screen_tom_clockdown, 0, dsec0);
        lv_arc_set_value(guider_ui.screen_tom_clockdown, 0);

        timerAlarmEnable(tim1);
        tomato_flag = 1;
        }
        else{
            timerAlarmDisable(tim1);
            lv_arc_set_value(guider_ui.screen_tom_clockdown, dsec0);
            sprintf(str, "%02d", minutes);
            lv_label_set_text(guider_ui.screen_tom_label_clockdown, strcat(str ,":00\n") );
            tomato_flag = 0;
        }
        
        break;
    }
    default:
        break;
    }
}


static void screen_tom_btn_plus_event_handler (lv_event_t *e)
{
    char str[7];  // 足够容纳数字字符和字符串结束符
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_LONG_PRESSED_REPEAT:
    {
        minutes++;
        sprintf(str, "%02d", minutes);
        lv_label_set_text(guider_ui.screen_tom_label_clockdown, strcat(str ,":00\n") );
        break;
    }
    case LV_EVENT_CLICKED:
    {
        minutes++;
        sprintf(str, "%02d", minutes);
        lv_label_set_text(guider_ui.screen_tom_label_clockdown, strcat(str ,":00\n") );

        break;
    }
    default:
        break;
    }
}

static void screen_tom_btn_subtract_event_handler (lv_event_t *e)
{
    char str[7];  // 足够容纳数字字符和字符串结束符
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_LONG_PRESSED_REPEAT:
    {
        if(minutes == 0) break;
        minutes--;
        sprintf(str, "%02d", minutes);
        lv_label_set_text(guider_ui.screen_tom_label_clockdown, strcat(str ,":00\n") );
        break;
    }
    case LV_EVENT_CLICKED:
    {
        if(minutes == 0) break;
        minutes--;
        sprintf(str, "%02d", minutes);
        lv_label_set_text(guider_ui.screen_tom_label_clockdown, strcat(str ,":00\n") );

        break;
    }
    default:
        break;
    }
}

void events_init_screen_tom (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_tom_btn_back, screen_tom_btn_back_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_tom_btn_plus, screen_tom_btn_plus_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_tom_btn_subtract, screen_tom_btn_subtract_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_tom_btn_begin, screen_tom_btn_begin_event_handler, LV_EVENT_ALL, ui);

}

static void screen_time_event_handler (lv_event_t *e)
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

static void screen_time_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_set, guider_ui.screen_set_del, &guider_ui.screen_time_del, setup_scr_screen_set, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_time (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_time, screen_time_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_time_btn_1, screen_time_btn_1_event_handler, LV_EVENT_ALL, ui);
}

static void screen_clock_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_CLICKED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_set, guider_ui.screen_set_del, &guider_ui.screen_clock_del, setup_scr_screen_set, LV_SCR_LOAD_ANIM_NONE, 200, 200, false, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_clock (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_clock_btn_1, screen_clock_btn_1_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
