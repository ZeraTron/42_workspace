# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/14 18:59:28 by kdubois           #+#    #+#              #
#    Updated: 2019/09/14 19:08:16 by kdubois          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02

SRC		=	main.c parse.c 

OBJ		= 	main.o parse.o

CFLAGS 	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
		gcc $(CFLAGS) -c $(SRC)
		gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all