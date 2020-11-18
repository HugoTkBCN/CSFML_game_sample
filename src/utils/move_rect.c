/*
** EPITECH PROJECT, 2020
** move_rect
** File description:
** c
*/

#include <SFML/Graphics.h>

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left >= max_value - offset)
        rect->left = 0;
    else
        rect->left = rect->left + offset;
}
