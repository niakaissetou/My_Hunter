/*
** EPITECH PROJECT, 2022
** whileforopen
** File description:
** openforwhile
*/
#include "my.h"
#include <SFML/Audio.h>

int while_for_display(sfRenderWindow *window, sfEvent event, animation_t *anime)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        if (event.type == sfEvtMouseButtonPressed) {
            manage_click(anime, event);
        }
    }
}
