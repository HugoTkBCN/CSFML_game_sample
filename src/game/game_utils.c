/*
** EPITECH PROJECT, 2020
** game utils
** File description:
** c
*/

#include "game.h"

t_game *init_game(sfRenderWindow *window)
{   
    t_game *game = malloc(sizeof(t_game));

    game->is_running = true;
    game->window = window;
    game->background = create_image(BACKGROUND_GAME_PATH, BACKGROUND_GAME_POS, BACKGROUND_GAME_RECT);
    if (game->background == NULL)
        return (NULL);
    game->duck = create_image(DUCK_GAME_PATH, DUCK_GAME_POS, DUCK_GAME_RECT);
    if (game->duck == NULL)
        return (NULL);
    game->clock = sfClock_create();
    return (game);
}

void destroy_game(t_game *game)
{
    destroy_image(game->background);
    destroy_image(game->duck);
    free(game);
}