/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_main(lv_ui *ui){

	//Write codes main
	ui->main = lv_obj_create(NULL, NULL);

	//Write codes main_cont0
	ui->main_cont0 = lv_cont_create(ui->main, NULL);

	//Write style LV_CONT_PART_MAIN for main_cont0
	static lv_style_t style_main_cont0_main;
	lv_style_init(&style_main_cont0_main);

	//Write style state: LV_STATE_DEFAULT for style_main_cont0_main
	lv_style_set_radius(&style_main_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_main_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_main_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_main_cont0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_main_cont0_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_main_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_main_cont0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_main_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_main_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_main_cont0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_main_cont0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_cont0, LV_CONT_PART_MAIN, &style_main_cont0_main);
	lv_obj_set_pos(ui->main_cont0, 0, 0);
	lv_obj_set_size(ui->main_cont0, 480, 272);
	lv_obj_set_click(ui->main_cont0, false);
	lv_cont_set_layout(ui->main_cont0, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->main_cont0, LV_FIT_NONE);

	//Write codes main_cont9
	ui->main_cont9 = lv_cont_create(ui->main, NULL);

	//Write style LV_CONT_PART_MAIN for main_cont9
	static lv_style_t style_main_cont9_main;
	lv_style_init(&style_main_cont9_main);

	//Write style state: LV_STATE_DEFAULT for style_main_cont9_main
	lv_style_set_radius(&style_main_cont9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_main_cont9_main, LV_STATE_DEFAULT, lv_color_make(0x18, 0x18, 0x18));
	lv_style_set_bg_grad_color(&style_main_cont9_main, LV_STATE_DEFAULT, lv_color_make(0x18, 0x18, 0x18));
	lv_style_set_bg_grad_dir(&style_main_cont9_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_cont9_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_main_cont9_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_main_cont9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_main_cont9_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_main_cont9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_main_cont9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_main_cont9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_main_cont9_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_cont9, LV_CONT_PART_MAIN, &style_main_cont9_main);
	lv_obj_set_pos(ui->main_cont9, 0, 0);
	lv_obj_set_size(ui->main_cont9, 480, 20);
	lv_obj_set_click(ui->main_cont9, false);
	lv_cont_set_layout(ui->main_cont9, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->main_cont9, LV_FIT_NONE);

	//Write codes main_tabview1
	ui->main_tabview1 = lv_tabview_create(ui->main, NULL);

	//Write style LV_TABVIEW_PART_BG for main_tabview1
	static lv_style_t style_main_tabview1_bg;
	lv_style_init(&style_main_tabview1_bg);

	//Write style state: LV_STATE_DEFAULT for style_main_tabview1_bg
	lv_style_set_bg_color(&style_main_tabview1_bg, LV_STATE_DEFAULT, lv_color_make(0x18, 0x18, 0x18));
	lv_style_set_bg_grad_color(&style_main_tabview1_bg, LV_STATE_DEFAULT, lv_color_make(0x18, 0x18, 0x18));
	lv_style_set_bg_grad_dir(&style_main_tabview1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_tabview1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_main_tabview1_bg, LV_STATE_DEFAULT, lv_color_make(0xc0, 0xc0, 0xc0));
	lv_style_set_border_width(&style_main_tabview1_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_main_tabview1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_main_tabview1_bg, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_24);
	lv_style_set_text_letter_space(&style_main_tabview1_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_line_space(&style_main_tabview1_bg, LV_STATE_DEFAULT, 16);
	lv_obj_add_style(ui->main_tabview1, LV_TABVIEW_PART_BG, &style_main_tabview1_bg);

	//Write style LV_TABVIEW_PART_INDIC for main_tabview1
	static lv_style_t style_main_tabview1_indic;
	lv_style_init(&style_main_tabview1_indic);

	//Write style state: LV_STATE_DEFAULT for style_main_tabview1_indic
	lv_style_set_bg_color(&style_main_tabview1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_bg_grad_color(&style_main_tabview1_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_bg_grad_dir(&style_main_tabview1_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_tabview1_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->main_tabview1, LV_TABVIEW_PART_INDIC, &style_main_tabview1_indic);

	//Write style LV_TABVIEW_PART_TAB_BG for main_tabview1
	static lv_style_t style_main_tabview1_tab_bg;
	lv_style_init(&style_main_tabview1_tab_bg);

	//Write style state: LV_STATE_DEFAULT for style_main_tabview1_tab_bg
	lv_style_set_bg_color(&style_main_tabview1_tab_bg, LV_STATE_DEFAULT, lv_color_make(0x30, 0x30, 0x30));
	lv_style_set_bg_grad_color(&style_main_tabview1_tab_bg, LV_STATE_DEFAULT, lv_color_make(0x30, 0x30, 0x30));
	lv_style_set_bg_grad_dir(&style_main_tabview1_tab_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_tabview1_tab_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_main_tabview1_tab_bg, LV_STATE_DEFAULT, lv_color_make(0xc0, 0xc0, 0xc0));
	lv_style_set_border_width(&style_main_tabview1_tab_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_main_tabview1_tab_bg, LV_STATE_DEFAULT, 20);
	lv_style_set_pad_right(&style_main_tabview1_tab_bg, LV_STATE_DEFAULT, 20);
	lv_style_set_pad_top(&style_main_tabview1_tab_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_main_tabview1_tab_bg, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_tabview1, LV_TABVIEW_PART_TAB_BG, &style_main_tabview1_tab_bg);

	//Write style LV_TABVIEW_PART_TAB_BTN for main_tabview1
	static lv_style_t style_main_tabview1_tab_btn;
	lv_style_init(&style_main_tabview1_tab_btn);

	//Write style state: LV_STATE_DEFAULT for style_main_tabview1_tab_btn
	lv_style_set_text_color(&style_main_tabview1_tab_btn, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_text_letter_space(&style_main_tabview1_tab_btn, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_tabview1, LV_TABVIEW_PART_TAB_BTN, &style_main_tabview1_tab_btn);
	lv_obj_set_pos(ui->main_tabview1, 0, 140);
	lv_obj_set_size(ui->main_tabview1, 480, 133);
	lv_obj_t *main_tabview1_T1 = lv_tabview_add_tab(ui->main_tabview1,"T1");
	lv_obj_t * main_tabview1_tab_label = lv_label_create(main_tabview1_T1, NULL);
	lv_label_set_text(main_tabview1_tab_label, "");
	lv_obj_t *main_tabview1_T2 = lv_tabview_add_tab(ui->main_tabview1,"T2");
	lv_obj_t *main_tabview1_T3 = lv_tabview_add_tab(ui->main_tabview1,"T3");
	lv_obj_t *main_tabview1_T4 = lv_tabview_add_tab(ui->main_tabview1,"T4");
	main_tabview1_tab_label = lv_label_create(main_tabview1_T2, NULL);
	lv_label_set_text(main_tabview1_tab_label, "");
	main_tabview1_tab_label = lv_label_create(main_tabview1_T3, NULL);
	lv_label_set_text(main_tabview1_tab_label, "");
	main_tabview1_tab_label = lv_label_create(main_tabview1_T4, NULL);
	lv_label_set_text(main_tabview1_tab_label, "");
	lv_tabview_set_anim_time(ui->main_tabview1, 100);

	//Write codes main_label2
	ui->main_label2 = lv_label_create(ui->main, NULL);
	lv_label_set_text(ui->main_label2, "Local");
	lv_label_set_long_mode(ui->main_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->main_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for main_label2
	static lv_style_t style_main_label2_main;
	lv_style_init(&style_main_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_main_label2_main
	lv_style_set_radius(&style_main_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_main_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_main_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_main_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_main_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_main_label2_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_main_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_main_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_main_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_main_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_main_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_label2, LV_LABEL_PART_MAIN, &style_main_label2_main);
	lv_obj_set_pos(ui->main_label2, 0, 3);
	lv_obj_set_size(ui->main_label2, 70, 0);

	//Write codes main_label3
	ui->main_label3 = lv_label_create(ui->main, NULL);
	lv_label_set_text(ui->main_label3, "MEASURE VOLTAGE 4-WIRE");
	lv_label_set_long_mode(ui->main_label3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->main_label3, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for main_label3
	static lv_style_t style_main_label3_main;
	lv_style_init(&style_main_label3_main);

	//Write style state: LV_STATE_DEFAULT for style_main_label3_main
	lv_style_set_radius(&style_main_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_main_label3_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_main_label3_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_main_label3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_main_label3_main, LV_STATE_DEFAULT, lv_color_make(0x14, 0xd2, 0x20));
	lv_style_set_text_font(&style_main_label3_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_main_label3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_main_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_main_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_main_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_main_label3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_label3, LV_LABEL_PART_MAIN, &style_main_label3_main);
	lv_obj_set_pos(ui->main_label3, 4, 22);
	lv_obj_set_size(ui->main_label3, 316, 0);

	//Write codes main_label4
	ui->main_label4 = lv_label_create(ui->main, NULL);
	lv_label_set_text(ui->main_label4, "+0.100126 Ω");
	lv_label_set_long_mode(ui->main_label4, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->main_label4, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for main_label4
	static lv_style_t style_main_label4_main;
	lv_style_init(&style_main_label4_main);

	//Write style state: LV_STATE_DEFAULT for style_main_label4_main
	lv_style_set_radius(&style_main_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_main_label4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_main_label4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_main_label4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_main_label4_main, LV_STATE_DEFAULT, lv_color_make(0x3d, 0xbe, 0x23));
	lv_style_set_text_font(&style_main_label4_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_48);
	lv_style_set_text_letter_space(&style_main_label4_main, LV_STATE_DEFAULT, 3);
	lv_style_set_pad_left(&style_main_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_main_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_main_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_main_label4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_label4, LV_LABEL_PART_MAIN, &style_main_label4_main);
	lv_obj_set_pos(ui->main_label4, 10, 40);
	lv_obj_set_size(ui->main_label4, 404, 0);

	//Write codes main_line5
	ui->main_line5 = lv_line_create(ui->main, NULL);

	//Write style LV_LINE_PART_MAIN for main_line5
	static lv_style_t style_main_line5_main;
	lv_style_init(&style_main_line5_main);

	//Write style state: LV_STATE_DEFAULT for style_main_line5_main
	lv_style_set_line_color(&style_main_line5_main, LV_STATE_DEFAULT, lv_color_make(0x19, 0xd4, 0x16));
	lv_style_set_line_width(&style_main_line5_main, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->main_line5, LV_LINE_PART_MAIN, &style_main_line5_main);
	lv_obj_set_pos(ui->main_line5, 0, 18);
	lv_obj_set_size(ui->main_line5, 480, 10);
	static lv_point_t main_line5[] ={{0,0},{480,0}};
	lv_line_set_points(ui->main_line5,main_line5,2);

	//Write codes main_label3_6
	ui->main_label3_6 = lv_label_create(ui->main, NULL);
	lv_label_set_text(ui->main_label3_6, "AZERO");
	lv_label_set_long_mode(ui->main_label3_6, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->main_label3_6, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for main_label3_6
	static lv_style_t style_main_label3_6_main;
	lv_style_init(&style_main_label3_6_main);

	//Write style state: LV_STATE_DEFAULT for style_main_label3_6_main
	lv_style_set_radius(&style_main_label3_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_main_label3_6_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_main_label3_6_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_main_label3_6_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_label3_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_main_label3_6_main, LV_STATE_DEFAULT, lv_color_make(0x14, 0xd2, 0x20));
	lv_style_set_text_font(&style_main_label3_6_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_main_label3_6_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_main_label3_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_main_label3_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_main_label3_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_main_label3_6_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_label3_6, LV_LABEL_PART_MAIN, &style_main_label3_6_main);
	lv_obj_set_pos(ui->main_label3_6, 417, 50);
	lv_obj_set_size(ui->main_label3_6, 56, 0);

	//Write codes main_label3_6_7
	ui->main_label3_6_7 = lv_label_create(ui->main, NULL);
	lv_label_set_text(ui->main_label3_6_7, "Range 200mV");
	lv_label_set_long_mode(ui->main_label3_6_7, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->main_label3_6_7, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for main_label3_6_7
	static lv_style_t style_main_label3_6_7_main;
	lv_style_init(&style_main_label3_6_7_main);

	//Write style state: LV_STATE_DEFAULT for style_main_label3_6_7_main
	lv_style_set_radius(&style_main_label3_6_7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_main_label3_6_7_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_main_label3_6_7_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_main_label3_6_7_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_label3_6_7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_main_label3_6_7_main, LV_STATE_DEFAULT, lv_color_make(0x14, 0xd2, 0x20));
	lv_style_set_text_font(&style_main_label3_6_7_main, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
	lv_style_set_text_letter_space(&style_main_label3_6_7_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_main_label3_6_7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_main_label3_6_7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_main_label3_6_7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_main_label3_6_7_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_label3_6_7, LV_LABEL_PART_MAIN, &style_main_label3_6_7_main);
	lv_obj_set_pos(ui->main_label3_6_7, 10, 100);
	lv_obj_set_size(ui->main_label3_6_7, 56, 0);

	//Write codes main_btn8
	ui->main_btn8 = lv_btn_create(ui->main, NULL);

	//Write style LV_BTN_PART_MAIN for main_btn8
	static lv_style_t style_main_btn8_main;
	lv_style_init(&style_main_btn8_main);

	//Write style state: LV_STATE_DEFAULT for style_main_btn8_main
	lv_style_set_radius(&style_main_btn8_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_main_btn8_main, LV_STATE_DEFAULT, lv_color_make(0xe0, 0xe0, 0xe0));
	lv_style_set_bg_grad_color(&style_main_btn8_main, LV_STATE_DEFAULT, lv_color_make(0x8f, 0x8f, 0x8f));
	lv_style_set_bg_grad_dir(&style_main_btn8_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_main_btn8_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_main_btn8_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_main_btn8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_main_btn8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_main_btn8_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_main_btn8_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->main_btn8, LV_BTN_PART_MAIN, &style_main_btn8_main);
	lv_obj_set_pos(ui->main_btn8, 80, 94);
	lv_obj_set_size(ui->main_btn8, 100, 36);
	ui->main_btn8_label = lv_label_create(ui->main_btn8, NULL);
	lv_label_set_text(ui->main_btn8_label, "Auto");
	lv_obj_set_style_local_text_color(ui->main_btn8_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->main_btn8_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Roboto_Regular_12);
}