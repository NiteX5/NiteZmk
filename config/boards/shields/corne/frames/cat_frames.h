#pragma once
#include "lvgl.h"

extern const lv_img_dsc_t cat_walk_00;
extern const lv_img_dsc_t cat_walk_01;
extern const lv_img_dsc_t cat_walk_02;
extern const lv_img_dsc_t cat_walk_03;
extern const lv_img_dsc_t cat_walk_04;

#define CAT_WALK_FRAMES_COUNT 5
static const lv_img_dsc_t * const cat_walk_frames[] = {
    &cat_walk_00,
    &cat_walk_01,
    &cat_walk_02,
    &cat_walk_03,
    &cat_walk_04,
};

extern const lv_img_dsc_t cat_idle_00;
extern const lv_img_dsc_t cat_idle_01;
extern const lv_img_dsc_t cat_idle_02;
extern const lv_img_dsc_t cat_idle_03;

#define CAT_IDLE_FRAMES_COUNT 4
static const lv_img_dsc_t * const cat_idle_frames[] = {
    &cat_idle_00,
    &cat_idle_01,
    &cat_idle_02,
    &cat_idle_03,
};

extern const lv_img_dsc_t cat_sleep_00;
extern const lv_img_dsc_t cat_sleep_01;

#define CAT_SLEEP_FRAMES_COUNT 2
static const lv_img_dsc_t * const cat_sleep_frames[] = {
    &cat_sleep_00,
    &cat_sleep_01,
};

extern const lv_img_dsc_t cat_run_00;
extern const lv_img_dsc_t cat_run_01;
extern const lv_img_dsc_t cat_run_02;
extern const lv_img_dsc_t cat_run_03;
extern const lv_img_dsc_t cat_run_04;

#define CAT_RUN_FRAMES_COUNT 5
static const lv_img_dsc_t * const cat_run_frames[] = {
    &cat_run_00,
    &cat_run_01,
    &cat_run_02,
    &cat_run_03,
    &cat_run_04,
};

extern const lv_img_dsc_t sky_sun_00;
extern const lv_img_dsc_t sky_sun_01;
extern const lv_img_dsc_t sky_sun_02;
extern const lv_img_dsc_t sky_sun_03;
extern const lv_img_dsc_t sky_sun_04;
extern const lv_img_dsc_t sky_sun_05;
extern const lv_img_dsc_t sky_sun_06;
extern const lv_img_dsc_t sky_sun_07;

#define SKY_SUN_FRAMES_COUNT 8
static const lv_img_dsc_t * const sky_sun_frames[] = {
    &sky_sun_00,
    &sky_sun_01,
    &sky_sun_02,
    &sky_sun_03,
    &sky_sun_04,
    &sky_sun_05,
    &sky_sun_06,
    &sky_sun_07,
};

extern const lv_img_dsc_t sky_moon_00;

#define SKY_MOON_FRAMES_COUNT 1
static const lv_img_dsc_t * const sky_moon_frames[] = {
    &sky_moon_00,
};

