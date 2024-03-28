/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    int t = 0;

    while (str[t]){
        my_putchar(str[t]);
        t = t + 1;
    }
    return 0;
}
