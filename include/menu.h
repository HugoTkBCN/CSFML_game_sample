/*
** EPITECH PROJECT, 2020
** menu
** File description:
** h
*/

#ifndef MENU_H_
#define MENU_H_

#include <SFML/Graphics.h>
#include "struct.h"
#include "utils.h"
#include <stdbool.h>
#include <stdlib.h>

#define BACKGROUND_MENU_PATH     "deps/game/sprites/background.jpg"
#define BACKGROUND_MENU_POS      (sfVector2f){0, 0}
#define BACKGROUND_MENU_RECT     (sfIntRect){0, 0, 1920, 1080}

typedef struct menu_s {
    sfEvent event;
    sfRenderWindow *window;
    t_image *background;
    bool is_running;
} t_menu;

//menu utils
t_menu *init_menu(sfRenderWindow *window);
void destroy_menu(t_menu *menu);

//menu event
void get_event_menu(t_menu *menu);

//menu
void draw_menu(t_menu *menu);
bool run_menu(sfRenderWindow *window);

#endif /* !MENU_H_ */
