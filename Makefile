##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## makefile for printf
##

NAME 	=	ai

SRC	=		$(wildcard ./src/*.c)

T_SRC	=

OBJ_S	=		$(SRC:.c=.o)

T_OBJ	=		$(T_SRC:.c=.o)

CFLAGS	+=		-g -Wall -Wextra -I./include

LDFLAGS_T	+=	-lcriterion $(LDFLAGS)

GCC	=		gcc

all:			$(NAME)

$(NAME):lib	$(OBJ_S)
			$(CC) -o $(NAME) $(OBJ_S)

clean:
			rm -f $(OBJ_S)
			rm -f *~

fclean: clean
			rm -f $(NAME)
			rm -f unit_tests
			rm -f vgcore*

re: fclean all

unit_tests: re $(T_OBJ)
			$(GCC) $(T_OBJ) -o unit_tests --coverage $(LDFLAGS_T)

run_tests: 		$(NAME) ./unit_tests

.PHONY: 		all clean lib fclean re unit_tests run_tests
