/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_screen_1(lv_ui *ui){

	//Write codes screen_1
	ui->screen_1 = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->screen_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_1_main_main_default
	static lv_style_t style_screen_1_main_main_default;
	if (style_screen_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_1_main_main_default);
	else
		lv_style_init(&style_screen_1_main_main_default);
	lv_style_set_bg_color(&style_screen_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_screen_1_main_main_default, 0);
	lv_obj_add_style(ui->screen_1, &style_screen_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_1_sw_1
	ui->screen_1_sw_1 = lv_switch_create(ui->screen_1);
	lv_obj_set_pos(ui->screen_1_sw_1, 168, 94);
	lv_obj_set_size(ui->screen_1_sw_1, 40, 20);
	lv_obj_set_scrollbar_mode(ui->screen_1_sw_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_1_sw_1_main_main_default
	static lv_style_t style_screen_1_sw_1_main_main_default;
	if (style_screen_1_sw_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_1_sw_1_main_main_default);
	else
		lv_style_init(&style_screen_1_sw_1_main_main_default);
	lv_style_set_radius(&style_screen_1_sw_1_main_main_default, 100);
	lv_style_set_bg_color(&style_screen_1_sw_1_main_main_default, lv_color_make(0xe6, 0xe2, 0xe6));
	lv_style_set_bg_grad_color(&style_screen_1_sw_1_main_main_default, lv_color_make(0xe6, 0xe2, 0xe6));
	lv_style_set_bg_grad_dir(&style_screen_1_sw_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_1_sw_1_main_main_default, 255);
	lv_style_set_border_color(&style_screen_1_sw_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_1_sw_1_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_1_sw_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_1_sw_1, &style_screen_1_sw_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for style_screen_1_sw_1_main_indicator_checked
	static lv_style_t style_screen_1_sw_1_main_indicator_checked;
	if (style_screen_1_sw_1_main_indicator_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_1_sw_1_main_indicator_checked);
	else
		lv_style_init(&style_screen_1_sw_1_main_indicator_checked);
	lv_style_set_bg_color(&style_screen_1_sw_1_main_indicator_checked, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_1_sw_1_main_indicator_checked, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_1_sw_1_main_indicator_checked, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_1_sw_1_main_indicator_checked, 255);
	lv_style_set_border_color(&style_screen_1_sw_1_main_indicator_checked, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_1_sw_1_main_indicator_checked, 0);
	lv_style_set_border_opa(&style_screen_1_sw_1_main_indicator_checked, 255);
	lv_obj_add_style(ui->screen_1_sw_1, &style_screen_1_sw_1_main_indicator_checked, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for style_screen_1_sw_1_main_knob_default
	static lv_style_t style_screen_1_sw_1_main_knob_default;
	if (style_screen_1_sw_1_main_knob_default.prop_cnt > 1)
		lv_style_reset(&style_screen_1_sw_1_main_knob_default);
	else
		lv_style_init(&style_screen_1_sw_1_main_knob_default);
	lv_style_set_radius(&style_screen_1_sw_1_main_knob_default, 100);
	lv_style_set_bg_color(&style_screen_1_sw_1_main_knob_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_1_sw_1_main_knob_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_1_sw_1_main_knob_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_1_sw_1_main_knob_default, 255);
	lv_style_set_border_color(&style_screen_1_sw_1_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_1_sw_1_main_knob_default, 0);
	lv_style_set_border_opa(&style_screen_1_sw_1_main_knob_default, 255);
	lv_obj_add_style(ui->screen_1_sw_1, &style_screen_1_sw_1_main_knob_default, LV_PART_KNOB|LV_STATE_DEFAULT);
}