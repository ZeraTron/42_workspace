# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 11:21:55 by kdubois           #+#    #+#              #
#    Updated: 2019/09/17 20:55:01 by kdubois          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	BSQ

SRC		=	./src/main.c\
			./src/input.c\

OBJ		= 	./main.o\
			./input.o\

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