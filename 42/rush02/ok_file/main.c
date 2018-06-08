/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 14:11:31 by kachen            #+#    #+#             */
/*   Updated: 2018/06/03 14:11:33 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	display(int type, int col, int row, int *flag)
{
	if (*flag > 1)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(type);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("] [");
	ft_putnbr(row);
	ft_putchar(']');
}

char	*read_output(int *col, int *row)
{
	char	*str;
	char	buf;
	int		i;
	int		c;

	str = malloc((*col) * (*row) + 1);
	i = 0;
	c = 0;
	while ((read(0, &buf, 1)))
	{
		*col = c;
		if (buf == '\n')
		{
			c = 0;
			(*row)++;
		}
		else
			c++;
		str[i] = buf;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	match(char *str, int col, int row)
{
	int flag;

	flag = 0;
	if (cmp(str, setup00(col, row, 0), &flag) == 0)
		display(0, col, row, &flag);
	if (cmp(str, setup01(col, row, 0), &flag) == 0)
		display(1, col, row, &flag);
	if (cmp(str, setup02(col, row, 0), &flag) == 0)
		display(2, col, row, &flag);
	if (cmp(str, setup03(col, row, 0), &flag) == 0)
		display(3, col, row, &flag);
	if (cmp(str, setup04(col, row, 0), &flag) == 0)
		display(4, col, row, &flag);
	if (flag == 0)
		write(1, "aucune", 6);
	ft_putchar('\n');
}

int		main(void)
{
	char	*str;
	int		col;
	int		row;

	col = 0;
	row = 0;
	str = read_output(&col, &row);
	if (str && col > 0)
		match(str, col, row);
	else
		write(1, "aucune\n", 7);
}
