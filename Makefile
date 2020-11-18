##
## EPITECH PROJECT, 2018
## make file
## File description:
## do op
##

CC	= 	gcc

NAME    =	a.out

SRC	=	src/main.c	\
		src/menu/menu.c	\
		src/menu/menu_event.c	\
		src/menu/menu_utils.c	\
		src/game/game.c	\
		src/game/game_event.c	\
		src/game/game_refresh.c	\
		src/game/game_utils.c	\
		src/utils/image.c	\
		src/utils/open_window.c	\
		src/utils/move_rect.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	= -I./include -I. -W -Wall -Werror -Wextra
LIB 	= -lcsfml-graphics -lcsfml-system -lcsfml-audio

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)
clean:
	rm -rf $(OBJ)

fclean:		clean
	rm -rf $(NAME)

re:		fclean all
