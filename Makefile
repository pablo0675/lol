##
## EPITECH PROJECT, 2021
## BSQ
## File description:
## Makefile
##

CC 			= gcc -o

SRC 		=	src/bsq.c

OBJ			=	$(SRC:.c=.o)

NAME 		= bsq

TEST_FLAGS 	= -lcriterion --coverage --verbose

TEST_NAME 	= 	my_test_infin_add.c	\

Test_SRC	=

CFLAGS 		= -Wall -Wextra -L ./lib -lmy -I ./include

TEST_Cflags	= -L ../lib/ -lmy -I ../include/ -lcriterion --coverage

all: Makelib $(NAME) message

message:
		@echo -e "\n\e[92mThe programm has successfully compiled\e[0m"

$(NAME):	$(OBJ)
	$(CC) $(NAME) $(OBJ) $(CSFML_FLAGS) $(CFLAGS)

Makelib:
	make -C lib/my

tests_run:
	 @cd test_infin/ && gcc -o unit_tests $(TEST_NAME) $(Test_SRC) $(TEST_Cflags)
	 @cd test_infin/ && ./unit_tests

clean:
	rm *.o
	@echo -e "\n    All .o deleted        "
fclean:
	rm $(NAME)
	@cd test_infin/ && rm unit_tests && rm *.gcda *.gcno
	make fclean -C lib/my

re: clean all

.PHONY: clean fclean re all Makelib message tests_run