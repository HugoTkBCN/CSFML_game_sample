/*
** EPITECH PROJECT, 2020
** game event
** File description:
** c
*/

#include "game.h"

void get_event_game(t_game *game)
{
     while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
        else if (game->event.type == sfEvtMouseButtonReleased)
            game->is_running = false;
    }
}