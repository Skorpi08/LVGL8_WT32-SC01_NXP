/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"
static unsigned int counter = 0;
static char buf[4];


void events_init(lv_ui *ui)
{
}

static void screen_plus_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		counter++;
		sprintf(buf,  "%d" , counter);
		lv_label_set_text(guider_ui.screen_counter, buf);
		
	}
		break;
	default:
		break;
	}
}

static void screen_minus_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		if(counter) counter--;
		sprintf(buf,  "%d" , counter);
		lv_label_set_text(guider_ui.screen_counter, buf);
	}
		break;
	default:
		break;
	}
}

static void screen_btn_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		lv_disp_t * d = lv_obj_get_disp(lv_scr_act());
		if (d->prev_scr == NULL && d->scr_to_load == NULL)
		{
			if (guider_ui.screen_1_del == true)
				setup_scr_screen_1(&guider_ui);
			lv_scr_load_anim(guider_ui.screen_1, LV_SCR_LOAD_ANIM_OVER_LEFT, 50, 10, true);
		}
		guider_ui.screen_del = true;
	}
		break;
	default:
		break;
	}
}

void events_init_screen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_plus, screen_plus_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_minus, screen_minus_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->screen_btn_1, screen_btn_1_event_handler, LV_EVENT_ALL, NULL);
}
