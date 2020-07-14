##
## EPITECH PROJECT, 2018
## 104intersection
## File description:
## Makefile
##

SRC	=	main.c			\
		basic_calculation.c	\
		checking.c		\
		cylinder.c		\
		cone.c			\
		cone_formula.c		\
		get_functions.c

OBJ	=	$(SRC:.c=.o)

NAME	=	104intersection

CFLAGS	=	-g -g3 -ggdb -I ./include -lm

all:		$(NAME) message

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

message:
		@echo "SUCCESSFULLY COMPILED."
