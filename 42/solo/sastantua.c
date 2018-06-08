/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ans.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 20:07:19 by kachen            #+#    #+#             */
/*   Updated: 2018/05/20 20:07:21 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_door(int *i, int *doorZ, int space, int door)
{
	int	key_pos;

	key_pos = door / 2;
	if ((door > 3) && (space == key_pos)
		&& (*doorZ == (door / 2) - 1))
		ft_putchar('$');
	else
		ft_putchar('|');
	*i += 1;
	*doorZ += 1;
}

int		print_line(int line_nb, int space, int door)
{
	int index;
	int doorZ;

	doorZ = -(door / 2);
	index = 0;
	while (index < space)
	{
		ft_putchar(' ');
		index++;
	}
	ft_putchar('/');
	index = 0;
	while (index <= line_nb * 2)
	{
		while ((index == line_nb + doorZ) && (space < door)
			&& (doorZ <= door / 2))
			print_door(&index, &doorZ, space, door);
		ft_putchar('*');
		index++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (space - 1);
}

void	getData(int space, int nb_jumps, int line_jump, int door)
{
	int i;
	int j;
	int jump;

	i = 0;
	j = 1;
	jump = 4;
	while (space + 1)
	{
		if (i == line_jump)
		{
			i += nb_jumps;
			space -= nb_jumps;
			line_jump = i + jump;
			jump++;
			if (j == 2)
			{
				nb_jumps++;
				j = 0;
			}
			j++;
		}
		space = print_line(i, space, door);
		i++;
	}
}

void	sastantua(int size)
{
	int	space;
	int	index;
	int	c;

	index = 1;
	c = 0;
	space = 0;
	if (size > 0)
	{
		while (index <= size)
		{
			space += 6 + j;
			if (index > 1)
				c++;
			if ((index > 1) && (index % 2 == 1))
				c++;
			index++;
		}
		if (!(size % 2))
			size--;
		getData(space - 4, 2, 3, size);
	}
}


int main()
{
	sastantua(1);
	sastantua(2);
	sastantua(3);
	sastantua(4);
	sastantua(5);
	sastantua(6);
	sastantua(7);
	return (0);
}