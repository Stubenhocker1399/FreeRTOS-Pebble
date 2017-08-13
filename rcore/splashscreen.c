/* display.c
 *
 * RebbleOS
 *
 * Author: Stubenhocker
 */


//#include "rebbleos.h"

//#include "platform.h"
//#include "png.h"
//#include "resource.h"
//#include "common.h"
#include "rebbleos.h"
#include "systemapp.h"
#include "ngfxwrap.h"
//#include "context.h"
void delay_us_2(uint16_t us)
{
    for(int i = 0; i < 22 * us; i++)
            ;;
}

void delay_ms_2(uint16_t ms)
{
    delay_us_2(1000 * ms);
}
static Window *s_main_window;
static Layer *s_canvas_layer;

static void systemapp_update_proc(Layer *layer, GContext *nGContext)
{    
}

static void tick_handler(struct tm *tick_time, TimeUnits units_changed){
    
    struct tm *rbl_tick_time = rbl_get_tm();
    printf("splash\n");
}

static void splashscreen_window_load(Window *window)
{
    printf("Splashscreen load\n");
    n_GContext *nGContext = rwatch_neographics_get_global_context();
    

    Layer *window_layer = window_get_root_layer(s_main_window);
    GRect bounds = layer_get_unobstructed_bounds(window_layer);
    s_canvas_layer = layer_create(bounds);
    graphics_context_set_fill_color(nGContext, GColorBlue);
    graphics_fill_rect(nGContext, GRect(0, 0, 144, 168), 0, GCornerNone);
    //graphics_fill_rect_app())
    layer_set_update_proc(s_canvas_layer, systemapp_update_proc);
    layer_add_child(window_layer, s_canvas_layer);
    //layer_mark_dirty(s_canvas_layer);
    tick_timer_service_subscribe(SECOND_UNIT, tick_handler);
}

static void splashscreen_window_unload(Window *window)
{
    layer_destroy(s_canvas_layer);
}

void splashscreen_deinit(void)
{
    window_destroy(s_main_window);
}

void init(void){
    printf("Calling window create");
    s_main_window = window_create();
     window_set_window_handlers(s_main_window, (WindowHandlers) {
        .load = splashscreen_window_load,
        .unload = splashscreen_window_unload,
    });
    window_stack_push(s_main_window, true);
}
void display_splash_screen(void){
    
    int x,y;
    /*  
    for (y=0;y<168;y++){
        for (x=0; x<144; x++){
            if(rand()%2==0){
                framebuffer[y * __SCREEN_FRAMEBUFFER_ROW_BYTE_AMOUNT + x] = 0xFF;
                 
                
            }
        }
        //hw_display_start_frame(x, y);
     
    }
    */
    init();
    printf("Calling app event loop");
    app_event_loop();
    splashscreen_deinit();
    //for(x=0;x<255;x++) 
    //delay_ms_2(255);
    //display_draw();
 /*    hw_display_start_frame(0, 0);hw_display_start_frame(0, 0);
    hw_display_start_frame(0, 0);
    hw_display_start_frame(0, 0);
    hw_display_start_frame(0, 0);
    hw_display_start_frame(0, 0); */
    
    //DMA2_Stream5_IRQHandler();
    //display_reset(false);
    //display_init();
    //for(;;)
    KERN_LOG("Display", APP_LOG_LEVEL_INFO, "Splash screen loaded");
}