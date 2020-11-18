/*
** EPITECH PROJECT, 2020
** game refresh
** File description:
** c
*/

#include "game.h"

void move_duck(t_game *game)
{
    if (game->duck->position.x + DUCK_SPEED >= sfRenderWindow_getSize(game->window).x)
        game->duck->position.x = 0;
    else
        game->duck->position.x += DUCK_SPEED;
    sfSprite_setPosition(game->duck->sprite, game->duck->position);
}

void refresh_game(t_game *game)
{
    if (MICRO_TO_SECOND(sfClock_getElapsedTime(game->clock).microseconds) > REFRESH_SPEED) {
        move_rect(&game->duck->rect, DUCK_OFFSET, DUCK_WIDTH);
        sfSprite_setTextureRect(game->duck->sprite, game->duck->rect);
        move_duck(game);
        sfClock_restart(game->clock);
    }
}