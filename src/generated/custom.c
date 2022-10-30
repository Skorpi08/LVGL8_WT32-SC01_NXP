// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/**
 * @file custom.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */
static void home__close_sidebar(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        lv_anim_t screen_sidebar_menu_anim_x;
      		lv_anim_init(&screen_sidebar_menu_anim_x);
		lv_anim_set_var(&screen_sidebar_menu_anim_x, guider_ui.home__sidebar_cont);
		lv_anim_set_time(&screen_sidebar_menu_anim_x, 100);
		lv_anim_set_exec_cb(&screen_sidebar_menu_anim_x, (lv_anim_exec_xcb_t)lv_obj_set_x);
		lv_anim_set_values(&screen_sidebar_menu_anim_x, lv_obj_get_x(guider_ui.home__sidebar_cont), -480);
		lv_anim_set_path_cb(&screen_sidebar_menu_anim_x, &lv_anim_path_linear);
		lv_anim_start(&screen_sidebar_menu_anim_x);
       
    }
}


static void home__open_sidebar(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	lv_anim_t home__sidebar_cont_anim_x;
	if(code == LV_EVENT_CLICKED) {
		lv_anim_init(&home__sidebar_cont_anim_x);
		lv_anim_set_var(&home__sidebar_cont_anim_x, guider_ui.home__sidebar_cont);
		lv_anim_set_time(&home__sidebar_cont_anim_x, 100);
		lv_anim_set_exec_cb(&home__sidebar_cont_anim_x, (lv_anim_exec_xcb_t)lv_obj_set_x);
		lv_anim_set_values(&home__sidebar_cont_anim_x, lv_obj_get_x(guider_ui.home__sidebar_cont), 0);
		lv_anim_set_path_cb(&home__sidebar_cont_anim_x, &lv_anim_path_step);
		lv_anim_start(&home__sidebar_cont_anim_x);
	}
}

static void move__close_sidebar(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if(event_code == LV_EVENT_CLICKED) {
        lv_anim_t screen_sidebar_menu_anim_x;
      		lv_anim_init(&screen_sidebar_menu_anim_x);
		lv_anim_set_var(&screen_sidebar_menu_anim_x, guider_ui.move__sidebar_cont);
		lv_anim_set_time(&screen_sidebar_menu_anim_x, 100);
		lv_anim_set_exec_cb(&screen_sidebar_menu_anim_x, (lv_anim_exec_xcb_t)lv_obj_set_x);
		lv_anim_set_values(&screen_sidebar_menu_anim_x, lv_obj_get_x(guider_ui.move__sidebar_cont), -480);
		lv_anim_set_path_cb(&screen_sidebar_menu_anim_x, &lv_anim_path_linear);
		lv_anim_start(&screen_sidebar_menu_anim_x);
       
    }
}


static void move__open_sidebar(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	lv_anim_t home__sidebar_cont_anim_x;
	if(code == LV_EVENT_CLICKED) {
		lv_anim_init(&home__sidebar_cont_anim_x);
		lv_anim_set_var(&home__sidebar_cont_anim_x, guider_ui.move__sidebar_cont);
		lv_anim_set_time(&home__sidebar_cont_anim_x, 100);
		lv_anim_set_exec_cb(&home__sidebar_cont_anim_x, (lv_anim_exec_xcb_t)lv_obj_set_x);
		lv_anim_set_values(&home__sidebar_cont_anim_x, lv_obj_get_x(guider_ui.move__sidebar_cont), 0);
		lv_anim_set_path_cb(&home__sidebar_cont_anim_x, &lv_anim_path_step);
		lv_anim_start(&home__sidebar_cont_anim_x);
	}
}

void custom_init(lv_ui *ui)
{
    //lv_obj_set_flex_flow(ui->home__radiobtn_1, LV_FLEX_FLOW_ROW ); 
   
    
    lv_obj_add_event_cb(ui->home__sidebar_cont, home__close_sidebar, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(ui->home__sidebar, home__open_sidebar, LV_EVENT_CLICKED, NULL);
	//lv_obj_add_event_cb(ui->move__sidebar_cont, move__close_sidebar, LV_EVENT_CLICKED, NULL);
   //lv_obj_add_event_cb(ui->move__sidebar, move__open_sidebar, LV_EVENT_CLICKED, NULL);
   
}

