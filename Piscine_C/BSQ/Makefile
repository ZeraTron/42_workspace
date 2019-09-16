# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 11:21:55 by kdubois           #+#    #+#              #
#    Updated: 2019/09/16 13:53:47 by kdubois          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	BSQ

SRC		=	./src/main.c\
			./src/parse.c\
			./src/input.c\
			./src/grid.c

OBJ		= 	./main.o\
			./parse.o\
			./input.o\
			./grid.o

CFLAGS 	=	-Wall -Wextra -Werror

HEADER	=	./header/bsq.h

$(NAME)	:	all

all		:	$(NAME)
		gcc -c $(CFLAGS) $(SRC) -I $(HEADER) 
		gcc -o $(NAME) $(CFLAGS) $(OBJ)

clean	:
		rm -rf $(OBJ)

fclean	:	clean
		rm -rf $(NAME)

re		:	fclean all