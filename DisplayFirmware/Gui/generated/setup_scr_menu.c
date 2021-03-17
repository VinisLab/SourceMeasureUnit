/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_menu(lv_ui *ui){

	//Write codes menu
	ui->menu = lv_obj_create(NULL, NULL);

	//Write codes menu_cont0
	ui->menu_cont0 = lv_cont_create(ui->menu, NULL);

	//Write style LV_CONT_PART_MAIN for menu_cont0
	static lv_style_t style_menu_cont0_main;
	lv_style_init(&style_menu_cont0_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_cont0_main
	lv_style_set_radius(&style_menu_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_menu_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_menu_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_menu_cont0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_menu_cont0_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_menu_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_menu_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_menu_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_menu_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_menu_cont0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->menu_cont0, LV_CONT_PART_MAIN, &style_menu_cont0_main);
	lv_obj_set_pos(ui->menu_cont0, 0, 0);
	lv_obj_set_size(ui->menu_cont0, 480, 272);
	lv_obj_set_click(ui->menu_cont0, false);
	lv_cont_set_layout(ui->menu_cont0, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->menu_cont0, LV_FIT_NONE);

	//Write codes menu_label1
	ui->menu_label1 = lv_label_create(ui->menu, NULL);
	lv_label_set_text(ui->menu_label1, "Source");
	lv_label_set_long_mode(ui->menu_label1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->menu_label1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for menu_label1
	static lv_style_t style_menu_label1_main;
	lv_style_init(&style_menu_label1_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_label1_main
	lv_style_set_radius(&style_menu_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_menu_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_menu_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_label1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_menu_label1_main, LV_STATE_DEFAULT, lv_color_make(0x43, 0xda, 0x2f));
	lv_style_set_text_font(&style_menu_label1_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_menu_label1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_menu_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_menu_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_menu_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_menu_label1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->menu_label1, LV_LABEL_PART_MAIN, &style_menu_label1_main);
	lv_obj_set_pos(ui->menu_label1, 6, 5);
	lv_obj_set_size(ui->menu_label1, 70, 0);

	//Write codes menu_label1_2
	ui->menu_label1_2 = lv_label_create(ui->menu, NULL);
	lv_label_set_text(ui->menu_label1_2, "Measure");
	lv_label_set_long_mode(ui->menu_label1_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->menu_label1_2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for menu_label1_2
	static lv_style_t style_menu_label1_2_main;
	lv_style_init(&style_menu_label1_2_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_label1_2_main
	lv_style_set_radius(&style_menu_label1_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_menu_label1_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_menu_label1_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_label1_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_label1_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_menu_label1_2_main, LV_STATE_DEFAULT, lv_color_make(0x43, 0xda, 0x2f));
	lv_style_set_text_font(&style_menu_label1_2_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_menu_label1_2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_menu_label1_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_menu_label1_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_menu_label1_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_menu_label1_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->menu_label1_2, LV_LABEL_PART_MAIN, &style_menu_label1_2_main);
	lv_obj_set_pos(ui->menu_label1_2, 86, 5);
	lv_obj_set_size(ui->menu_label1_2, 70, 0);

	//Write codes menu_label1_2_3
	ui->menu_label1_2_3 = lv_label_create(ui->menu, NULL);
	lv_label_set_text(ui->menu_label1_2_3, "Views");
	lv_label_set_long_mode(ui->menu_label1_2_3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->menu_label1_2_3, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for menu_label1_2_3
	static lv_style_t style_menu_label1_2_3_main;
	lv_style_init(&style_menu_label1_2_3_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_label1_2_3_main
	lv_style_set_radius(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, lv_color_make(0x43, 0xda, 0x2f));
	lv_style_set_text_font(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_menu_label1_2_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->menu_label1_2_3, LV_LABEL_PART_MAIN, &style_menu_label1_2_3_main);
	lv_obj_set_pos(ui->menu_label1_2_3, 166, 5);
	lv_obj_set_size(ui->menu_label1_2_3, 70, 0);

	//Write codes menu_label1_2_3_4
	ui->menu_label1_2_3_4 = lv_label_create(ui->menu, NULL);
	lv_label_set_text(ui->menu_label1_2_3_4, "Trigger");
	lv_label_set_long_mode(ui->menu_label1_2_3_4, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->menu_label1_2_3_4, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for menu_label1_2_3_4
	static lv_style_t style_menu_label1_2_3_4_main;
	lv_style_init(&style_menu_label1_2_3_4_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_label1_2_3_4_main
	lv_style_set_radius(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, lv_color_make(0x43, 0xda, 0x2f));
	lv_style_set_text_font(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_menu_label1_2_3_4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->menu_label1_2_3_4, LV_LABEL_PART_MAIN, &style_menu_label1_2_3_4_main);
	lv_obj_set_pos(ui->menu_label1_2_3_4, 246, 5);
	lv_obj_set_size(ui->menu_label1_2_3_4, 70, 0);

	//Write codes menu_label1_2_3_4_5
	ui->menu_label1_2_3_4_5 = lv_label_create(ui->menu, NULL);
	lv_label_set_text(ui->menu_label1_2_3_4_5, "Scripts");
	lv_label_set_long_mode(ui->menu_label1_2_3_4_5, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->menu_label1_2_3_4_5, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for menu_label1_2_3_4_5
	static lv_style_t style_menu_label1_2_3_4_5_main;
	lv_style_init(&style_menu_label1_2_3_4_5_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_label1_2_3_4_5_main
	lv_style_set_radius(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, lv_color_make(0x43, 0xda, 0x2f));
	lv_style_set_text_font(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_menu_label1_2_3_4_5_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->menu_label1_2_3_4_5, LV_LABEL_PART_MAIN, &style_menu_label1_2_3_4_5_main);
	lv_obj_set_pos(ui->menu_label1_2_3_4_5, 326, 5);
	lv_obj_set_size(ui->menu_label1_2_3_4_5, 70, 0);

	//Write codes menu_label1_2_3_4_5_6
	ui->menu_label1_2_3_4_5_6 = lv_label_create(ui->menu, NULL);
	lv_label_set_text(ui->menu_label1_2_3_4_5_6, "System");
	lv_label_set_long_mode(ui->menu_label1_2_3_4_5_6, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->menu_label1_2_3_4_5_6, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for menu_label1_2_3_4_5_6
	static lv_style_t style_menu_label1_2_3_4_5_6_main;
	lv_style_init(&style_menu_label1_2_3_4_5_6_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_label1_2_3_4_5_6_main
	lv_style_set_radius(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, lv_color_make(0x43, 0xda, 0x2f));
	lv_style_set_text_font(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_menu_label1_2_3_4_5_6_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->menu_label1_2_3_4_5_6, LV_LABEL_PART_MAIN, &style_menu_label1_2_3_4_5_6_main);
	lv_obj_set_pos(ui->menu_label1_2_3_4_5_6, 404, 5);
	lv_obj_set_size(ui->menu_label1_2_3_4_5_6, 70, 0);

	//Write codes menu_line7
	ui->menu_line7 = lv_line_create(ui->menu, NULL);

	//Write style LV_LINE_PART_MAIN for menu_line7
	static lv_style_t style_menu_line7_main;
	lv_style_init(&style_menu_line7_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_line7_main
	lv_style_set_line_color(&style_menu_line7_main, LV_STATE_DEFAULT, lv_color_make(0x3d, 0x3d, 0x3d));
	lv_style_set_line_width(&style_menu_line7_main, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->menu_line7, LV_LINE_PART_MAIN, &style_menu_line7_main);
	lv_obj_set_pos(ui->menu_line7, 80, 78);
	lv_obj_set_size(ui->menu_line7, 1, 186);
	static lv_point_t menu_line7[] ={{0,0},{0,186}};
	lv_line_set_points(ui->menu_line7,menu_line7,2);

	//Write codes menu_line7_8
	ui->menu_line7_8 = lv_line_create(ui->menu, NULL);

	//Write style LV_LINE_PART_MAIN for menu_line7_8
	static lv_style_t style_menu_line7_8_main;
	lv_style_init(&style_menu_line7_8_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_line7_8_main
	lv_style_set_line_color(&style_menu_line7_8_main, LV_STATE_DEFAULT, lv_color_make(0x3d, 0x3d, 0x3d));
	lv_style_set_line_width(&style_menu_line7_8_main, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->menu_line7_8, LV_LINE_PART_MAIN, &style_menu_line7_8_main);
	lv_obj_set_pos(ui->menu_line7_8, 160, 25);
	lv_obj_set_size(ui->menu_line7_8, 1, 240);
	static lv_point_t menu_line7_8[] ={{0,0},{0,240}};
	lv_line_set_points(ui->menu_line7_8,menu_line7_8,2);

	//Write codes menu_line7_8_9
	ui->menu_line7_8_9 = lv_line_create(ui->menu, NULL);

	//Write style LV_LINE_PART_MAIN for menu_line7_8_9
	static lv_style_t style_menu_line7_8_9_main;
	lv_style_init(&style_menu_line7_8_9_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_line7_8_9_main
	lv_style_set_line_color(&style_menu_line7_8_9_main, LV_STATE_DEFAULT, lv_color_make(0x3d, 0x3d, 0x3d));
	lv_style_set_line_width(&style_menu_line7_8_9_main, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->menu_line7_8_9, LV_LINE_PART_MAIN, &style_menu_line7_8_9_main);
	lv_obj_set_pos(ui->menu_line7_8_9, 240, 25);
	lv_obj_set_size(ui->menu_line7_8_9, 1, 240);
	static lv_point_t menu_line7_8_9[] ={{0,0},{0,240}};
	lv_line_set_points(ui->menu_line7_8_9,menu_line7_8_9,2);

	//Write codes menu_line7_8_9_10
	ui->menu_line7_8_9_10 = lv_line_create(ui->menu, NULL);

	//Write style LV_LINE_PART_MAIN for menu_line7_8_9_10
	static lv_style_t style_menu_line7_8_9_10_main;
	lv_style_init(&style_menu_line7_8_9_10_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_line7_8_9_10_main
	lv_style_set_line_color(&style_menu_line7_8_9_10_main, LV_STATE_DEFAULT, lv_color_make(0x3d, 0x3d, 0x3d));
	lv_style_set_line_width(&style_menu_line7_8_9_10_main, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->menu_line7_8_9_10, LV_LINE_PART_MAIN, &style_menu_line7_8_9_10_main);
	lv_obj_set_pos(ui->menu_line7_8_9_10, 320, 25);
	lv_obj_set_size(ui->menu_line7_8_9_10, 1, 240);
	static lv_point_t menu_line7_8_9_10[] ={{0,0},{0,240}};
	lv_line_set_points(ui->menu_line7_8_9_10,menu_line7_8_9_10,2);

	//Write codes menu_line7_8_9_10_11
	ui->menu_line7_8_9_10_11 = lv_line_create(ui->menu, NULL);

	//Write style LV_LINE_PART_MAIN for menu_line7_8_9_10_11
	static lv_style_t style_menu_line7_8_9_10_11_main;
	lv_style_init(&style_menu_line7_8_9_10_11_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_line7_8_9_10_11_main
	lv_style_set_line_color(&style_menu_line7_8_9_10_11_main, LV_STATE_DEFAULT, lv_color_make(0x3d, 0x3d, 0x3d));
	lv_style_set_line_width(&style_menu_line7_8_9_10_11_main, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->menu_line7_8_9_10_11, LV_LINE_PART_MAIN, &style_menu_line7_8_9_10_11_main);
	lv_obj_set_pos(ui->menu_line7_8_9_10_11, 400, 25);
	lv_obj_set_size(ui->menu_line7_8_9_10_11, 1, 240);
	static lv_point_t menu_line7_8_9_10_11[] ={{0,0},{0,240}};
	lv_line_set_points(ui->menu_line7_8_9_10_11,menu_line7_8_9_10_11,2);

	//Write codes menu_btn19
	ui->menu_btn19 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19
	static lv_style_t style_menu_btn19_main;
	lv_style_init(&style_menu_btn19_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_main
	lv_style_set_radius(&style_menu_btn19_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19, LV_BTN_PART_MAIN, &style_menu_btn19_main);
	lv_obj_set_pos(ui->menu_btn19, 410, 180);
	lv_obj_set_size(ui->menu_btn19, 60, 35);
	ui->menu_btn19_label = lv_label_create(ui->menu_btn19, NULL);
	lv_label_set_text(ui->menu_btn19_label, "Cal");
	lv_obj_set_style_local_text_color(ui->menu_btn19_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20
	ui->menu_btn19_20 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20
	static lv_style_t style_menu_btn19_20_main;
	lv_style_init(&style_menu_btn19_20_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_main
	lv_style_set_radius(&style_menu_btn19_20_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20, LV_BTN_PART_MAIN, &style_menu_btn19_20_main);
	lv_obj_set_pos(ui->menu_btn19_20, 410, 30);
	lv_obj_set_size(ui->menu_btn19_20, 60, 35);
	ui->menu_btn19_20_label = lv_label_create(ui->menu_btn19_20, NULL);
	lv_label_set_text(ui->menu_btn19_20_label, "Event\n Log");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21
	ui->menu_btn19_20_21 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21
	static lv_style_t style_menu_btn19_20_21_main;
	lv_style_init(&style_menu_btn19_20_21_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_main
	lv_style_set_radius(&style_menu_btn19_20_21_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_main);
	lv_obj_set_pos(ui->menu_btn19_20_21, 410, 80);
	lv_obj_set_size(ui->menu_btn19_20_21, 60, 35);
	ui->menu_btn19_20_21_label = lv_label_create(ui->menu_btn19_20_21, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_label, "Comm");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22
	ui->menu_btn19_20_21_22 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22
	static lv_style_t style_menu_btn19_20_21_22_main;
	lv_style_init(&style_menu_btn19_20_21_22_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22, 410, 129);
	lv_obj_set_size(ui->menu_btn19_20_21_22, 60, 35);
	ui->menu_btn19_20_21_22_label = lv_label_create(ui->menu_btn19_20_21_22, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_label, "Settings");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_23
	ui->menu_btn19_20_21_22_23 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_23
	static lv_style_t style_menu_btn19_20_21_22_23_main;
	lv_style_init(&style_menu_btn19_20_21_22_23_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_23_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_23_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_23_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_23_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_23_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_23_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_23_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_23_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_23_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_23_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_23_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_23, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_23_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_23, 410, 230);
	lv_obj_set_size(ui->menu_btn19_20_21_22_23, 60, 35);
	ui->menu_btn19_20_21_22_23_label = lv_label_create(ui->menu_btn19_20_21_22_23, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_23_label, "Reading\n Buffers");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_23_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_23_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_17
	ui->menu_btn19_20_17 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_17
	static lv_style_t style_menu_btn19_20_17_main;
	lv_style_init(&style_menu_btn19_20_17_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_17_main
	lv_style_set_radius(&style_menu_btn19_20_17_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_17_main, LV_STATE_DEFAULT, lv_color_make(0x02, 0x8d, 0xf7));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_17_main, LV_STATE_DEFAULT, lv_color_make(0x02, 0x85, 0x00));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_17_main, LV_STATE_DEFAULT, LV_GRAD_DIR_HOR);
	lv_style_set_bg_opa(&style_menu_btn19_20_17_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_17_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_17_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_17_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_17_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_17_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_17, LV_BTN_PART_MAIN, &style_menu_btn19_20_17_main);
	lv_obj_set_pos(ui->menu_btn19_20_17, 18, 30);
	lv_obj_set_size(ui->menu_btn19_20_17, 127, 35);
	ui->menu_btn19_20_17_label = lv_label_create(ui->menu_btn19_20_17, NULL);
	lv_label_set_text(ui->menu_btn19_20_17_label, "Quickset");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_17_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_17_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18
	ui->menu_btn19_20_21_22_18 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18
	static lv_style_t style_menu_btn19_20_21_22_18_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18, 331, 33);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18, 60, 35);
	ui->menu_btn19_20_21_22_18_label = lv_label_create(ui->menu_btn19_20_21_22_18, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_label, "Run");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_19
	ui->menu_btn19_20_21_22_18_19 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_19
	static lv_style_t style_menu_btn19_20_21_22_18_19_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_19_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_19_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_19_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_19_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_19_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_19_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_19_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_19_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_19_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_19_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_19_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_19_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_19, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_19_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_19, 331, 81);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_19, 60, 35);
	ui->menu_btn19_20_21_22_18_19_label = lv_label_create(ui->menu_btn19_20_21_22_18_19, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_19_label, "Manage");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_19_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_19_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_19_20
	ui->menu_btn19_20_21_22_18_19_20 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_19_20
	static lv_style_t style_menu_btn19_20_21_22_18_19_20_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_19_20_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_19_20_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_19_20_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_19_20_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_19_20_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_19_20_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_19_20_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_19_20_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_19_20_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_19_20_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_19_20_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_19_20_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_19_20, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_19_20_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_19_20, 333, 130);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_19_20, 60, 35);
	ui->menu_btn19_20_21_22_18_19_20_label = lv_label_create(ui->menu_btn19_20_21_22_18_19_20, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_19_20_label, "Save Setup");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_19_20_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_19_20_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_19_20_21
	ui->menu_btn19_20_21_22_18_19_20_21 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_19_20_21
	static lv_style_t style_menu_btn19_20_21_22_18_19_20_21_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_19_20_21_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_19_20_21_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_19_20_21_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_19_20_21_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_19_20_21_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_19_20_21_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_19_20_21_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_19_20_21_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_19_20_21_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_19_20_21_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_19_20_21_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_19_20_21_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_19_20_21, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_19_20_21_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_19_20_21, 333, 181);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_19_20_21, 60, 35);
	ui->menu_btn19_20_21_22_18_19_20_21_label = lv_label_create(ui->menu_btn19_20_21_22_18_19_20_21, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_19_20_21_label, "Record");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_19_20_21_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_19_20_21_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_19_20_21_22
	ui->menu_btn19_20_21_22_18_19_20_21_22 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_19_20_21_22
	static lv_style_t style_menu_btn19_20_21_22_18_19_20_21_22_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_19_20_21_22_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_19_20_21_22_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_19_20_21_22_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_19_20_21_22_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_19_20_21_22_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_19_20_21_22_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_19_20_21_22_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_19_20_21_22_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_19_20_21_22_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_19_20_21_22_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_19_20_21_22_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_19_20_21_22_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_19_20_21_22, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_19_20_21_22_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_19_20_21_22, 332, 228);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_19_20_21_22, 60, 35);
	ui->menu_btn19_20_21_22_18_19_20_21_22_label = lv_label_create(ui->menu_btn19_20_21_22_18_19_20_21_22, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_19_20_21_22_label, "Apps");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_19_20_21_22_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_19_20_21_22_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23
	ui->menu_btn19_20_21_22_18_23 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23
	static lv_style_t style_menu_btn19_20_21_22_18_23_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_main, LV_STATE_DEFAULT, lv_color_make(0x49, 0x00, 0x70));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_main, LV_STATE_DEFAULT, lv_color_make(0xa6, 0x00, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23, 251, 30);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23, 60, 35);
	ui->menu_btn19_20_21_22_18_23_label = lv_label_create(ui->menu_btn19_20_21_22_18_23, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_label, "Templates");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24
	ui->menu_btn19_20_21_22_18_23_24 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_main, LV_STATE_DEFAULT, lv_color_make(0x49, 0x00, 0x70));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_main, LV_STATE_DEFAULT, lv_color_make(0xa6, 0x00, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24, 250, 83);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_label, "Configure");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24_25
	ui->menu_btn19_20_21_22_18_23_24_25 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24_25
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_25_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_25_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_25_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_25_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_25_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_25_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_25_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_25_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_25_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_25_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_25_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_25_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_25_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24_25, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_25_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24_25, 171, 30);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24_25, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_25_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24_25, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_25_label, "Graph");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_25_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_25_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24_25_26
	ui->menu_btn19_20_21_22_18_23_24_25_26 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24_25_26
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_25_26_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_25_26_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_25_26_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_25_26_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_25_26_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_25_26_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_25_26_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_25_26_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_25_26_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_25_26_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24_25_26, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_25_26_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24_25_26, 171, 81);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24_25_26, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_25_26_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24_25_26, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_25_26_label, "Histogram");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_25_26_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_25_26_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24_25_26_27
	ui->menu_btn19_20_21_22_18_23_24_25_26_27 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24_25_26_27
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_25_26_27_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_25_26_27_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24_25_26_27, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_25_26_27_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24_25_26_27, 171, 133);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24_25_26_27, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24_25_26_27, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_25_26_27_label, "Reading\n Table");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_25_26_27_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_25_26_27_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24_25_26_27_28
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24_25_26_27_28
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main, LV_STATE_DEFAULT, lv_color_make(0x02, 0x85, 0x00));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main, LV_STATE_DEFAULT, lv_color_make(0x04, 0xff, 0x00));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_25_26_27_28_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28, 91, 80);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_label, "Settings");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24_25_26_27_28_29
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24_25_26_27_28_29
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main, LV_STATE_DEFAULT, lv_color_make(0x02, 0x85, 0x00));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main, LV_STATE_DEFAULT, lv_color_make(0x04, 0xff, 0x00));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29, 91, 134);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_label, "Calc");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main, LV_STATE_DEFAULT, lv_color_make(0x02, 0x85, 0x00));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main, LV_STATE_DEFAULT, lv_color_make(0x04, 0xff, 0x00));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30, 92, 181);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_label, "Config\n Lists");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main, LV_STATE_DEFAULT, lv_color_make(0x02, 0x85, 0x00));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main, LV_STATE_DEFAULT, lv_color_make(0x04, 0xff, 0x00));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31, 91, 227);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_label, "Reading\n Buffers");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main, LV_STATE_DEFAULT, lv_color_make(0x02, 0x8d, 0xbb));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xbf, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32, 11, 82);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_label, "Settings");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main, LV_STATE_DEFAULT, lv_color_make(0x02, 0x8d, 0xbb));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xbf, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33, 11, 134);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_label, "Sweep");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);

	//Write codes menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34 = lv_btn_create(ui->menu, NULL);

	//Write style LV_BTN_PART_MAIN for menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34
	static lv_style_t style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main;
	lv_style_init(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main);

	//Write style state: LV_STATE_DEFAULT for style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main
	lv_style_set_radius(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main, LV_STATE_DEFAULT, 8);
	lv_style_set_bg_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main, LV_STATE_DEFAULT, lv_color_make(0x02, 0x8d, 0xbb));
	lv_style_set_bg_grad_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xbf, 0xff));
	lv_style_set_bg_grad_dir(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main, LV_STATE_DEFAULT, lv_color_make(0xb8, 0xb8, 0xb8));
	lv_style_set_outline_opa(&style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34, LV_BTN_PART_MAIN, &style_menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_main);
	lv_obj_set_pos(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34, 11, 182);
	lv_obj_set_size(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34, 60, 35);
	ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_label = lv_label_create(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34, NULL);
	lv_label_set_text(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_label, "Config\n Lists");
	lv_obj_set_style_local_text_color(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
}