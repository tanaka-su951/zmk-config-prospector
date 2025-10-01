#include <lvgl.h>
#include <zmk/display/widgets/layer_status.h>
#include <display/widgets/bongo_cat.h>

static struct zmk_widget_layer_status layer_status;
static struct zmk_widget_bongo_cat bongo_cat;

lv_obj_t *zmk_display_status_screen(void) {
    lv_obj_t *screen = lv_obj_create(NULL);

    /* Bongo Cat */
    zmk_widget_bongo_cat_init(&bongo_cat, screen);
    lv_obj_align(zmk_widget_bongo_cat_obj(&bongo_cat),
                 LV_ALIGN_TOP_MID, 0, 8);

    /* Layer indicator */
    zmk_widget_layer_status_init(&layer_status, screen);
    lv_obj_align(zmk_widget_layer_status_obj(&layer_status),
                 LV_ALIGN_BOTTOM_MID, 0, -2);

    return screen;
}
