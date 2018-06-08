/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:47:59 by kachen            #+#    #+#             */
/*   Updated: 2018/06/03 15:48:00 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	rush02(int col, int row, int r, int c)
{
	col -= 1;
	row -= 1;
	if ((r == 0 && c == 0) || (r == 0 && c == col
		&& col != 0))
		return ('A');
	else if ((r == row && c == 0) ||
		(r == col && c == col && row != 0))
		return ('C');
	else if ((r > 0 && r < row) && (c > 0 && c < col))
		return (' ');
	else
		return ('B');
}

char	*setup02(int col, int row, int i)
{
	int		r;
	int		c;
	char	*str;

	r = 0;
	str = malloc((row * col) + 1);
	if (col > 0 && row > 0)
	{
		while (r < row)
		{
			c = 0;
			while (c < col)
			{
				str[i] = rush02(col, row, r, c);
				c++;
				i++;
			}
			str[i] = '\n';
			i++;
			r++;
		}
	}
	str[i] = '\0';
	return (str);
}
