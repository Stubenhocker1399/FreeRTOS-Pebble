#pragma once
/* music_api.h
 * api layer for controling the active music player and handling track info
 * RebbleOS
 *
 * Author: Chris Multhaupt <chris.multhaupt@gmail.com>
 */

#include "rebbleos.h"

struct music_track_info_t;
struct MusicCallbacks;


//////// Callbacks ////////

typedef void (*MusicOnChangeCallback)(struct music_track_info_t *music_track_info, void *context);
typedef void (*MusicPlayPauseCallback)(struct music_track_info_t *music_track_info, void *context);
typedef void (*MusicSkipCallback)(struct music_track_info_t *music_track_info, void *context);

typedef struct MusicCallbacks
{
    MusicOnChangeCallback on_music_change;
    MusicPlayPauseCallback on_music_play_pause;
    MusicSkipCallback on_music_skip;
} MusicCallbacks;

typedef struct music_track_info_t {
    char* artist;
    char* title;
    uint32_t current_run_time;
    uint32_t run_time;
    bool is_paused;
    MusicCallbacks callbacks;
    void *context;
} music_track_info_t;

void music_set_callbacks(music_track_info_t *music_track_info, void *context, MusicCallbacks callbacks);

music_track_info_t *music_init(void);
void music_destroy(music_track_info_t *music_track_info);

//////// Track info //////////

char *music_get_current_artist(music_track_info_t* music_track_info);
char *music_get_current_title(music_track_info_t* music_track_info);
uint32_t music_get_current_run_time(music_track_info_t* music_track_info);
uint32_t music_get_run_time(music_track_info_t* music_track_info);
bool music_get_is_paused(music_track_info_t* music_track_info);

void music_set_current_artist(music_track_info_t* music_track_info, char *artist);
void music_set_current_title(music_track_info_t* music_track_info, char *title);
void music_set_current_run_time(music_track_info_t* music_track_info, uint32_t current_run_time);
void music_set_run_time(music_track_info_t* music_track_info, uint32_t run_time);
void music_set_is_paused(music_track_info_t* music_track_info, bool is_paused);

//////// Track control //////////

void music_play(music_track_info_t* music_track_info);
void music_pause(music_track_info_t* music_track_info);
void music_next(music_track_info_t* music_track_info);
void music_prev(music_track_info_t* music_track_info);

// These don't provide visual feedback in form of the record players animation,
// at least not in the current implementation
// Would be interesting to know if there is a way to query the actual set volume
void music_volume_up(music_track_info_t* music_track_info);
void music_volume_down(music_track_info_t* music_track_info);
