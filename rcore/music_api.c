/* music_api.c
 * api layer for controling the active music player and handling track info
 * RebbleOS
 *
 * Author: Chris Multhaupt <chris.multhaupt@gmail.com>
 */

#include "music_api.h"
#include "rebbleos.h"

music_track_info_t* music_init(void) {
    music_track_info_t *music_track_info = (music_track_info_t *) app_calloc(1, sizeof(music_track_info_t));
    return music_track_info;
}
void music_destroy(music_track_info_t *music_track_info) {
    SYS_LOG("music", APP_LOG_LEVEL_DEBUG, "Destroy music_track_info"); // You monster
    app_free(music_track_info);
};

//////// Track info get //////////

char *music_get_current_artist(music_track_info_t* music_track_info) {
    return music_track_info->artist;
}

char *music_get_current_title(music_track_info_t* music_track_info) {
    return music_track_info->title;
}

uint32_t music_get_current_run_time(music_track_info_t* music_track_info) {
    return music_track_info->current_run_time;
}

uint32_t music_get_run_time(music_track_info_t* music_track_info) {
    return music_track_info->run_time;
}

bool music_get_is_paused(music_track_info_t* music_track_info) {
    return music_track_info->is_paused;
}

//////// Track info set //////////

void music_set_current_artist(music_track_info_t* music_track_info, char *artist) {
    music_track_info->artist = artist;
}

void music_set_current_title(music_track_info_t* music_track_info, char *title) {
    music_track_info->title = title;
}

void music_set_current_run_time(music_track_info_t* music_track_info, uint32_t current_run_time) {
    music_track_info->current_run_time = current_run_time;
}

void music_set_run_time(music_track_info_t* music_track_info, uint32_t run_time) {
    music_track_info->run_time = run_time;
}

void music_set_is_paused(music_track_info_t* music_track_info, bool is_paused) {
    music_track_info->is_paused = is_paused;
}

//////// Track control //////////

void music_play(music_track_info_t* music_track_info) {
    SYS_LOG("music", APP_LOG_LEVEL_DEBUG, "Firing on_music_play_pause callback");
    music_track_info->callbacks.on_music_play_pause(music_track_info, music_track_info->context);
}

void music_pause(music_track_info_t* music_track_info) {
    SYS_LOG("music", APP_LOG_LEVEL_DEBUG, "Firing on_music_play_pause callback");
    music_track_info->callbacks.on_music_play_pause(music_track_info, music_track_info->context);
}

void music_next(music_track_info_t* music_track_info) {
    SYS_LOG("music", APP_LOG_LEVEL_DEBUG, "Firing on_music_change callback");
    music_track_info->callbacks.on_music_change(music_track_info, music_track_info->context);
}

void music_prev(music_track_info_t* music_track_info) {
    SYS_LOG("music", APP_LOG_LEVEL_DEBUG, "Firing on_music_change callback");
    music_track_info->callbacks.on_music_change(music_track_info, music_track_info->context);
}

void music_volume_up(music_track_info_t* music_track_info) {
    SYS_LOG("music", APP_LOG_LEVEL_DEBUG, "Raising volume");
}

void music_volume_down(music_track_info_t* music_track_info) {
    SYS_LOG("music", APP_LOG_LEVEL_DEBUG, "Lowering volume");

}

//////// Callbacks ////////

void music_set_callbacks(music_track_info_t *music_track_info, void *context, MusicCallbacks callbacks)
{
    music_track_info->callbacks = callbacks;
    music_track_info->context = context;
}
