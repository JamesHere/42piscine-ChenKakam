/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <kachen@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:41:44 by kachen            #+#    #+#             */
/*   Updated: 2018/05/17 22:36:55 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	int d1;
	int d2;

	d1 = 0;
	while (d1 <= 98)
	{
		d2 = d1 + 1;
		while (d2 <= 99)
		{
			ft_putchar((d1 / 10) + 48);
			ft_putchar((d1 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((d2 / 10) + 48);
			ft_putchar((d2 % 10) + 48);
			if (d1 != 98 || d2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d2 = d2 + 1;
		}
		d1 = d1 + 1;
	}
}
