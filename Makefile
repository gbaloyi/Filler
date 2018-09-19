# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 14:53:40 by gbaloyi           #+#    #+#              #
#    Updated: 2018/08/20 10:20:45 by gbaloyi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler

SRC = main.c\
	  find_player.c\
	  check_piece.c\
	  get_information.c\
	  get_map.c\
	  get_next_line.c\
	  player.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		make -C libft/ fclean && make -C libft/
		gcc -Wall -Wextra -Werror -c $(SRC)
		gcc -Wall -Wextra -Werror $(OBJ) libft/libft.a -o $(NAME)

clean:
		/bin/rm -f $(OBJ)
		make -C libft/clean

fclean:
		/bin/rm -f $(NAME)
		/bin/rm -f libft/libft.a
		/bin/rm -f *.o
		/bin/rm -f libft/*.o

re: fclean all
