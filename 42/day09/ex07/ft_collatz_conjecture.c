/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:35:12 by kachen            #+#    #+#             */
/*   Updated: 2018/05/25 12:35:13 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2 == 0)
	{
		return (ft_collatz_conjecture(base / 2) + 1);
	}
	else if (base % 2 == 1)
	{
		return (ft_collatz_conjecture(3 * base + 1) + 1);
	}
	return (0);
}
