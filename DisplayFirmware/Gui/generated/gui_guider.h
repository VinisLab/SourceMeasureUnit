/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *main;
	lv_obj_t *main_cont0;
	lv_obj_t *main_cont9;
	lv_obj_t *main_tabview1;
	lv_obj_t *main_label2;
	lv_obj_t *main_label3;
	lv_obj_t *main_label4;
	lv_obj_t *main_line5;
	lv_obj_t *main_label3_6;
	lv_obj_t *main_label3_6_7;
	lv_obj_t *main_btn8;
	lv_obj_t *main_btn8_label;
	lv_obj_t *menu;
	lv_obj_t *menu_cont0;
	lv_obj_t *menu_label1;
	lv_obj_t *menu_label1_2;
	lv_obj_t *menu_label1_2_3;
	lv_obj_t *menu_label1_2_3_4;
	lv_obj_t *menu_label1_2_3_4_5;
	lv_obj_t *menu_label1_2_3_4_5_6;
	lv_obj_t *menu_line7;
	lv_obj_t *menu_line7_8;
	lv_obj_t *menu_line7_8_9;
	lv_obj_t *menu_line7_8_9_10;
	lv_obj_t *menu_line7_8_9_10_11;
	lv_obj_t *menu_btn19;
	lv_obj_t *menu_btn19_label;
	lv_obj_t *menu_btn19_20;
	lv_obj_t *menu_btn19_20_label;
	lv_obj_t *menu_btn19_20_21;
	lv_obj_t *menu_btn19_20_21_label;
	lv_obj_t *menu_btn19_20_21_22;
	lv_obj_t *menu_btn19_20_21_22_label;
	lv_obj_t *menu_btn19_20_21_22_23;
	lv_obj_t *menu_btn19_20_21_22_23_label;
	lv_obj_t *menu_btn19_20_17;
	lv_obj_t *menu_btn19_20_17_label;
	lv_obj_t *menu_btn19_20_21_22_18;
	lv_obj_t *menu_btn19_20_21_22_18_label;
	lv_obj_t *menu_btn19_20_21_22_18_19;
	lv_obj_t *menu_btn19_20_21_22_18_19_label;
	lv_obj_t *menu_btn19_20_21_22_18_19_20;
	lv_obj_t *menu_btn19_20_21_22_18_19_20_label;
	lv_obj_t *menu_btn19_20_21_22_18_19_20_21;
	lv_obj_t *menu_btn19_20_21_22_18_19_20_21_label;
	lv_obj_t *menu_btn19_20_21_22_18_19_20_21_22;
	lv_obj_t *menu_btn19_20_21_22_18_19_20_21_22_label;
	lv_obj_t *menu_btn19_20_21_22_18_23;
	lv_obj_t *menu_btn19_20_21_22_18_23_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_label;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34;
	lv_obj_t *menu_btn19_20_21_22_18_23_24_25_26_27_28_29_30_31_32_33_34_label;
	lv_obj_t *splashscreen;
	lv_obj_t *splashscreen_cont1;
	lv_obj_t *splashscreen_img1;
	lv_obj_t *splashscreen_label2;
	lv_obj_t *splashscreen_label3;
	lv_obj_t *splashscreen_label2_4;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_main(lv_ui *ui);
void setup_scr_menu(lv_ui *ui);
void setup_scr_splashscreen(lv_ui *ui);
LV_IMG_DECLARE(_osmu_alpha_100x100);

#ifdef __cplusplus
}
#endif
#endif