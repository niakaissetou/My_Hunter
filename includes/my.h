/*
** EPITECH PROJECT, 2022
** my_point_h
** File description:
** mskaos
*/

#ifndef MY_H_
    #define MY_H_
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdlib.h>
    #include "struct.h"
animation_t *create_animation(animation_t *anime);
animation_t manage_click(animation_t *anime, sfEvent event);
animation_t sprite_animation(animation_t *anime);
animation_t suite_create(animation_t *anime);
int count_life(animation_t *anime);
void my_putchar(char c);
int my_putstr(char const *str);
int open_window(void);
int display_a_font(sfEvent event, animation_t *anime, animation_t *click);
int while_for_display(sfRenderWindow *window,
sfEvent event, animation_t *anime);
int my_putstr(char const *str);
#endif
