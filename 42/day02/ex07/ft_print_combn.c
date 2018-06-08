/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c7.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 21:17:14 by kachen            #+#    #+#             */
/*   Updated: 2018/05/17 22:11:09 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_combn(int n)
{
	int max;

	max = 1;
	while (n)
	{
		max *= 10;
		n--;
	}
	max -= 1;
	int i;

	i = 1;
	while (i <= max)
	{
		if (ft_is_valid(i) == 1)
		{
			if (i < 0)
			{
				ft_putchar('-');
				i = -i;
			}
			if (i > 10)
			{
				ft_putchar((i / 10) + 48);
				ft_putchar((i % 10) + 48);
			}
			else
			{
				ft_putchar((i % 10) + 48);
			}
				ft_putchar(' ');
		}
		i++;
	}

}

int main (){

	ft_print_combn(2);
	return (0);
}