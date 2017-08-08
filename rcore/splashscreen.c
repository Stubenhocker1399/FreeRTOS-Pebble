/* display.c
 *
 * RebbleOS
 *
 * Author: Stubenhocker
 */


//#include "rebbleos.h"
#include "display.h"
//#include "png.h"
//#include "resource.h"
#include "common.h"

void display_splash_screen(void){
    //TODO Actually load a splash screen
    uint8_t* framebuffer = display_get_buffer();
    //void resource_load_id_system(uint16_t resource_id, uint8_t *buffer)
    //resource_load_id_system(25,framebuffer);
    int x,y;
    for (x=0; x<144; x++)
    {
        for (y=0;y<168;y++){
            if(rand()%2==0){
                framebuffer[y * __SCREEN_FRAMEBUFFER_ROW_BYTE_AMOUNT + x] = 0xFF;
            }
        }
    }
    display_draw();
    //display_reset(false);
    //display_init();
    //for(;;);
    KERN_LOG("Display", APP_LOG_LEVEL_INFO, "Splash screen loaded");
}
