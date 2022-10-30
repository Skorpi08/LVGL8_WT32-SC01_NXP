/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

void events_init(lv_ui *ui)
{
}

static void home__sidebar_menu_item1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
		{
			if (guider_ui.move__del == true)
				setup_scr_move_(&guider_ui);
			lv_scr_load_anim(guider_ui.move_, LV_SCR_LOAD_ANIM_OVER_TOP, 0, 0, true);
		}
		guider_ui.home__del = true;
	}
		break;
	default:
		break;
	}
}

void events_init_home_(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->home__sidebar_menu_item1, home__sidebar_menu_item1_event_handler, LV_EVENT_ALL, NULL);
}

static void move__sidebar_menu_item1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	default:
		break;
	}
}

void events_init_move_(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->move__sidebar_menu_item1, move__sidebar_menu_item1_event_handler, LV_EVENT_ALL, NULL);
}
