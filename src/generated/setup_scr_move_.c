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


void setup_scr_move_(lv_ui *ui){

	//Write codes move_
	ui->move_ = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->move_, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_move__main_main_default
	static lv_style_t style_move__main_main_default;
	if (style_move__main_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__main_main_default);
	else
		lv_style_init(&style_move__main_main_default);
	lv_style_set_bg_color(&style_move__main_main_default, lv_color_make(0x28, 0x28, 0x28));
	lv_style_set_bg_opa(&style_move__main_main_default, 255);
	lv_obj_add_style(ui->move_, &style_move__main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes move__img_1
	ui->move__img_1 = lv_img_create(ui->move_);
	lv_obj_set_pos(ui->move__img_1, 68, 85);
	lv_obj_set_size(ui->move__img_1, 350, 150);
	lv_obj_set_scrollbar_mode(ui->move__img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_move__img_1_main_main_default
	static lv_style_t style_move__img_1_main_main_default;
	if (style_move__img_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__img_1_main_main_default);
	else
		lv_style_init(&style_move__img_1_main_main_default);
	lv_style_set_img_recolor(&style_move__img_1_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_move__img_1_main_main_default, 79);
	lv_style_set_img_opa(&style_move__img_1_main_main_default, 255);
	lv_obj_add_style(ui->move__img_1, &style_move__img_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->move__img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->move__img_1,&_FludNC_350_trans_350x150);
	lv_img_set_pivot(ui->move__img_1, 0,0);
	lv_img_set_angle(ui->move__img_1, 0);

	//Write codes move__top_bar
	ui->move__top_bar = lv_obj_create(ui->move_);
	lv_obj_set_pos(ui->move__top_bar, 0, 0);
	lv_obj_set_size(ui->move__top_bar, 480, 30);
	lv_obj_set_scrollbar_mode(ui->move__top_bar, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_move__top_bar_main_main_default
	static lv_style_t style_move__top_bar_main_main_default;
	if (style_move__top_bar_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__top_bar_main_main_default);
	else
		lv_style_init(&style_move__top_bar_main_main_default);
	lv_style_set_radius(&style_move__top_bar_main_main_default, 5);
	lv_style_set_bg_color(&style_move__top_bar_main_main_default, lv_color_make(0x82, 0x82, 0x82));
	lv_style_set_bg_grad_color(&style_move__top_bar_main_main_default, lv_color_make(0xc9, 0xc9, 0xc9));
	lv_style_set_bg_grad_dir(&style_move__top_bar_main_main_default, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_move__top_bar_main_main_default, 255);
	lv_style_set_border_color(&style_move__top_bar_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_move__top_bar_main_main_default, 0);
	lv_style_set_border_opa(&style_move__top_bar_main_main_default, 255);
	lv_style_set_pad_left(&style_move__top_bar_main_main_default, 0);
	lv_style_set_pad_right(&style_move__top_bar_main_main_default, 0);
	lv_style_set_pad_top(&style_move__top_bar_main_main_default, 0);
	lv_style_set_pad_bottom(&style_move__top_bar_main_main_default, 0);
	lv_obj_add_style(ui->move__top_bar, &style_move__top_bar_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes move__label_1
	ui->move__label_1 = lv_label_create(ui->move__top_bar);
	lv_obj_set_pos(ui->move__label_1, 6, 4);
	lv_obj_set_size(ui->move__label_1, 427, 25);
	lv_obj_set_scrollbar_mode(ui->move__label_1, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->move__label_1, "Wifi not connected");
	lv_label_set_long_mode(ui->move__label_1, LV_LABEL_LONG_DOT);

	//Write style state: LV_STATE_DEFAULT for style_move__label_1_main_main_default
	static lv_style_t style_move__label_1_main_main_default;
	if (style_move__label_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__label_1_main_main_default);
	else
		lv_style_init(&style_move__label_1_main_main_default);
	lv_style_set_radius(&style_move__label_1_main_main_default, 0);
	lv_style_set_bg_color(&style_move__label_1_main_main_default, lv_color_make(0xf6, 0x23, 0x23));
	lv_style_set_bg_grad_color(&style_move__label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_move__label_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_move__label_1_main_main_default, 0);
	lv_style_set_text_color(&style_move__label_1_main_main_default, lv_color_make(0xff, 0x00, 0x00));
	lv_style_set_text_font(&style_move__label_1_main_main_default, &lv_font_arial_24);
	lv_style_set_text_letter_space(&style_move__label_1_main_main_default, 0);
	lv_style_set_text_line_space(&style_move__label_1_main_main_default, 0);
	lv_style_set_text_align(&style_move__label_1_main_main_default, LV_TEXT_ALIGN_LEFT);
	lv_style_set_pad_left(&style_move__label_1_main_main_default, 0);
	lv_style_set_pad_right(&style_move__label_1_main_main_default, 0);
	lv_style_set_pad_top(&style_move__label_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_move__label_1_main_main_default, 0);
	lv_obj_add_style(ui->move__label_1, &style_move__label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes move__img_2
	ui->move__img_2 = lv_img_create(ui->move__top_bar);
	lv_obj_set_pos(ui->move__img_2, 449, 4);
	lv_obj_set_size(ui->move__img_2, 25, 20);
	lv_obj_set_scrollbar_mode(ui->move__img_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_move__img_2_main_main_default
	static lv_style_t style_move__img_2_main_main_default;
	if (style_move__img_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__img_2_main_main_default);
	else
		lv_style_init(&style_move__img_2_main_main_default);
	lv_style_set_img_recolor(&style_move__img_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_move__img_2_main_main_default, 0);
	lv_style_set_img_opa(&style_move__img_2_main_main_default, 255);
	lv_obj_add_style(ui->move__img_2, &style_move__img_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->move__img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->move__img_2,&_no_wifi_25x20);
	lv_img_set_pivot(ui->move__img_2, 0,0);
	lv_img_set_angle(ui->move__img_2, 0);

	//Write codes move__cont_1
	ui->move__cont_1 = lv_obj_create(ui->move_);
	lv_obj_set_pos(ui->move__cont_1, 0, 0);
	lv_obj_set_size(ui->move__cont_1, 480, 320);
	lv_obj_set_scrollbar_mode(ui->move__cont_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_move__cont_1_main_main_default
	static lv_style_t style_move__cont_1_main_main_default;
	if (style_move__cont_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__cont_1_main_main_default);
	else
		lv_style_init(&style_move__cont_1_main_main_default);
	lv_style_set_radius(&style_move__cont_1_main_main_default, 0);
	lv_style_set_bg_color(&style_move__cont_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_move__cont_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_move__cont_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_move__cont_1_main_main_default, 0);
	lv_style_set_border_color(&style_move__cont_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_move__cont_1_main_main_default, 0);
	lv_style_set_border_opa(&style_move__cont_1_main_main_default, 0);
	lv_style_set_pad_left(&style_move__cont_1_main_main_default, 0);
	lv_style_set_pad_right(&style_move__cont_1_main_main_default, 0);
	lv_style_set_pad_top(&style_move__cont_1_main_main_default, 0);
	lv_style_set_pad_bottom(&style_move__cont_1_main_main_default, 0);
	lv_obj_add_style(ui->move__cont_1, &style_move__cont_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes move__cb_1
	ui->move__cb_1 = lv_checkbox_create(ui->move__cont_1);
	lv_obj_set_pos(ui->move__cb_1, 224, 141);
	lv_obj_set_scrollbar_mode(ui->move__cb_1, LV_SCROLLBAR_MODE_OFF);
	lv_checkbox_set_text(ui->move__cb_1, "checkbox");

	//Write style state: LV_STATE_DEFAULT for style_move__cb_1_main_main_default
	static lv_style_t style_move__cb_1_main_main_default;
	if (style_move__cb_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__cb_1_main_main_default);
	else
		lv_style_init(&style_move__cb_1_main_main_default);
	lv_style_set_radius(&style_move__cb_1_main_main_default, 6);
	lv_style_set_bg_color(&style_move__cb_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_move__cb_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_move__cb_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_move__cb_1_main_main_default, 0);
	lv_style_set_text_color(&style_move__cb_1_main_main_default, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_move__cb_1_main_main_default, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_move__cb_1_main_main_default, 2);
	lv_obj_add_style(ui->move__cb_1, &style_move__cb_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_move__cb_1_main_indicator_default
	static lv_style_t style_move__cb_1_main_indicator_default;
	if (style_move__cb_1_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_move__cb_1_main_indicator_default);
	else
		lv_style_init(&style_move__cb_1_main_indicator_default);
	lv_style_set_radius(&style_move__cb_1_main_indicator_default, 6);
	lv_style_set_bg_color(&style_move__cb_1_main_indicator_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_move__cb_1_main_indicator_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_move__cb_1_main_indicator_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_move__cb_1_main_indicator_default, 255);
	lv_style_set_border_color(&style_move__cb_1_main_indicator_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_move__cb_1_main_indicator_default, 2);
	lv_style_set_border_opa(&style_move__cb_1_main_indicator_default, 255);
	lv_obj_add_style(ui->move__cb_1, &style_move__cb_1_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes move__sidebar
	ui->move__sidebar = lv_imgbtn_create(ui->move__cont_1);
	lv_obj_set_pos(ui->move__sidebar, 8, 40);
	lv_obj_set_size(ui->move__sidebar, 60, 50);
	lv_obj_set_scrollbar_mode(ui->move__sidebar, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_move__sidebar_main_main_default
	static lv_style_t style_move__sidebar_main_main_default;
	if (style_move__sidebar_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__sidebar_main_main_default);
	else
		lv_style_init(&style_move__sidebar_main_main_default);
	lv_style_set_text_color(&style_move__sidebar_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_align(&style_move__sidebar_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_move__sidebar_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_move__sidebar_main_main_default, 0);
	lv_style_set_img_opa(&style_move__sidebar_main_main_default, 136);
	lv_obj_add_style(ui->move__sidebar, &style_move__sidebar_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_PRESSED for style_move__sidebar_main_main_pressed
	static lv_style_t style_move__sidebar_main_main_pressed;
	if (style_move__sidebar_main_main_pressed.prop_cnt > 1)
		lv_style_reset(&style_move__sidebar_main_main_pressed);
	else
		lv_style_init(&style_move__sidebar_main_main_pressed);
	lv_style_set_text_color(&style_move__sidebar_main_main_pressed, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_move__sidebar_main_main_pressed, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_move__sidebar_main_main_pressed, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_move__sidebar_main_main_pressed, 0);
	lv_style_set_img_opa(&style_move__sidebar_main_main_pressed, 255);
	lv_obj_add_style(ui->move__sidebar, &style_move__sidebar_main_main_pressed, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write style state: LV_STATE_CHECKED for style_move__sidebar_main_main_checked
	static lv_style_t style_move__sidebar_main_main_checked;
	if (style_move__sidebar_main_main_checked.prop_cnt > 1)
		lv_style_reset(&style_move__sidebar_main_main_checked);
	else
		lv_style_init(&style_move__sidebar_main_main_checked);
	lv_style_set_text_color(&style_move__sidebar_main_main_checked, lv_color_make(0xFF, 0x33, 0xFF));
	lv_style_set_text_align(&style_move__sidebar_main_main_checked, LV_TEXT_ALIGN_CENTER);
	lv_style_set_img_recolor(&style_move__sidebar_main_main_checked, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_img_recolor_opa(&style_move__sidebar_main_main_checked, 0);
	lv_style_set_img_opa(&style_move__sidebar_main_main_checked, 255);
	lv_obj_add_style(ui->move__sidebar, &style_move__sidebar_main_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->move__sidebar, LV_IMGBTN_STATE_RELEASED, NULL, &_sidebar_left_alpha_60x50, NULL);

	//Write codes move__sidebar_cont
	ui->move__sidebar_cont = lv_obj_create(ui->move_);
	lv_obj_set_pos(ui->move__sidebar_cont, -480, 0);
	lv_obj_set_size(ui->move__sidebar_cont, 480, 320);
	lv_obj_set_scrollbar_mode(ui->move__sidebar_cont, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_move__sidebar_cont_main_main_default
	static lv_style_t style_move__sidebar_cont_main_main_default;
	if (style_move__sidebar_cont_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__sidebar_cont_main_main_default);
	else
		lv_style_init(&style_move__sidebar_cont_main_main_default);
	lv_style_set_radius(&style_move__sidebar_cont_main_main_default, 0);
	lv_style_set_bg_color(&style_move__sidebar_cont_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_move__sidebar_cont_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_move__sidebar_cont_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_move__sidebar_cont_main_main_default, 0);
	lv_style_set_border_color(&style_move__sidebar_cont_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_move__sidebar_cont_main_main_default, 0);
	lv_style_set_border_opa(&style_move__sidebar_cont_main_main_default, 0);
	lv_style_set_pad_left(&style_move__sidebar_cont_main_main_default, 0);
	lv_style_set_pad_right(&style_move__sidebar_cont_main_main_default, 0);
	lv_style_set_pad_top(&style_move__sidebar_cont_main_main_default, 0);
	lv_style_set_pad_bottom(&style_move__sidebar_cont_main_main_default, 0);
	lv_obj_add_style(ui->move__sidebar_cont, &style_move__sidebar_cont_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes move__sidebar_menu
	ui->move__sidebar_menu = lv_list_create(ui->move__sidebar_cont);
	lv_obj_set_pos(ui->move__sidebar_menu, 0, 0);
	lv_obj_set_size(ui->move__sidebar_menu, 160, 320);
	lv_obj_set_scrollbar_mode(ui->move__sidebar_menu, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_move__sidebar_menu_main_main_default
	static lv_style_t style_move__sidebar_menu_main_main_default;
	if (style_move__sidebar_menu_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__sidebar_menu_main_main_default);
	else
		lv_style_init(&style_move__sidebar_menu_main_main_default);
	lv_style_set_radius(&style_move__sidebar_menu_main_main_default, 5);
	lv_style_set_bg_color(&style_move__sidebar_menu_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_move__sidebar_menu_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_move__sidebar_menu_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_move__sidebar_menu_main_main_default, 255);
	lv_style_set_border_color(&style_move__sidebar_menu_main_main_default, lv_color_make(0x42, 0x71, 0xbd));
	lv_style_set_border_width(&style_move__sidebar_menu_main_main_default, 0);
	lv_style_set_border_opa(&style_move__sidebar_menu_main_main_default, 255);
	lv_style_set_pad_left(&style_move__sidebar_menu_main_main_default, 0);
	lv_style_set_pad_right(&style_move__sidebar_menu_main_main_default, 0);
	lv_style_set_pad_top(&style_move__sidebar_menu_main_main_default, 2);
	lv_style_set_pad_bottom(&style_move__sidebar_menu_main_main_default, 0);
	lv_obj_add_style(ui->move__sidebar_menu, &style_move__sidebar_menu_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_move__sidebar_menu_main_scrollbar_default
	static lv_style_t style_move__sidebar_menu_main_scrollbar_default;
	if (style_move__sidebar_menu_main_scrollbar_default.prop_cnt > 1)
		lv_style_reset(&style_move__sidebar_menu_main_scrollbar_default);
	else
		lv_style_init(&style_move__sidebar_menu_main_scrollbar_default);
	lv_style_set_radius(&style_move__sidebar_menu_main_scrollbar_default, 3);
	lv_style_set_bg_color(&style_move__sidebar_menu_main_scrollbar_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_move__sidebar_menu_main_scrollbar_default, 255);
	lv_obj_add_style(ui->move__sidebar_menu, &style_move__sidebar_menu_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_move__sidebar_menu_extra_btns_main_default
	static lv_style_t style_move__sidebar_menu_extra_btns_main_default;
	if (style_move__sidebar_menu_extra_btns_main_default.prop_cnt > 1)
		lv_style_reset(&style_move__sidebar_menu_extra_btns_main_default);
	else
		lv_style_init(&style_move__sidebar_menu_extra_btns_main_default);
	lv_style_set_radius(&style_move__sidebar_menu_extra_btns_main_default, 3);
	lv_style_set_bg_color(&style_move__sidebar_menu_extra_btns_main_default, lv_color_make(0xdf, 0xc8, 0xc8));
	lv_style_set_bg_grad_color(&style_move__sidebar_menu_extra_btns_main_default, lv_color_make(0xa6, 0xa6, 0xa6));
	lv_style_set_bg_grad_dir(&style_move__sidebar_menu_extra_btns_main_default, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_move__sidebar_menu_extra_btns_main_default, 255);
	lv_style_set_text_color(&style_move__sidebar_menu_extra_btns_main_default, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_move__sidebar_menu_extra_btns_main_default, &lv_font_simsun_24);
	lv_obj_t *move__sidebar_menu_btn;
	move__sidebar_menu_btn = lv_list_add_btn(ui->move__sidebar_menu, LV_SYMBOL_HOME, "HOME");
	ui->move__sidebar_menu_item0 = move__sidebar_menu_btn;
	lv_obj_add_style(move__sidebar_menu_btn, &style_move__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	move__sidebar_menu_btn = lv_list_add_btn(ui->move__sidebar_menu, LV_SYMBOL_DRIVE, "MOVE");
	ui->move__sidebar_menu_item1 = move__sidebar_menu_btn;
	lv_obj_add_style(move__sidebar_menu_btn, &style_move__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	move__sidebar_menu_btn = lv_list_add_btn(ui->move__sidebar_menu, LV_SYMBOL_SETTINGS, "SETTINGS");
	ui->move__sidebar_menu_item2 = move__sidebar_menu_btn;
	lv_obj_add_style(move__sidebar_menu_btn, &style_move__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	move__sidebar_menu_btn = lv_list_add_btn(ui->move__sidebar_menu, LV_SYMBOL_SAVE, "EXTRAS");
	ui->move__sidebar_menu_item3 = move__sidebar_menu_btn;
	lv_obj_add_style(move__sidebar_menu_btn, &style_move__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	move__sidebar_menu_btn = lv_list_add_btn(ui->move__sidebar_menu, LV_SYMBOL_WIFI, "CONNECT");
	ui->move__sidebar_menu_item4 = move__sidebar_menu_btn;
	lv_obj_add_style(move__sidebar_menu_btn, &style_move__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	move__sidebar_menu_btn = lv_list_add_btn(ui->move__sidebar_menu, LV_SYMBOL_LIST, "INFO");
	ui->move__sidebar_menu_item5 = move__sidebar_menu_btn;
	lv_obj_add_style(move__sidebar_menu_btn, &style_move__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	move__sidebar_menu_btn = lv_list_add_btn(ui->move__sidebar_menu, LV_SYMBOL_SAVE, "save");
	ui->move__sidebar_menu_item6 = move__sidebar_menu_btn;
	lv_obj_add_style(move__sidebar_menu_btn, &style_move__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	move__sidebar_menu_btn = lv_list_add_btn(ui->move__sidebar_menu, LV_SYMBOL_SAVE, "save");
	ui->move__sidebar_menu_item7 = move__sidebar_menu_btn;
	lv_obj_add_style(move__sidebar_menu_btn, &style_move__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	move__sidebar_menu_btn = lv_list_add_btn(ui->move__sidebar_menu, LV_SYMBOL_SAVE, "save");
	ui->move__sidebar_menu_item8 = move__sidebar_menu_btn;
	lv_obj_add_style(move__sidebar_menu_btn, &style_move__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	move__sidebar_menu_btn = lv_list_add_btn(ui->move__sidebar_menu, LV_SYMBOL_SAVE, "save");
	ui->move__sidebar_menu_item9 = move__sidebar_menu_btn;
	lv_obj_add_style(move__sidebar_menu_btn, &style_move__sidebar_menu_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Init events for screen
	events_init_move_(ui);
}