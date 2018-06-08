# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kachen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/31 14:13:02 by kachen            #+#    #+#              #
#    Updated: 2018/05/31 14:13:03 by kachen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
INCLUDES_DIR = includes/
FLAGS=-Wall -Wextra -Werror
FUNCTIONS=main.c
SRCS = srcs/main.c
OBJ = main.o

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ):
	gcc -I$(INCLUDES_DIR) $(FLAGS) -c $(SRCS)

$(NAME): $(OBJ)
	gcc -I$(INCLUDES_DIR) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
