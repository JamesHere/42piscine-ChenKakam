/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:07:49 by kachen            #+#    #+#             */
/*   Updated: 2018/05/18 11:07:52 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putchar((nb / 10) + 48);
		ft_putchar((nb % 10) + 48);
	}
	else
	{
		ft_putchar((nb % 10) + 48);
	}
}
//=====================================
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int a;
	a=66;
	ft_putnbr(a);
	ft_ft(&a);
	ft_putchar('\n');
	ft_putnbr(a);

	return (0);
}