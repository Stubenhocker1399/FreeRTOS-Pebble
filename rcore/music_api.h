#pragma once
/* music_api.h
 * api layer for controling the active music player and handling track info
 * RebbleOS
 *
 * Author: Chris Multhaupt <chris.multhaupt@gmail.com>
 */

#include "rebbleos.h"

//////// Track info //////////
char *music_get_current_artist();
char *music_get_current_title();
uint32_t music_get_current_run_time();
uint32_t music_get_run_time();
bool music_get_is_paused();

void music_set_current_artist(char *artist);
void music_set_current_title(char *title);
void music_set_current_run_time(uint32_t current_run_time);
void music_set_run_time(uint32_t run_time);
void music_set_is_paused(bool is_paused);

typedef struct music_track_info_t {
    char* artist;
    char* title;
    uint32_t current_run_time;
    uint32_t run_time;
    bool is_paused;
} music_track_info_t;

//////// Track control //////////

// boolean is used to know wether or not an action was successful so the animation can react accordingly,
// eg the playhead does not jump to the disk when pressing play even though there is no connection
// this could be implemented differently, where the animation only plays when checking the play status,
// track title, etc and changes have been detected
// Or maybe even a callback function you could register to?
bool music_play();
bool music_pause();
bool music_next();
bool music_prev();

// These don't provide visual feedback in form of the record players animation,
// at least not in the current implementation
// Would be interesting to know if there is a way to query the actual set volume
void music_volume_up();
void music_volume_down();
