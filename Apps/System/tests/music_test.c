/* music_test.c
 * Routines for testing the music api
 * RebbleOS
 * 
 * Author: Chris Multhaupt <chris.multhaupt@gmail.com>
 */

#include "rebbleos.h"
#include "music_api.h"
#include "test_defs.h"

music_track_info_t *music_track_info;

bool music_test_init(Window *window) {
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Init: Music Test");
    Layer *window_layer = window_get_root_layer(window);
    GRect bounds = layer_get_frame(window_layer);

    music_init();

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
    music_set_current_artist(test_artist);
    test_assert(0 == strcmp(music_get_current_artist(), test_artist));
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Set current artist to %s, music_get_current_artist() returns %s", test_artist, music_get_current_artist());

    char *test_track = "Maxwell's Silver Hammer";
    music_set_current_title(test_track);
    test_assert(0 == strcmp(music_get_current_title(), test_track));
    // For some reason this hangs the system
    //SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Set current track to %s, music_get_current_title() returns %s", test_track, music_get_current_title());
    
    music_set_current_run_time(44);
    test_assert(music_get_current_run_time() == 44);
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Set current run time to 44, music_get_current_run_time() returns %d", music_get_current_run_time());

    music_set_run_time(207);
    test_assert(music_get_run_time() == 207);
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Set run time to 207, music_get_run_time() returns %d", music_get_run_time());

    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Setting callbacks");

    music_set_callbacks((MusicCallbacks) {
        .on_music_change = _on_music_change,
        .on_music_play_pause = _on_music_play_pause,
        .on_music_skip = _on_music_skip
    });

    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Skipping track");
    music_next();
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Previous track");
    music_prev();
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Play track");
    music_play();
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Pause track");
    music_pause();
    
    // TODO ask the user to skip the track on their phone to see
    //      if on_music_skip gets triggered correctly
    
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Volume up"); 
    music_volume_up();
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "Volume down"); 
    music_volume_down();

    test_complete(true);
    
    return true;
}

bool music_test_deinit(void) {
    SYS_LOG("test", APP_LOG_LEVEL_DEBUG, "De-Init: Music Test");
    music_destroy();
    return true;
}