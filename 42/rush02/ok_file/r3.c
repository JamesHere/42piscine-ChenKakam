/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r3.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 18:53:50 by kachen            #+#    #+#             */
/*   Updated: 2018/06/03 18:53:52 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	rush03(int col, int row, int r, int c)
{
	row--;
	col--;
	if ((r == 0 && c == 0) || (r == row && c == 0))
		return ('A');
	else if ((r == 0 && c == col) || (r == row && c == col))
		return ('C');
	else if ((r > 0 && r < row) && (c > 0 && c < col))
		return (' ');
	else
		return ('B');
}

char	*setup03(int col, int row, int i)
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
				str[i] = rush03(col, row, r, c);
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
