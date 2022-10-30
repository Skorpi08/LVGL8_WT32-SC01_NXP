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
	lv_obj_t *home_;
	bool home__del;
	lv_obj_t *home__img_1;
	lv_obj_t *home__top_bar;
	lv_obj_t *home__label_1;
	lv_obj_t *home__img_2;
	lv_obj_t *home__cont_1;
	lv_obj_t *home__ta_2;
	lv_obj_t *home__ta_1;
	lv_obj_t *home__sidebar;
	lv_obj_t *home__sidebar_label;
	lv_obj_t *home__label_2;
	lv_obj_t *home__label_3;
	lv_obj_t *home__sidebar_cont;
	lv_obj_t *home__sidebar_menu;
	lv_obj_t *home__sidebar_menu_item0;
	lv_obj_t *home__sidebar_menu_item1;
	lv_obj_t *home__sidebar_menu_item2;
	lv_obj_t *home__sidebar_menu_item3;
	lv_obj_t *home__sidebar_menu_item4;
	lv_obj_t *home__sidebar_menu_item5;
	lv_obj_t *home__sidebar_menu_item6;
	lv_obj_t *home__sidebar_menu_item7;
	lv_obj_t *home__sidebar_menu_item8;
	lv_obj_t *home__sidebar_menu_item9;
	lv_obj_t *home__cb_1;
	lv_obj_t *move_;
	bool move__del;
	lv_obj_t *move__img_1;
	lv_obj_t *move__top_bar;
	lv_obj_t *move__label_1;
	lv_obj_t *move__img_2;
	lv_obj_t *move__cont_1;
	lv_obj_t *move__cb_1;
	lv_obj_t *move__sidebar;
	lv_obj_t *move__sidebar_label;
	lv_obj_t *move__sidebar_cont;
	lv_obj_t *move__sidebar_menu;
	lv_obj_t *move__sidebar_menu_item0;
	lv_obj_t *move__sidebar_menu_item1;
	lv_obj_t *move__sidebar_menu_item2;
	lv_obj_t *move__sidebar_menu_item3;
	lv_obj_t *move__sidebar_menu_item4;
	lv_obj_t *move__sidebar_menu_item5;
	lv_obj_t *move__sidebar_menu_item6;
	lv_obj_t *move__sidebar_menu_item7;
	lv_obj_t *move__sidebar_menu_item8;
	lv_obj_t *move__sidebar_menu_item9;
}lv_ui;

void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_home_(lv_ui *ui);
void setup_scr_move_(lv_ui *ui);
LV_IMG_DECLARE(_FludNC_350_trans_350x150);
LV_IMG_DECLARE(_no_wifi_25x20);
LV_IMG_DECLARE(_sidebar_left_alpha_60x50);

#ifdef __cplusplus
}
#endif
#endif