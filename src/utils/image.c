/*
** EPITECH PROJECT, 2020
** image
** File description:
** .c
*/

#include <stdlib.h>
#include "struct.h"

t_image *create_image(char *path, sfVector2f position, sfIntRect rect)
{
    t_image *image = malloc(sizeof(t_image));

    if (image == NULL)
        return (NULL);
    image->rect = rect;
    image->position = position;
    image->texture = sfTexture_createFromFile(path, NULL);
    if (image->texture == NULL)
        return (NULL);
    image->sprite = sfSprite_create();
    if (image->sprite == NULL)
        return (NULL);
    sfSprite_setTexture(image->sprite, image->texture, sfTrue);
    sfSprite_setTextureRect(image->sprite, image->rect);
    sfSprite_setPosition(image->sprite, image->position);
    return (image);
}

void destroy_image(t_image *image)
{
    sfSprite_destroy(image->sprite);
    sfTexture_destroy(image->texture);
    free(image);
}