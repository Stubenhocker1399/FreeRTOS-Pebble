/* display.c
 *
 * RebbleOS
 *
 * Author: Stubenhocker
 */


//#include "rebbleos.h"

#include "display.h"
#include "platform.h"
//#include "png.h"
//#include "resource.h"
#include "common.h"
//#include "hw/platform/snowy_display.h"
//#include "driver.h"
void display_splash_screen(void){
    //TODO Actually load a splash screen
    uint8_t* framebuffer = display_get_buffer();
    //void resource_load_id_system(uint16_t resource_id, uint8_t *buffer)
    //resource_load_id_system(25,framebuffer);
    //hw_display_start_frame(0, 0);
    int x,y;
    for (y=0;y<168;y++){
        for (x=0; x<144; x++){
            if(rand()%2==0){
                framebuffer[y * __SCREEN_FRAMEBUFFER_ROW_BYTE_AMOUNT + x] = 0xFF;
                 
                /*hw_display_start_frame */
            }
        }
        //hw_display_start_frame(x, y);
    
    }
    hw_display_start_frame(0, 0);
    for(x=0;x<255;x++) 
    delay_ms(255);
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
