##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## 1. copy the build library into lib/
## implement the clean rule
##

SRC = 	my_putchar.c	\
	my_put_nbr.c	\
	my_putstr.c	\
	my_strcpy.c	\
	my_strcmp.c	\
	strdup.c\
	my_strlen.c\
	int_to_str.c\
	compare.c\
	my_strcat.c\
	my_strncat.c\

NAME = libmy.a

OBJ = $(SRC:.c=.o)

$(NAME):
	$(CC) -c $(SRC)
	ar rc $(NAME) *.o
	mkdir -p ../../include
	cp -r $(NAME) ../libmy.a

all: $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) libmy.a ../libmy.a
	clear

fclean: clean

re: fclean all

.PHONY: clean fclean re