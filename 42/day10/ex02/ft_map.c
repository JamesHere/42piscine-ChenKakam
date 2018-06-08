/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:31:50 by kachen            #+#    #+#             */
/*   Updated: 2018/05/28 17:31:51 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f) (int))
{
	int i;
	int *ary;

	ary = (int*)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		ary[i] = f(tab[i]);
		i++;
	}
	return (ary);
}
