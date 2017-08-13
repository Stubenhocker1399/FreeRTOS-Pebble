/* splashscreen.c
 * Display short splashscreen and load system after
 *
 * RebbleOS
 *
 * Author: Stubenhocker
 */

#include "splashscreen.h"
#include "rebbleos.h"
#include "systemapp.h"
#include "ngfxwrap.h"

void splashscreen_deinit();

static Window *s_main_window;
static Layer *s_canvas_layer;
static int counter;

static void splashscreen_update_proc(Layer *layer, GContext *nGContext)
{    
}

static void splashscreen_tick_handler(struct tm *tick_time, TimeUnits units_changed)
{
    struct tm *rbl_tick_time = rbl_get_tm();
    ++counter;
    if(counter > 2 )
    {
        splashscreen_deinit();
        appmanager_app_start("System");
    }
}

static void splashscreen_window_load(Window *window)
{
    n_GContext *nGContext = rwatch_neographics_get_global_context();
    Layer *window_layer = window_get_root_layer(s_main_window);
    GRect bounds = layer_get_unobstructed_bounds(window_layer);
    s_canvas_layer = layer_create(bounds);

    //GFont gothic_14 = fonts_get_system_font(FONT_KEY_GOTHIC_14);
    GFont ghotic_18_bold = fonts_get_system_font(FONT_KEY_GOTHIC_18_BOLD);

    graphics_context_set_fill_color(nGContext, GColorRed);
    graphics_fill_rect(nGContext, GRect(0, 0, 144, 168), 0, GCornerNone);
    graphics_context_set_fill_color(nGContext, GColorBlack);
    graphics_draw_text(nGContext, "RebbleOS", ghotic_18_bold, GRect(144/2-27, 168/2-9, 100,25), 0, 0, 0);
    
    layer_set_update_proc(s_canvas_layer, splashscreen_update_proc);
    layer_add_child(window_layer, s_canvas_layer);
    tick_timer_service_subscribe(SECOND_UNIT, splashscreen_tick_handler);
}

static void splashscreen_window_unload(Window *window)
{
    layer_destroy(s_canvas_layer);
}

void splashscreen_deinit(void)
{
    window_destroy(s_main_window);
}

void splashscreen_init(void)
{
    counter = 0;
    s_main_window = window_create();
    window_set_window_handlers(s_main_window, (WindowHandlers)
    {
        .load = splashscreen_window_load,
        .unload = splashscreen_window_unload,
    });
    window_stack_push(s_main_window, true);
}
void splashscreen_main(void)
{
    splashscreen_init();
    app_event_loop();
    splashscreen_deinit();
}