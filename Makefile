##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Compile program
##

SRC		=	$(shell echo src/*.c)

OBJ		=	$(SRC:.c=.o)

NAME		=	my_sokoban

all		:	$(NAME)

$(NAME)		: $(OBJ)
		 gcc -o $(NAME) $(OBJ) -lm -lncurses

clean		:
		 rm -fr $(OBJ)
		rm -fr *~ include/*~ src/*~

fclean		: clean
		 rm -fr $(NAME)

re		: fclean all
