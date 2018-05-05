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

music_track_info_t *music_track_info;

bool music_test_init(Window *window) {
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Init: Music Test");
    Layer *window_layer = window_get_root_layer(window);
    GRect bounds = layer_get_frame(window_layer);

    music_track_info = music_init();

    // TODO draw something when testing music actions via bluetooth, as those are likely not instant
    // Maybe do a user assisted test? aka 1. Press button to send play command, then 2. ask if music started playing, 3. depending on answer fail test

    return true;
}

static void _on_music_change(struct music_track_info_t *music_track_info, void *context){
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Callback: on_music_change");
}

static void _on_music_play_pause(struct music_track_info_t *music_track_info, void *context){
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Callback: on_music_play_pause");
}

static void _on_music_skip(struct music_track_info_t *music_track_info, void *context){
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Callback: on_music_skip");
}

bool music_test_exec(void) {
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Exec: Music Test");

    char *test_artist = "The Beatles";
    music_set_current_artist(music_track_info, test_artist);
    test_assert(0 == strcmp(music_get_current_artist(music_track_info), test_artist));

    char *test_track = "Maxwell's Silver Hammer";
    music_set_current_title(music_track_info, test_track);
    test_assert(0 == strcmp(music_get_current_title(music_track_info), test_track));
    
    music_set_current_run_time(music_track_info, 44);
    test_assert(music_get_current_run_time(music_track_info) == 44);

    music_set_run_time(music_track_info, 207);
    test_assert(music_get_run_time(music_track_info) == 207);

    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Setting callbacks");

    music_set_callbacks(music_track_info, music_track_info->context, (MusicCallbacks) {
        .on_music_change = _on_music_change,
        .on_music_play_pause = _on_music_play_pause,
        .on_music_skip = _on_music_skip
    });

    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Skipping track");
    music_next(music_track_info);
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Previous track");
    music_prev(music_track_info);
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Play track");
    music_play(music_track_info);
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Pause track");
    music_play(music_track_info);
    
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Manually fire skip callback"); 
    // This could be done better by asking the user to skip the track on his phone
    music_track_info->callbacks.on_music_skip(music_track_info, music_track_info->context);

    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Volume up"); 
    music_volume_up(music_track_info);
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Volume down"); 
    music_volume_down(music_track_info);

    test_complete(true);
    
    return true;
}

bool music_test_deinit(void) {
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "De-Init: Music Test");
    music_destroy(music_track_info);
    return true;
}