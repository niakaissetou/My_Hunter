##
## EPITECH PROJECT, 2022
## makefile
## File description:
## filemake
##

CC = gcc

SRC     =       src/main.c	\
		src/animations.c	\
		src/initialise.c	\
		src/my_putstr.c	\
		src/my_putchar.c	\
		src/while_for_open.c	\
		src/my_hunter_display_font.c

OBJ     =       $(SRC:.c=.o)

NAME    =       my_hunter

CPPFLAGS = -I./includes/

all:$(NAME)

$(NAME):        $(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system
debug: 	CFLAGS += -g3
debug:	all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
