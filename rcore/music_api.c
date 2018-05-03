/* music_api.c
 * api layer for controling the active music player and handling track info
 * RebbleOS
 *
 * Author: Chris Multhaupt <chris.multhaupt@gmail.com>
 */

#include "music_api.h"
#include "rebbleos.h"

static music_track_info_t music_track_info;

//////// Track info get //////////

char *music_get_current_artist() {
    return music_track_info.artist;
}

char *music_get_current_title() {
    return music_track_info.title;
}

uint32_t music_get_current_run_time() {
    return music_track_info.current_run_time;
}

uint32_t music_get_run_time() {
    return music_track_info.run_time;
}

bool music_get_is_paused() {
    return music_track_info.is_paused;
}

//////// Track info set //////////

void music_set_current_artist(char *artist) {
    music_track_info.artist = artist;
}

void music_set_current_title(char *title) {
    music_track_info.title = title;
}

void music_set_current_run_time(uint32_t current_run_time) {
    music_track_info.current_run_time = current_run_time;
}

void music_set_run_time(uint32_t run_time) {
    music_track_info.run_time = run_time;
}

void music_set_is_paused(bool is_paused) {
    music_track_info.is_paused = is_paused;
}

//////// Track control //////////

bool music_play() {
    return true;
}

bool music_pause() {
    return true;
}

bool music_next() {
    return true;
}

bool music_prev() {
    return true;
}

void music_volume_up() {

}

void music_volume_down() {

}
