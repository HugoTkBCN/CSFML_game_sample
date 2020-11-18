/*
** EPITECH PROJECT, 2020
** game
** File description:
** h
*/

#ifndef GAME_H_
#define GAME_H_

#include <SFML/Graphics.h>
#include "struct.h"
#include "utils.h"
#include <stdbool.h>
#include <stdlib.h>

#define BACKGROUND_GAME_PATH    "deps/game/sprites/background.jpg"
#define BACKGROUND_GAME_POS     (sfVector2f){0, 0}
#define BACKGROUND_GAME_RECT    (sfIntRect){0, 0, 1920, 1080}

#define DUCK_GAME_PATH          "deps/game/sprites/duck.png"
#define DUCK_GAME_POS           (sfVector2f){0, 0}
#define DUCK_OFFSET             110
#define DUCK_WIDTH              330
#define DUCK_HEIGHT             110
#define DUCK_GAME_RECT          (sfIntRect){0, 0, DUCK_OFFSET, DUCK_HEIGHT}
#define DUCK_SPEED              20

#define MICRO_TO_SECOND(x)      x / 1000000.0
#define REFRESH_SPEED           0.10

typedef struct game_s {
    sfEvent event;
    sfRenderWindow *window;
    t_image *background;
    t_image *duck;
    bool is_running;
    sfClock *clock;
} t_game;

// game utils
t_game *init_game(sfRenderWindow *window);
void destroy_game(t_game *game);

// game refresh
void move_duck(t_game *game);
void refresh_game(t_game *game);

//game event
void get_event_game(t_game *game);

//game
void draw_game(t_game *game);
bool run_game(sfRenderWindow *window);

#endif /* !GAME_H_ */
