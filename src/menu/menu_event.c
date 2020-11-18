/*
** EPITECH PROJECT, 2020
** menu event
** File description:
** c
*/

#include "menu.h"

void get_event_menu(t_menu *menu)
{
     while (sfRenderWindow_pollEvent(menu->window, &menu->event)) {
        if (menu->event.type == sfEvtClosed)
            sfRenderWindow_close(menu->window);
        else if (menu->event.type == sfEvtMouseButtonReleased)
            menu->is_running = false;
    }
}