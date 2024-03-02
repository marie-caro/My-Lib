##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## compile the library
##

SRC = 	my_putchar.c\
	my_free.c\
	my_memset.c\
	my_strcpy.c\
	my_strcmp.c\
	my_strdup.c\
	my_strlen.c\
	my_putstr.c\
	my_strcat.c\
	my_arrcpy.c\
	my_put_nbr.c\
	my_getline.c\
	my_strncat.c\
	my_bin_to_dec.c\
	my_int_to_str.c\
	my_str_to_float.c\
	my_str_to_word_array.c\
	how_many.c\
	read_fill.c\
	count_rows.c\
	formatting.c\
	my_printf/new_p.c\
	my_printf/format.c\
	my_printf/function.c\
	my_printf/my_printf.c\
	my_printf/my_put_all.c\
	my_printf/my_put_nbr2.c\
	my_printf/my_put_nbr3.c\
	my_printf/my_put_nbr4.c\
	my_printf/my_function.c\
	my_printf/my_put_float.c\
	my_printf/float_scient.c\
	my_printf/my_put_all_p.c\
	my_printf/my_put_scientific.c\
	my_printf/my_put_scientific_maj.c\

NAME = libmy.a

OBJ = $(SRC:.c=.o)

$(NAME):
	$(CC) -c $(SRC)
	ar rc $(NAME) *.o
	mkdir -p ../../include
	cp -r $(NAME) ../libmy.a

all: $(NAME)

clean:
	$(RM) *.o
	$(RM) libmy.a ../libmy.a
	clear

fclean: clean

re: fclean all

.PHONY: clean fclean re
