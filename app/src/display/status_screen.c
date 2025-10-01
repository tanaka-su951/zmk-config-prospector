#include <lvgl.h>
#include "widgets/bongo_cat.h"

/* Prospector の標準ウィジェット */
#include <zmk/display/widgets/battery_status.h>
#include <zmk/display/widgets/layer_status.h>

static lv_obj_t *screen;

/* 各ウィジェットのオブジェクト */
static struct zmk_widget_battery battery_widget;
static struct zmk_widget_layer_status layer_widget;

lv_obj_t *zmk_display_status_screen() {
    screen = lv_obj_create(NULL);

    /* 1. 上段に Bongo Cat を配置 */
    lv_obj_t *cat = bongo_cat_widget_create(screen);
    lv_obj_align(cat, LV_ALIGN_TOP_MID, 0, 0);

    /* 2. その下にレイヤー表示を配置 */
    lv_obj_t *layer = zmk_widget_layer_status_init(&layer_widget, screen);
    lv_obj_align(layer, LV_ALIGN_TOP_MID, 0, 20); // ← Y=20で少し下にずらす

    /* 3. さらに右上にバッテリー表示 */
    lv_obj_t *battery = zmk_widget_battery_status_init(&battery_widget, screen);
    lv_obj_align(battery, LV_ALIGN_TOP_RIGHT, -2, 2);

    return screen;
}
