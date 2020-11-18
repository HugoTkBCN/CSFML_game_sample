/*
** EPITECH PROJECT, 2020
** main
** File description:
** test
*/

#include "project.h"

int main(void)
{
    sfRenderWindow *window = open_window(WIDTH_WINDOW, HEIGHT_WINDOW, WINDOW_NAME);
    bool state = true;

    while (sfRenderWindow_isOpen(window) && state) {
        if ((state = run_menu(window)) == false)
            break;
        if ((state = run_game(window)) == false)
            break;
    }
    sfRenderWindow_destroy(window);
    if (state == false)
        return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}