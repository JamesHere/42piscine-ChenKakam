/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 15:23:19 by kachen            #+#    #+#             */
/*   Updated: 2018/05/25 15:23:19 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned cnt;

	cnt = 0;
	while (value)
	{
		cnt += (value % 2);
		n >>= 1;
	}
	return (cnt);
}