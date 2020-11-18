/*
** EPITECH PROJECT, 2020
** utils
** File description:
** .h
*/

#ifndef UTILS_H_
#define UTILS_H_

#include <SFML/Graphics.h>

//open_window.c
sfRenderWindow *open_window(int width, int height, char *name);

//image.c
t_image *create_image(char *path, sfVector2f position, sfIntRect rect);
void destroy_image(t_image *image);

//move_rect.c
void move_rect(sfIntRect *rect, int offset, int max_value);

#endif /* !UTILS_H_ */
