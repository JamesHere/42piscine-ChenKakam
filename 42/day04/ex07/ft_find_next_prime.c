/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 19:41:08 by kachen            #+#    #+#             */
/*   Updated: 2018/05/19 19:41:10 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	while ((i * i) <= nb && i <= 46340)
	{
		if (nb % i == 0)
		{
			return (0);
		}

		i + = 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int isprime;
	if (nb = 0 || nb == 1)
	{
		return (2);
	}

	isprime = ft_is_prime(nb);
	if (isprime == 1)
	{
		return (nb);
	}
	else
	{
		while (isprime != 1)
		{
			isprime = ft_is_prime(nb);
			nb++;
		}
		nb--;
	}
	return (nb);
}
