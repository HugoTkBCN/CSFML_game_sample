/*
** EPITECH PROJECT, 2020
** game
** File description:
** c
*/

#include "game.h"

void draw_game(t_game *game)
{
    sfRenderWindow_drawSprite(game->window, game->background->sprite, NULL);
    sfRenderWindow_drawSprite(game->window, game->duck->sprite, NULL);
}

bool run_game(sfRenderWindow *window)
{
    t_game *game = init_game(window);

    if (game == NULL)
        return (false);
    while (sfRenderWindow_isOpen(game->window) && game->is_running) {
        sfRenderWindow_clear(game->window, sfBlack);
        refresh_game(game);
        get_event_game(game);
        draw_game(game);
        sfRenderWindow_display(game->window);
    }
    destroy_game(game);
    return (true);
}