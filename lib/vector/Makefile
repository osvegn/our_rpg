##
## EPITECH PROJECT, 2022
## our_rpg
## File description:
## Makefile
##

SRC		=	source/construct_vector.c \
			source/destruct_vector.c \
			source/push_back_vector.c \
			source/at_vector.c \
			source/size_vector.c \
			source/erase_vector.c \

OBJ		=	${SRC:.c=.o}

RM		=	rm -rf

NAME	=	libvector.a

CFLAGS	=	-Wall -Wextra -Wshadow -I include -g

${NAME}: all

all: ${OBJ}
	ar rc ${NAME} ${OBJ}
	cp include/*.h ../include
	cp ${NAME} ../archive
	make clean

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all
