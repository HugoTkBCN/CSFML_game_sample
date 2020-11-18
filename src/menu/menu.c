/*
** EPITECH PROJECT, 2020
** menu
** File description:
** c
*/

#include "menu.h"

void draw_menu(t_menu *menu)
{
    sfRenderWindow_drawSprite(menu->window, menu->background->sprite, NULL);
}

bool run_menu(sfRenderWindow *window)
{
    t_menu *menu = init_menu(window);

    if (menu == NULL)
        return (false);
    while (sfRenderWindow_isOpen(menu->window) && menu->is_running) {
        sfRenderWindow_clear(menu->window, sfBlack);
        get_event_menu(menu);
        draw_menu(menu);
        sfRenderWindow_display(menu->window);
    }
    destroy_menu(menu);
    return (true);
}