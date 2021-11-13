##
## EPITECH PROJECT, 2021
## BSQ
## File description:
## Makefile
##

CC 			= gcc -o

SRC 		=	src/bsq.c		\
				src/my_algo.c	\
				src/my_open.c	\
				src/check_biggest_square.c

OBJ			=	$(SRC:.c=.o)

NAME 		= bsq

CFLAGS 		= -Wall -Wextra -L ./lib -lmy -I ./include

all: Makelib $(NAME) message

message:
		@echo -e "\n\e[92mThe programm has successfully compiled\e[0m"

$(NAME):	$(OBJ)
	$(CC) $(NAME) $(OBJ) $(CSFML_FLAGS) $(CFLAGS)

Makelib:
	make -C lib/my

clean:
	(cd src && rm *.o)
	@echo -e "\n    All .o deleted        "
fclean:
	(rm $(NAME))
	make fclean -C lib/my

re: clean all

.PHONY: clean fclean re all Makelib message tests_run