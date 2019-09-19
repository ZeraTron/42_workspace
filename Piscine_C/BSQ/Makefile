# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkany <bkany@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 11:21:55 by kdubois           #+#    #+#              #
#    Updated: 2019/09/18 20:49:10 by bkany            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	BSQ

SRC		=	./src/main.c\
			./src/input.c\
			./src/map.c\
			./src/libft.c\
			./src/ft_init_square.c\
			./src/ft_fill_square.c\
			./src/ft_case_max.c\
			./src/rebuild_char_map.c

OBJ		= 	./main.o\
			./input.o\
			./map.o\
			./libft.o\
			./ft_init_square.o\
			./ft_fill_square.o\
			./ft_case_max.o\
			./rebuild_char_map.o

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

debug	:	fclean
		gcc -c $(CFLAGS) $(SRC) -I $(HEADER) 
		gcc -g3 -fsanitize=address -o $(NAME) $(CFLAGS) $(OBJ)
