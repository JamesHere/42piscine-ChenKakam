/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <kachen@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 12:41:44 by kachen            #+#    #+#             */
/*   Updated: 2018/05/17 22:32:27 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_combo(void)
{
	int combo[3];

	combo[0] = '0';
	while (combo[0] <= '9')
	{
		combo[1] = combo[0] + 1;
		while (combo[1] <= '9')
		{
			combo[2] = combo[1] + 1;
			while (combo[2] <= '9')
			{
				ft_putchar(combo[0]);
				ft_putchar(combo[1]);
				ft_putchar(combo[2]);
				if (!(combo[0] == '7' && combo[1] == '8' && combo[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				combo[2] = combo[2] + 1;
			}
			combo[1] = combo[1] + 1;
		}
		combo[0] = combo[0] + 1;
	}
}
