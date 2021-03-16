/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_splashscreen(lv_ui *ui){

	//Write codes splashscreen
	ui->splashscreen = lv_obj_create(NULL, NULL);

	//Write codes splashscreen_cont1
	ui->splashscreen_cont1 = lv_cont_create(ui->splashscreen, NULL);

	//Write style LV_CONT_PART_MAIN for splashscreen_cont1
	static lv_style_t style_splashscreen_cont1_main;
	lv_style_init(&style_splashscreen_cont1_main);

	//Write style state: LV_STATE_DEFAULT for style_splashscreen_cont1_main
	lv_style_set_radius(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_splashscreen_cont1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->splashscreen_cont1, LV_CONT_PART_MAIN, &style_splashscreen_cont1_main);
	lv_obj_set_pos(ui->splashscreen_cont1, 0, 0);
	lv_obj_set_size(ui->splashscreen_cont1, 480, 272);
	lv_obj_set_click(ui->splashscreen_cont1, false);
	lv_cont_set_layout(ui->splashscreen_cont1, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->splashscreen_cont1, LV_FIT_NONE);

	//Write codes splashscreen_img1
	ui->splashscreen_img1 = lv_img_create(ui->splashscreen, NULL);

	//Write style LV_IMG_PART_MAIN for splashscreen_img1
	static lv_style_t style_splashscreen_img1_main;
	lv_style_init(&style_splashscreen_img1_main);

	//Write style state: LV_STATE_DEFAULT for style_splashscreen_img1_main
	lv_style_set_image_recolor(&style_splashscreen_img1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_splashscreen_img1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_splashscreen_img1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->splashscreen_img1, LV_IMG_PART_MAIN, &style_splashscreen_img1_main);
	lv_obj_set_pos(ui->splashscreen_img1, 190, 58);
	lv_obj_set_size(ui->splashscreen_img1, 100, 100);
	lv_obj_set_click(ui->splashscreen_img1, true);
	lv_img_set_src(ui->splashscreen_img1,&_osmu_alpha_100x100);
	lv_img_set_pivot(ui->splashscreen_img1, 0,0);
	lv_img_set_angle(ui->splashscreen_img1, 0);

	//Write codes splashscreen_label2
	ui->splashscreen_label2 = lv_label_create(ui->splashscreen, NULL);
	lv_label_set_text(ui->splashscreen_label2, "OSMU");
	lv_label_set_long_mode(ui->splashscreen_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->splashscreen_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for splashscreen_label2
	static lv_style_t style_splashscreen_label2_main;
	lv_style_init(&style_splashscreen_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_splashscreen_label2_main
	lv_style_set_radius(&style_splashscreen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_splashscreen_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_splashscreen_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_splashscreen_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_splashscreen_label2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_splashscreen_label2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_splashscreen_label2_main, LV_STATE_DEFAULT, &lv_font_Roboto_Bold_24);
	lv_style_set_text_letter_space(&style_splashscreen_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_splashscreen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_splashscreen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_splashscreen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_splashscreen_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->splashscreen_label2, LV_LABEL_PART_MAIN, &style_splashscreen_label2_main);
	lv_obj_set_pos(ui->splashscreen_label2, 190, 175);
	lv_obj_set_size(ui->splashscreen_label2, 100, 0);

	//Write codes splashscreen_label3
	ui->splashscreen_label3 = lv_label_create(ui->splashscreen, NULL);
	lv_label_set_text(ui->splashscreen_label3, "Firmware Version: 1.0.0.0");
	lv_label_set_long_mode(ui->splashscreen_label3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->splashscreen_label3, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for splashscreen_label3
	static lv_style_t style_splashscreen_label3_main;
	lv_style_init(&style_splashscreen_label3_main);

	//Write style state: LV_STATE_DEFAULT for style_splashscreen_label3_main
	lv_style_set_radius(&style_splashscreen_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_splashscreen_label3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_splashscreen_label3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_splashscreen_label3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_splashscreen_label3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_splashscreen_label3_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_splashscreen_label3_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_splashscreen_label3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_splashscreen_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_splashscreen_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_splashscreen_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_splashscreen_label3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->splashscreen_label3, LV_LABEL_PART_MAIN, &style_splashscreen_label3_main);
	lv_obj_set_pos(ui->splashscreen_label3, 136, 12);
	lv_obj_set_size(ui->splashscreen_label3, 208, 0);

	//Write codes splashscreen_label2_4
	ui->splashscreen_label2_4 = lv_label_create(ui->splashscreen, NULL);
	lv_label_set_text(ui->splashscreen_label2_4, "Open Source Measure Unit");
	lv_label_set_long_mode(ui->splashscreen_label2_4, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->splashscreen_label2_4, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for splashscreen_label2_4
	static lv_style_t style_splashscreen_label2_4_main;
	lv_style_init(&style_splashscreen_label2_4_main);

	//Write style state: LV_STATE_DEFAULT for style_splashscreen_label2_4_main
	lv_style_set_radius(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_20);
	lv_style_set_text_letter_space(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_splashscreen_label2_4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->splashscreen_label2_4, LV_LABEL_PART_MAIN, &style_splashscreen_label2_4_main);
	lv_obj_set_pos(ui->splashscreen_label2_4, 93.5, 238);
	lv_obj_set_size(ui->splashscreen_label2_4, 293, 0);

	//Init events for screen
	events_init_splashscreen(ui);
}