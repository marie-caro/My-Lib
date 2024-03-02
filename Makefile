##
## EPITECH PROJECT, 2023
## radar_mod
## File description:
## how to integrate the lib in a Makefile
##

SRC =	file_name.c\

OBJ = $(SRC:.c=.o)

LIB =	libmy.a

BINARY =	bin_name

LDFLAGS = -I./include -L lib/my/ -lmy

all:	$(LIB) $(BINARY)

$(LIB):
	$(MAKE) -C lib/my/

$(BINARY): $(OBJ)
	gcc -o $(BINARY) $(SRC) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	$(MAKE) fclean -C lib/my/
	$(RM) lib/libmy.a lib/my/libmy.a
	rm $(BINARY)
	clear

debug: $(OBJ)
	gcc -g3 -o debug $(SRC) $(LDFLAGS)

re: fclean all

.PHONY:	all clean fclean re
