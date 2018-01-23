/* color_test.c
 *
 * Test utility to check if colors are correctly defined
 *
 * RebbleOS
 * 
 * Author: Chris Multhaupt <chris.multhaupt@gmail.com>.
 */

#include "rebbleos.h"
#include "color_test.h"

static Window *s_main_window;

static BitmapLayer *s_bitmap_layer;
GBitmap *s_color_bitmap;

static n_GColor colors[] = {
    GColorOxfordBlue,
    GColorDarkBlue,
    GColorBlue,
    GColorDarkGreen,
    GColorMidnightGreen,
    GColorCobaltBlue,
    GColorBlueMoon,
    GColorIslamicGreen,//
    GColorJaegerGreen,
    GColorTiffanyBlue,
    GColorVividCerulean,
    GColorGreen,//
    GColorMalachite,
    GColorMediumSpringGreen,
    GColorCyan,
    GColorBulgarianRose,////
    GColorImperialPurple,//second row
    GColorIndigo,
    GColorElectricUltramarine,
    GColorArmyGreen, // se 4
    GColorDarkGray,
    GColorLiberty,//
    GColorVeryLightBlue,
    GColorKellyGreen,//
    GColorMayGreen,//
    GColorCadetBlue,//
    GColorPictonBlue,
    GColorBrightGreen,//
    GColorScreaminGreen,//
    GColorMediumAquamarine,
    GColorElectricBlue,//
    GColorDarkCandyAppleRed,//
    GColorJazzberryJam,//third row
    GColorPurple,//
    GColorVividViolet,//
    GColorWindsorTan, //
    GColorRoseVale,//
    GColorPurpureus,//
    GColorLavenderIndigo,//
    GColorLimerick,//
    GColorBrass,//
    GColorLightGray,//
    GColorBabyBlueEyes,//
    GColorSpringBud,//
    GColorInchworm,//
    GColorMintGreen,//
    GColorCeleste,//
    GColorRed,//
    GColorFolly, // forth row
    GColorFashionMagenta,//
    GColorMagenta,//
    GColorOrange,//
    GColorSunsetOrange,//
    GColorBrilliantRose,//
    GColorShockingPink,//
    GColorChromeYellow,//
    GColorRajah,//
    GColorMelon,//
    GColorRichBrilliantLavender,//
    GColorYellow,//
    GColorIcterine,//
    GColorPastelYellow,//
    GColorWhite,//
    GColorBlack//
};

static void main_layer_update_proc(Layer *layer, GContext *ctx) {
    // 9 x 42
    // 16 * 4
    int i = 0;
    int y = 0;
    int x = 0;
    for (y = 0; y < 4; y++) {
        for(x = 0; x < 16; x++) {
            graphics_context_set_fill_color(ctx, colors[i]);
            graphics_fill_rect(ctx, GRect(x*9, y*42+21, 9, 21), 0, GCornerNone);
            i++;
        }
    }
}

static void color_test_window_load(Window *window) {
    Layer *window_layer = window_get_root_layer(s_main_window);
    GRect bounds = layer_get_unobstructed_bounds(window_layer);
    
    s_color_bitmap = gbitmap_create_with_resource(474);

    
    s_bitmap_layer = bitmap_layer_create(GRect(0,0,144,168));
    bitmap_layer_set_compositing_mode(s_bitmap_layer, GCompOpSet);
    bitmap_layer_set_bitmap(s_bitmap_layer, s_color_bitmap);
    layer_add_child(window_get_root_layer(window), 
                                          bitmap_layer_get_layer(s_bitmap_layer));
    Layer *s_main_layer = layer_create(bounds);
    layer_add_child(window_layer, s_main_layer);
    layer_set_update_proc(s_main_layer, main_layer_update_proc);
    layer_mark_dirty(s_main_layer);
}

static void color_test_window_unload(Window *window) {
    gbitmap_destroy(s_color_bitmap);
    bitmap_layer_destroy(s_bitmap_layer);
}

void color_test_init(void) {
    s_main_window = window_create();
    window_set_window_handlers(s_main_window, (WindowHandlers) {
        .load = color_test_window_load,
        .unload = color_test_window_unload,
    });
    window_stack_push(s_main_window, true);
}

void color_test_deinit(void) {
    window_destroy(s_main_window);
}

void color_test_main(void) {
    color_test_init();
    app_event_loop();
    color_test_deinit();
}
