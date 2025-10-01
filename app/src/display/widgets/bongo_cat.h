#include "bongo_cat.h"
#include "bongo_cat_images.c"  /* フレーム画像が入っているCファイルを直接参照 */
#include <lvgl.h>

static lv_obj_t *bongo_cat_img = NULL;
static int current_frame = 0;
static const int frame_count = 4;   // フレーム数（例: 4枚の猫画像）
static lv_timer_t *anim_timer;

/* フレーム配列を参照する */
static const lv_img_dsc_t *frames[] = {
    &bongo_cat_frame_0,
    &bongo_cat_frame_1,
    &bongo_cat_frame_2,
    &bongo_cat_frame_3,
};

static void next_frame(lv_timer_t * timer) {
    current_frame = (current_frame + 1) % frame_count;
    lv_img_set_src(bongo_cat_img, frames[current_frame]);
}

lv_obj_t *bongo_cat_widget_create(lv_obj_t *parent) {
    bongo_cat_img = lv_img_create(parent);
    lv_img_set_src(bongo_cat_img, frames[0]);   // 初期フレーム
    lv_obj_align(bongo_cat_img, LV_ALIGN_TOP_MID, 0, 0);

    /* 500msごとにフレーム切替 */
    anim_timer = lv_timer_create(next_frame, 500, NULL);

    return bongo_cat_img;
}

void bongo_cat_widget_update(void) {
    /* 今は特に処理なし。必要に応じてWPMに連動させるなど可能 */
}
