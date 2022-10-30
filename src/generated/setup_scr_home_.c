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

static lv_obj_t * g_kb;
static void kb_event_cb(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	lv_obj_t *kb = lv_event_get_target(e);
	if(code == LV_EVENT_READY || code == LV_EVENT_CANCEL){
		lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
}
static void ta_event_cb(lv_event_t *e)
{

	lv_event_code_t code = lv_event_get_code(e);
	lv_obj_t *ta = lv_event_get_target(e);
	lv_obj_t *kb = lv_event_get_user_data(e);
	if (code == LV_EVENT_FOCUSED)
	{
		lv_keyboard_set_textarea(kb, ta);
		lv_obj_move_foreground(kb);
		lv_obj_clear_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
	if (code == LV_EVENT_DEFOCUSED)
	{
		lv_keyboard_set_textarea(kb, NULL);
		lv_obj_move_background(kb);
		lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
}

void setup_scr_home_(lv_ui *ui){

	//Write codes home_
	ui->home_ = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->home_, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_home__main_main_default
	static lv_style_t style_home__main_main_default;
	if (style_home__main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__main_main_default);
	else
		lv_style_init(&style_home__main_main_default);
	lv_style_set_bg_color(&style_home__main_main_default, lv_color_make(0x28, 0x28, 0x28));
	lv_style_set_bg_opa(&style_home__main_main_default, 255);
	lv_obj_add_style(ui->home_, &style_home__main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes home__img_1
	ui->home__img_1 = lv_img_create(ui->home_);
	lv_obj_set_pos(ui->home__img_1, 68, 85);
	lv_obj_set_size(ui->home__img_1, 350, 150);
	lv_obj_set_scrollbar_mode(ui->home__img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_home__img_1_main_main_default
	static lv_style_t style_home__img_1_main_main_default;
	if (style_home__img_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__img_1_main_main_default);
	else
		lv_style_init(&style_home__img_1_main_main_default);
	lv_style_set_img_recolor(&style_home__img_1_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_home__img_1_main_main_default, 79);
	lv_style_set_img_opa(&style_home__img_1_main_main_default, 255);
	lv_obj_add_style(ui->home__img_1, &style_home__img_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->home__img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->home__img_1,&_FludNC_350_trans_350x150);
	lv_img_set_pivot(ui->home__img_1, 0,0);
	lv_img_set_angle(ui->home__img_1, 0);

	//Write codes home__top_bar
	ui->home__top_bar = lv_obj_create(ui->home_);
	lv_obj_set_pos(ui->home__top_bar, 0, 0);
	lv_obj_set_size(ui->home__top_bar, 480, 30);
	lv_obj_set_scrollbar_mode(ui->home__top_bar, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_home__top_bar_main_main_default
	static lv_style_t style_home__top_bar_main_main_default;
	if (style_home__top_bar_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__top_bar_main_main_default);
	else
		lv_style_init(&style_home__top_bar_main_main_default);
	lv_style_set_radius(&style_home__top_bar_main_main_default, 5);
	lv_style_set_bg_color(&style_home__top_bar_main_main_default, lv_color_make(0x82, 0x82, 0x82));
	lv_style_set_bg_grad_color(&style_home__top_bar_main_main_default, lv_color_make(0xc9, 0xc9, 0xc9));
	lv_style_set_bg_grad_dir(&style_home__top_bar_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_home__top_bar_main_main_default, 255);
	lv_style_set_border_color(&style_home__top_bar_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_home__top_bar_main_main_default, 0);
	lv_style_set_border_opa(&style_home__top_bar_main_main_default, 255);
	lv_style_set_pad_left(&style_home__top_bar_main_main_default, 0);
	lv_style_set_pad_right(&style_home__top_bar_main_main_default, 0);
	lv_style_set_pad_top(&style_home__top_bar_main_main_default, 0);
	lv_style_set_pad_bottom(&style_home__top_bar_main_main_default, 0);
	lv_obj_add_style(ui->home__top_bar, &style_home__top_bar_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes home__label_1
	ui->home__label_1 = lv_label_create(ui->home__top_bar);
	lv_obj_set_pos(ui->home__label_1, 6, 4);
	lv_obj_set_size(ui->home__label_1, 427, 25);
	lv_obj_set_scrollbar_mode(ui->home__label_1, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->home__label_1, "Wifi not connected");
	lv_label_set_long_mode(ui->home__label_1, LV_LABEL_LONG_DOT);

	//Write style state: LV_STATE_DEFAULT for style_home__label_1_main_main_default
	static lv_style_t style_home__label_1_main_main_default;
	if (style_home__label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__label_1_main_main_default);
	else
		lv_style_init(&style_home__label_1_main_main_default);
	lv_style_set_radius(&style_home__label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_home__label_1_main_main_default, lv_color_make(0xf6, 0x23, 0x23));
	lv_style_set_bg_grad_color(&style_home__label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_home__label_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__label_1_main_main_default, 0);
	lv_style_set_text_color(&style_home__label_1_main_main_default, lv_color_make(0xff, 0x00, 0x00));
	lv_style_set_text_font(&style_home__label_1_main_main_default, &lv_font_arial_24);
	lv_style_set_text_letter_space(&style_home__label_1_main_main_default, 0);
	lv_style_set_text_line_space(&style_home__label_1_main_main_default, 0);
	lv_style_set_text_align(&style_home__label_1_main_main_default, LV_TEXT_ALIGN_LEFT);
	lv_style_set_pad_left(&style_home__label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_home__label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_home__label_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_home__label_1_main_main_default, 0);
	lv_obj_add_style(ui->home__label_1, &style_home__label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes home__img_2
	ui->home__img_2 = lv_img_create(ui->home__top_bar);
	lv_obj_set_pos(ui->home__img_2, 449, 4);
	lv_obj_set_size(ui->home__img_2, 25, 20);
	lv_obj_set_scrollbar_mode(ui->home__img_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_home__img_2_main_main_default
	static lv_style_t style_home__img_2_main_main_default;
	if (style_home__img_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__img_2_main_main_default);
	else
		lv_style_init(&style_home__img_2_main_main_default);
	lv_style_set_img_recolor(&style_home__img_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_home__img_2_main_main_default, 0);
	lv_style_set_img_opa(&style_home__img_2_main_main_default, 255);
	lv_obj_add_style(ui->home__img_2, &style_home__img_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->home__img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->home__img_2,&_no_wifi_25x20);
	lv_img_set_pivot(ui->home__img_2, 0,0);
	lv_img_set_angle(ui->home__img_2, 0);

	//Write codes home__cont_1
	ui->home__cont_1 = lv_obj_create(ui->home_);
	lv_obj_set_pos(ui->home__cont_1, 0, 0);
	lv_obj_set_size(ui->home__cont_1, 480, 320);
	lv_obj_set_scrollbar_mode(ui->home__cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_home__cont_1_main_main_default
	static lv_style_t style_home__cont_1_main_main_default;
	if (style_home__cont_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__cont_1_main_main_default);
	else
		lv_style_init(&style_home__cont_1_main_main_default);
	lv_style_set_radius(&style_home__cont_1_main_main_default, 0);
	lv_style_set_bg_color(&style_home__cont_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_home__cont_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_home__cont_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__cont_1_main_main_default, 0);
	lv_style_set_border_color(&style_home__cont_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_home__cont_1_main_main_default, 0);
	lv_style_set_border_opa(&style_home__cont_1_main_main_default, 0);
	lv_style_set_pad_left(&style_home__cont_1_main_main_default, 0);
	lv_style_set_pad_right(&style_home__cont_1_main_main_default, 0);
	lv_style_set_pad_top(&style_home__cont_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_home__cont_1_main_main_default, 0);
	lv_obj_add_style(ui->home__cont_1, &style_home__cont_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes home__ta_2
	ui->home__ta_2 = lv_textarea_create(ui->home__cont_1);
	lv_obj_set_pos(ui->home__ta_2, 200, 212);
	lv_obj_set_size(ui->home__ta_2, 260, 36);
	lv_obj_set_scrollbar_mode(ui->home__ta_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_home__ta_2_main_main_default
	static lv_style_t style_home__ta_2_main_main_default;
	if (style_home__ta_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__ta_2_main_main_default);
	else
		lv_style_init(&style_home__ta_2_main_main_default);
	lv_style_set_radius(&style_home__ta_2_main_main_default, 4);
	lv_style_set_bg_color(&style_home__ta_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home__ta_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home__ta_2_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__ta_2_main_main_default, 255);
	lv_style_set_border_color(&style_home__ta_2_main_main_default, lv_color_make(0xe6, 0xe6, 0xe6));
	lv_style_set_border_width(&style_home__ta_2_main_main_default, 2);
	lv_style_set_border_opa(&style_home__ta_2_main_main_default, 255);
	lv_style_set_text_color(&style_home__ta_2_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_home__ta_2_main_main_default, &lv_font_simsun_24);
	lv_style_set_text_letter_space(&style_home__ta_2_main_main_default, 2);
	lv_style_set_text_align(&style_home__ta_2_main_main_default, LV_TEXT_ALIGN_LEFT);
	lv_style_set_pad_left(&style_home__ta_2_main_main_default, 4);
	lv_style_set_pad_right(&style_home__ta_2_main_main_default, 4);
	lv_style_set_pad_top(&style_home__ta_2_main_main_default, 4);
	lv_style_set_pad_bottom(&style_home__ta_2_main_main_default, 4);
	lv_obj_add_style(ui->home__ta_2, &style_home__ta_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_textarea_set_text(ui->home__ta_2,"192.168.178.191");

	//Write codes home__ta_1
	ui->home__ta_1 = lv_textarea_create(ui->home__cont_1);
	lv_obj_set_pos(ui->home__ta_1, 200, 138);
	lv_obj_set_size(ui->home__ta_1, 260, 36);
	lv_obj_set_scrollbar_mode(ui->home__ta_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_home__ta_1_main_main_default
	static lv_style_t style_home__ta_1_main_main_default;
	if (style_home__ta_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__ta_1_main_main_default);
	else
		lv_style_init(&style_home__ta_1_main_main_default);
	lv_style_set_radius(&style_home__ta_1_main_main_default, 4);
	lv_style_set_bg_color(&style_home__ta_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home__ta_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home__ta_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__ta_1_main_main_default, 255);
	lv_style_set_border_color(&style_home__ta_1_main_main_default, lv_color_make(0xe6, 0xe6, 0xe6));
	lv_style_set_border_width(&style_home__ta_1_main_main_default, 2);
	lv_style_set_border_opa(&style_home__ta_1_main_main_default, 255);
	lv_style_set_text_color(&style_home__ta_1_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_home__ta_1_main_main_default, &lv_font_simsun_24);
	lv_style_set_text_letter_space(&style_home__ta_1_main_main_default, 2);
	lv_style_set_text_align(&style_home__ta_1_main_main_default, LV_TEXT_ALIGN_LEFT);
	lv_style_set_pad_left(&style_home__ta_1_main_main_default, 4);
	lv_style_set_pad_right(&style_home__ta_1_main_main_default, 4);
	lv_style_set_pad_top(&style_home__ta_1_main_main_default, 4);
	lv_style_set_pad_bottom(&style_home__ta_1_main_main_default, 4);
	lv_obj_add_style(ui->home__ta_1, &style_home__ta_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_home__ta_1_main_scrollbar_default
	static lv_style_t style_home__ta_1_main_scrollbar_default;
	if (style_home__ta_1_main_scrollbar_default.prop_cnt > 1)
		lv_style_reset(&style_home__ta_1_main_scrollbar_default);
	else
		lv_style_init(&style_home__ta_1_main_scrollbar_default);
	lv_style_set_radius(&style_home__ta_1_main_scrollbar_default, 0);
	lv_style_set_bg_color(&style_home__ta_1_main_scrollbar_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_home__ta_1_main_scrollbar_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_home__ta_1_main_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__ta_1_main_scrollbar_default, 255);
	lv_obj_add_style(ui->home__ta_1, &style_home__ta_1_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_textarea_set_text(ui->home__ta_1,"fluidnc.local");
	g_kb = lv_keyboard_create(ui->home__cont_1);
	lv_obj_add_event_cb(g_kb, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(g_kb, LV_OBJ_FLAG_HIDDEN);
	lv_keyboard_set_textarea(g_kb, ui->home__ta_1);
	lv_obj_add_event_cb(ui->home__ta_1, ta_event_cb, LV_EVENT_ALL, g_kb);

	//Write codes home__sidebar
	ui->home__sidebar = lv_imgbtn_create(ui->home__cont_1);
	lv_obj_set_pos(ui->home__sidebar, 8, 40);
	lv_obj_set_size(ui->home__sidebar, 60, 50);
	lv_obj_set_scrollbar_mode(ui->home__sidebar, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_home__sidebar_main_main_default
	static lv_style_t style_home__sidebar_main_main_default;
	if (style_home__sidebar_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__sidebar_main_main_default);
	else
		lv_style_init(&style_home__sidebar_main_main_default);
	lv_style_set_text_color(&style_home__sidebar_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_home__sidebar_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_home__sidebar_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_home__sidebar_main_main_default, 0);
	lv_style_set_img_opa(&style_home__sidebar_main_main_default, 136);
	lv_obj_add_style(ui->home__sidebar, &style_home__sidebar_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_home__sidebar_main_main_pressed
	static lv_style_t style_home__sidebar_main_main_pressed;
	if (style_home__sidebar_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_home__sidebar_main_main_pressed);
	else
		lv_style_init(&style_home__sidebar_main_main_pressed);
	lv_style_set_text_color(&style_home__sidebar_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_home__sidebar_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_home__sidebar_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_home__sidebar_main_main_pressed, 0);
	lv_style_set_img_opa(&style_home__sidebar_main_main_pressed, 255);
	lv_obj_add_style(ui->home__sidebar, &style_home__sidebar_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_home__sidebar_main_main_checked
	static lv_style_t style_home__sidebar_main_main_checked;
	if (style_home__sidebar_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_home__sidebar_main_main_checked);
	else
		lv_style_init(&style_home__sidebar_main_main_checked);
	lv_style_set_text_color(&style_home__sidebar_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_home__sidebar_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_home__sidebar_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_home__sidebar_main_main_checked, 0);
	lv_style_set_img_opa(&style_home__sidebar_main_main_checked, 255);
	lv_obj_add_style(ui->home__sidebar, &style_home__sidebar_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->home__sidebar, LV_IMGBTN_STATE_RELEASED, NULL, &_sidebar_left_alpha_60x50, NULL);

	//Write codes home__label_2
	ui->home__label_2 = lv_label_create(ui->home_);
	lv_obj_set_pos(ui->home__label_2, 28, 144);
	lv_obj_set_size(ui->home__label_2, 161, 32);
	lv_obj_set_scrollbar_mode(ui->home__label_2, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->home__label_2, "FluidNC IP:");
	lv_label_set_long_mode(ui->home__label_2, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_home__label_2_main_main_default
	static lv_style_t style_home__label_2_main_main_default;
	if (style_home__label_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__label_2_main_main_default);
	else
		lv_style_init(&style_home__label_2_main_main_default);
	lv_style_set_radius(&style_home__label_2_main_main_default, 0);
	lv_style_set_bg_color(&style_home__label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_home__label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_home__label_2_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__label_2_main_main_default, 0);
	lv_style_set_text_color(&style_home__label_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_home__label_2_main_main_default, &lv_font_simsun_24);
	lv_style_set_text_letter_space(&style_home__label_2_main_main_default, 2);
	lv_style_set_text_line_space(&style_home__label_2_main_main_default, 0);
	lv_style_set_text_align(&style_home__label_2_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_home__label_2_main_main_default, 0);
	lv_style_set_pad_right(&style_home__label_2_main_main_default, 0);
	lv_style_set_pad_top(&style_home__label_2_main_main_default, 0);
	lv_style_set_pad_bottom(&style_home__label_2_main_main_default, 0);
	lv_obj_add_style(ui->home__label_2, &style_home__label_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes home__label_3
	ui->home__label_3 = lv_label_create(ui->home_);
	lv_obj_set_pos(ui->home__label_3, 26, 219);
	lv_obj_set_size(ui->home__label_3, 163, 32);
	lv_obj_set_scrollbar_mode(ui->home__label_3, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->home__label_3, "Display IP:");
	lv_label_set_long_mode(ui->home__label_3, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_home__label_3_main_main_default
	static lv_style_t style_home__label_3_main_main_default;
	if (style_home__label_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__label_3_main_main_default);
	else
		lv_style_init(&style_home__label_3_main_main_default);
	lv_style_set_radius(&style_home__label_3_main_main_default, 0);
	lv_style_set_bg_color(&style_home__label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_home__label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_home__label_3_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__label_3_main_main_default, 0);
	lv_style_set_text_color(&style_home__label_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_home__label_3_main_main_default, &lv_font_simsun_24);
	lv_style_set_text_letter_space(&style_home__label_3_main_main_default, 2);
	lv_style_set_text_line_space(&style_home__label_3_main_main_default, 0);
	lv_style_set_text_align(&style_home__label_3_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_home__label_3_main_main_default, 0);
	lv_style_set_pad_right(&style_home__label_3_main_main_default, 0);
	lv_style_set_pad_top(&style_home__label_3_main_main_default, 0);
	lv_style_set_pad_bottom(&style_home__label_3_main_main_default, 0);
	lv_obj_add_style(ui->home__label_3, &style_home__label_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes home__sidebar_cont
	ui->home__sidebar_cont = lv_obj_create(ui->home_);
	lv_obj_set_pos(ui->home__sidebar_cont, -480, 0);
	lv_obj_set_size(ui->home__sidebar_cont, 480, 320);
	lv_obj_set_scrollbar_mode(ui->home__sidebar_cont, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_home__sidebar_cont_main_main_default
	static lv_style_t style_home__sidebar_cont_main_main_default;
	if (style_home__sidebar_cont_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__sidebar_cont_main_main_default);
	else
		lv_style_init(&style_home__sidebar_cont_main_main_default);
	lv_style_set_radius(&style_home__sidebar_cont_main_main_default, 0);
	lv_style_set_bg_color(&style_home__sidebar_cont_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_home__sidebar_cont_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_home__sidebar_cont_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__sidebar_cont_main_main_default, 0);
	lv_style_set_border_color(&style_home__sidebar_cont_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_home__sidebar_cont_main_main_default, 0);
	lv_style_set_border_opa(&style_home__sidebar_cont_main_main_default, 0);
	lv_style_set_pad_left(&style_home__sidebar_cont_main_main_default, 0);
	lv_style_set_pad_right(&style_home__sidebar_cont_main_main_default, 0);
	lv_style_set_pad_top(&style_home__sidebar_cont_main_main_default, 0);
	lv_style_set_pad_bottom(&style_home__sidebar_cont_main_main_default, 0);
	lv_obj_add_style(ui->home__sidebar_cont, &style_home__sidebar_cont_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes home__sidebar_menu
	ui->home__sidebar_menu = lv_list_create(ui->home__sidebar_cont);
	lv_obj_set_pos(ui->home__sidebar_menu, 0, 0);
	lv_obj_set_size(ui->home__sidebar_menu, 160, 320);
	lv_obj_set_scrollbar_mode(ui->home__sidebar_menu, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_home__sidebar_menu_main_main_default
	static lv_style_t style_home__sidebar_menu_main_main_default;
	if (style_home__sidebar_menu_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__sidebar_menu_main_main_default);
	else
		lv_style_init(&style_home__sidebar_menu_main_main_default);
	lv_style_set_radius(&style_home__sidebar_menu_main_main_default, 5);
	lv_style_set_bg_color(&style_home__sidebar_menu_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home__sidebar_menu_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home__sidebar_menu_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__sidebar_menu_main_main_default, 255);
	lv_style_set_border_color(&style_home__sidebar_menu_main_main_default, lv_color_make(0x42, 0x71, 0xbd));
	lv_style_set_border_width(&style_home__sidebar_menu_main_main_default, 0);
	lv_style_set_border_opa(&style_home__sidebar_menu_main_main_default, 255);
	lv_style_set_pad_left(&style_home__sidebar_menu_main_main_default, 0);
	lv_style_set_pad_right(&style_home__sidebar_menu_main_main_default, 0);
	lv_style_set_pad_top(&style_home__sidebar_menu_main_main_default, 2);
	lv_style_set_pad_bottom(&style_home__sidebar_menu_main_main_default, 0);
	lv_obj_add_style(ui->home__sidebar_menu, &style_home__sidebar_menu_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_home__sidebar_menu_main_scrollbar_default
	static lv_style_t style_home__sidebar_menu_main_scrollbar_default;
	if (style_home__sidebar_menu_main_scrollbar_default.prop_cnt > 1)
		lv_style_reset(&style_home__sidebar_menu_main_scrollbar_default);
	else
		lv_style_init(&style_home__sidebar_menu_main_scrollbar_default);
	lv_style_set_radius(&style_home__sidebar_menu_main_scrollbar_default, 3);
	lv_style_set_bg_color(&style_home__sidebar_menu_main_scrollbar_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_home__sidebar_menu_main_scrollbar_default, 255);
	lv_obj_add_style(ui->home__sidebar_menu, &style_home__sidebar_menu_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_home__sidebar_menu_extra_btns_main_default
	static lv_style_t style_home__sidebar_menu_extra_btns_main_default;
	if (style_home__sidebar_menu_extra_btns_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__sidebar_menu_extra_btns_main_default);
	else
		lv_style_init(&style_home__sidebar_menu_extra_btns_main_default);
	lv_style_set_radius(&style_home__sidebar_menu_extra_btns_main_default, 3);
	lv_style_set_bg_color(&style_home__sidebar_menu_extra_btns_main_default, lv_color_make(0xdf, 0xc8, 0xc8));
	lv_style_set_bg_grad_color(&style_home__sidebar_menu_extra_btns_main_default, lv_color_make(0xa6, 0xa6, 0xa6));
	lv_style_set_bg_grad_dir(&style_home__sidebar_menu_extra_btns_main_default, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_home__sidebar_menu_extra_btns_main_default, 255);
	lv_style_set_text_color(&style_home__sidebar_menu_extra_btns_main_default, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_home__sidebar_menu_extra_btns_main_default, &lv_font_simsun_24);
	lv_obj_t *home__sidebar_menu_btn;
	home__sidebar_menu_btn = lv_list_add_btn(ui->home__sidebar_menu, LV_SYMBOL_HOME, "HOME");
	ui->home__sidebar_menu_item0 = home__sidebar_menu_btn;
	lv_obj_add_style(home__sidebar_menu_btn, &style_home__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	home__sidebar_menu_btn = lv_list_add_btn(ui->home__sidebar_menu, LV_SYMBOL_DRIVE, "MOVE");
	ui->home__sidebar_menu_item1 = home__sidebar_menu_btn;
	lv_obj_add_style(home__sidebar_menu_btn, &style_home__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	home__sidebar_menu_btn = lv_list_add_btn(ui->home__sidebar_menu, LV_SYMBOL_SETTINGS, "SETTINGS");
	ui->home__sidebar_menu_item2 = home__sidebar_menu_btn;
	lv_obj_add_style(home__sidebar_menu_btn, &style_home__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	home__sidebar_menu_btn = lv_list_add_btn(ui->home__sidebar_menu, LV_SYMBOL_SAVE, "EXTRAS");
	ui->home__sidebar_menu_item3 = home__sidebar_menu_btn;
	lv_obj_add_style(home__sidebar_menu_btn, &style_home__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	home__sidebar_menu_btn = lv_list_add_btn(ui->home__sidebar_menu, LV_SYMBOL_WIFI, "CONNECT");
	ui->home__sidebar_menu_item4 = home__sidebar_menu_btn;
	lv_obj_add_style(home__sidebar_menu_btn, &style_home__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	home__sidebar_menu_btn = lv_list_add_btn(ui->home__sidebar_menu, LV_SYMBOL_LIST, "INFO");
	ui->home__sidebar_menu_item5 = home__sidebar_menu_btn;
	lv_obj_add_style(home__sidebar_menu_btn, &style_home__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	home__sidebar_menu_btn = lv_list_add_btn(ui->home__sidebar_menu, LV_SYMBOL_SAVE, "save");
	ui->home__sidebar_menu_item6 = home__sidebar_menu_btn;
	lv_obj_add_style(home__sidebar_menu_btn, &style_home__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	home__sidebar_menu_btn = lv_list_add_btn(ui->home__sidebar_menu, LV_SYMBOL_SAVE, "save");
	ui->home__sidebar_menu_item7 = home__sidebar_menu_btn;
	lv_obj_add_style(home__sidebar_menu_btn, &style_home__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	home__sidebar_menu_btn = lv_list_add_btn(ui->home__sidebar_menu, LV_SYMBOL_SAVE, "save");
	ui->home__sidebar_menu_item8 = home__sidebar_menu_btn;
	lv_obj_add_style(home__sidebar_menu_btn, &style_home__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	home__sidebar_menu_btn = lv_list_add_btn(ui->home__sidebar_menu, LV_SYMBOL_SAVE, "save");
	ui->home__sidebar_menu_item9 = home__sidebar_menu_btn;
	lv_obj_add_style(home__sidebar_menu_btn, &style_home__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes home__cb_1
	ui->home__cb_1 = lv_checkbox_create(ui->home_);
	lv_obj_set_pos(ui->home__cb_1, 365, 48);
	lv_obj_set_scrollbar_mode(ui->home__cb_1, LV_SCROLLBAR_MODE_OFF);
	lv_checkbox_set_text(ui->home__cb_1, "USB");

	//Write style state: LV_STATE_DEFAULT for style_home__cb_1_main_main_default
	static lv_style_t style_home__cb_1_main_main_default;
	if (style_home__cb_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_home__cb_1_main_main_default);
	else
		lv_style_init(&style_home__cb_1_main_main_default);
	lv_style_set_radius(&style_home__cb_1_main_main_default, 6);
	lv_style_set_bg_color(&style_home__cb_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home__cb_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home__cb_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__cb_1_main_main_default, 0);
	lv_style_set_text_color(&style_home__cb_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_home__cb_1_main_main_default, &lv_font_simsun_24);
	lv_style_set_text_letter_space(&style_home__cb_1_main_main_default, 2);
	lv_obj_add_style(ui->home__cb_1, &style_home__cb_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_home__cb_1_main_indicator_default
	static lv_style_t style_home__cb_1_main_indicator_default;
	if (style_home__cb_1_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_home__cb_1_main_indicator_default);
	else
		lv_style_init(&style_home__cb_1_main_indicator_default);
	lv_style_set_radius(&style_home__cb_1_main_indicator_default, 6);
	lv_style_set_bg_color(&style_home__cb_1_main_indicator_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_home__cb_1_main_indicator_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_home__cb_1_main_indicator_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_home__cb_1_main_indicator_default, 255);
	lv_style_set_border_color(&style_home__cb_1_main_indicator_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_home__cb_1_main_indicator_default, 2);
	lv_style_set_border_opa(&style_home__cb_1_main_indicator_default, 255);
	lv_obj_add_style(ui->home__cb_1, &style_home__cb_1_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Init events for screen
	events_init_home_(ui);
}