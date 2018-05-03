/* music_test.c
 * Routines for testing the music api
 * RebbleOS
 * 
 * Author: Chris Multhaupt <chris.multhaupt@gmail.com>
 */

#include "rebbleos.h"
#include "systemapp.h"
#include "music_api.h"
//#include "status_bar_layer.h"
#include "test_defs.h"
//#include "platform_res.h"


bool music_test_init(Window *window) {
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Init: Music Test");
    Layer *window_layer = window_get_root_layer(window);
    GRect bounds = layer_get_frame(window_layer);
    
    // TODO draw something when testing music actions via bluetooth, as those are likely not instant

    return true;
}

bool music_test_exec(void) {
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Exec: Music Test");

    char *test_artist = "The Beatles";
    music_set_current_artist(test_artist);
    test_assert(0 == strcmp(music_get_current_artist(), test_artist));

    char *test_track = "Maxwell's Silver Hammer";
    music_set_current_title(test_track);
    test_assert(0 == strcmp(music_get_current_title(), test_track));
    
    music_set_current_run_time(44);
    test_assert(music_get_current_run_time() == 44);

    music_set_run_time(207);
    test_assert(music_get_run_time() == 207);

    // TODO add play, pause, next, prev, vol up, vol down tests

    test_complete(true);
    
    return true;
}

bool music_test_deinit(void) {
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "De-Init: Music Test");
    
    return true;
}