/*
** EPITECH PROJECT, 2022
** struct_for_game
** File description:
** struuuucture
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #include <SFML/System/Time.h>
    #include <stdlib.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window/Export.h>
    #include <SFML/Window/Types.h>
    #include <SFML/System.h>
    #include <SFML/Graphics/Export.h>
    #include <time.h>

typedef struct game {
    sfRenderWindow *window;
    sfTexture *texture;
    sfVideoMode mode;
    sfVector2f scale1; sfVector2f scale;
    sfVector2f bouge;
    sfSprite *sprite;
    sfTexture *metal_knight;
    sfSprite *sprite_knight;
    sfVector2f move;
    sfTime time;
    sfIntRect rect;
    sfClock *clock;
    float seconds, speed;
}animation_t;
#endif /* !STRUCT_H_ */
