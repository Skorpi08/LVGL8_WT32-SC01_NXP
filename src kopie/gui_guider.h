/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *screen_counter;
	lv_obj_t *screen_plus;
	lv_obj_t *screen_plus_label;
	lv_obj_t *screen_minus;
	lv_obj_t *screen_minus_label;
	lv_obj_t *screen_btn_1;
	lv_obj_t *screen_btn_1_label;
	lv_obj_t *screen_1;
	bool screen_1_del;
	lv_obj_t *screen_1_sw_1;
}lv_ui;

void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_screen(lv_ui *ui);
void setup_scr_screen_1(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif