##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_strlen.c		\
		my_putstr.c		\
		my_put_nbr.c	\
		my_revstr.c		\
		my_strcpy.c		\
		my_str_to_array.c	\
		my_strcmp.c			\
		my_strdup.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS = -Wall -Wextra -I include/

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm $(OBJ)
	cp $(NAME) ../
clean:
	rm -f $(OBJ)

fclean: clean
	rm ../$(NAME)
	rm $(NAME)
re: fclean all
