# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kachen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/28 20:41:17 by kachen            #+#    #+#              #
#    Updated: 2018/05/28 20:41:18 by kachen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_op.c ft_putchar.c ft_putstr.c ft_atoi.c ft_putnbr.c 
OBJECT = ft_op.o ft_putchar.o ft_putstr.o ft_atoi.o ft_putnbr.o

FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) -o do-op main.c $(SRC)

clean:
	/bin/rm -f $(OBJECT)

fclean: clean
	/bin/rm -f do-op

re: fclean all
