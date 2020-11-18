/*
** EPITECH PROJECT, 2020
** menu utils
** File description:
** c
*/

#include "menu.h"

t_menu *init_menu(sfRenderWindow *window)
{   
    t_menu *menu = malloc(sizeof(t_menu));

    menu->is_running = true;
    menu->window = window;
    menu->background = create_image(BACKGROUND_MENU_PATH, BACKGROUND_MENU_POS, BACKGROUND_MENU_RECT);
    if (menu->background == NULL)
        return (NULL);
    return (menu);
}

void destroy_menu(t_menu *menu)
{
    destroy_image(menu->background);
    free(menu);
}