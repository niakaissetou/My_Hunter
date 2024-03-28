/*
** EPITECH PROJECT, 2022
** le_the_main
** File description:
** mainmain
*/
#include "my.h"

int rules(int ac, char **av)
{
    for (int i = 0; av[i] != NULL; i++) {
        i++;
        if (ac == 2 && av[i][0] == '-' && av[i][1] == 'h') {
            my_putstr("This program launches a game inspired by Duck Hunt\n");
            my_putstr("The goal is to touch the animation by clicking on it\n");
            my_putstr("If you miss the animation");
            my_putstr("Just one time you're done !\n");
            my_putstr("To quit the game you have to close the window\n");
            my_putstr("Good luck\n");
            return 0;
        } else {
            return 84;
        }
    }
}

int main(int ac, char **av)
{
    sfEvent event;
    animation_t anime;
    animation_t click;
    sfTexture *texture = sfTexture_createFromFile("castle1.png", NULL);

    if (!texture)
        return EXIT_FAILURE;
    if (ac == 2)
    rules(ac, av);
    if (ac == 1)
    display_a_font(event, &anime, &click);
    else
    return 84;
}
