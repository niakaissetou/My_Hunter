/*
** EPITECH PROJECT, 2022
** initialise_struct
** File description:
** for_coding
*/
#include "struct.h"
#include <SFML/Audio.h>

animation_t *create_animation(animation_t *anime)
{
    anime->clock = sfClock_create();
    (anime->scale1).x = 0.30; (anime->scale1).y = 0.30;
    (anime->scale).x = 0.80; (anime->scale).y = 0.85;
    anime->sprite = sfSprite_create();
    anime->metal_knight = sfTexture_createFromFile("metal1.PNG", NULL);
    anime->sprite_knight = sfSprite_create();
    (anime->rect).top = 0; (anime->rect).left = 0;
    (anime->rect).width = 365;
    (anime->rect).height = 241;
    (anime->move).x = -250; (anime->move).y = 0;
    (anime->bouge).x = 7; (anime->bouge).y = 2;
    return (anime);
}
