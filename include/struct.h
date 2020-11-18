/*
** EPITECH PROJECT, 2020
** struct
** File description:
** h
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <SFML/Graphics.h>

typedef struct image_s {
    sfTexture* texture;
    sfSprite* sprite;
    sfVector2f position;
    sfIntRect rect;
} t_image;

#endif /* !STRUCT_H_ */
