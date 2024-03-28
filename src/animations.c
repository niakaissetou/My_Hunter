/*
** EPITECH PROJECT, 2022
** animations
** File description:
** sprite_sheets
*/

#include "my.h"
#include "struct.h"
#include <SFML/System.h>
#include <time.h>
#include <SFML/Graphics/Export.h>
#include <stdio.h>

int proto(void)
{
    float i, num;
    for (i = 2; i < 300; i++) {
        num = rand() % 300 + 1;
    }
}

animation_t sprite_animation(animation_t *anime)
{
    sfEvent event;
    sfVector2f vec;
    vec.x = 100;
    vec.y = 0;
    if (anime->seconds > 0.1) {
        anime->rect.left += 365;
        if (anime->rect.left == 1095) {
            anime->rect.left = 0;
        }
        sfSprite_move(anime->sprite_knight, anime->bouge);
        sfClock_restart(anime->clock);
        if (anime->bouge.x == 800.0) {
            anime->move.x = -350; anime->move.y = 0;
        }
    }
    sfSprite_setTextureRect(anime->sprite_knight, anime->rect);
    sfRenderWindow_drawSprite(anime->window, anime->sprite_knight, NULL);
}

animation_t manage_click(animation_t *anime, sfEvent event)
{
    sfRenderWindow *window;
    float x = event.mouseButton.x;
    float y = event.mouseButton.y;
    float a = sfSprite_getPosition(anime->sprite_knight).x;
    float b = sfSprite_getPosition(anime->sprite_knight).y;

    if (x > a - 200 && x < a + 200) {
        if (y > b - 90 && y < b + 90) {
            sfSprite_setPosition(anime->sprite_knight, anime->move);
            anime->move.x = -350; anime->move.y = proto();
            anime->bouge.x += 5;
        }
    }
}
