/*
** EPITECH PROJECT, 2022
** display_something
** File description:
** int_the_background
*/
#include "my.h"
#include "struct.h"
#include <stdio.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <time.h>

int display_a_font(sfEvent event, animation_t *anime, animation_t *click)
{
    sfVideoMode mode = (sfVideoMode) {800, 600, 32};
    sfSprite *sprite = sfSprite_create(); sfMusic *music;
    anime->window = sfRenderWindow_create(mode,
    "Metal hunter", sfResize | sfClose, NULL);
    sfTexture *texture = sfTexture_createFromFile("castle1.png", NULL);
    sfVector2f scale = {0.80, 0.85}; sfClock *clock = sfClock_create();
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, texture, sfTrue); create_animation(anime);
    sfSprite_setScale(anime->sprite_knight, anime->scale1);
    sfRenderWindow_setFramerateLimit(anime->window, 25);
    sfSprite_setTexture(anime->sprite_knight, anime->metal_knight, sfTrue);
    music = sfMusic_createFromFile("metal.ogg"); sfMusic_play(music);
    while (sfRenderWindow_isOpen(anime->window)) {
        anime->time = sfClock_getElapsedTime(anime->clock);
        anime->seconds = (anime->time).microseconds / 1000000.0;
        while_for_display(anime->window, event, anime);
        sfRenderWindow_clear(anime->window, sfBlack);
        sfRenderWindow_drawSprite(anime->window, sprite, NULL);
        sprite_animation(anime); sfRenderWindow_display(anime->window);
    }
}
