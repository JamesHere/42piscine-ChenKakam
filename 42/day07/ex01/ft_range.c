/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:27:10 by kachen            #+#    #+#             */
/*   Updated: 2018/05/24 13:27:11 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ary;
	int index;

	if (min >= max)
		return (NULL);
	index = 0;
	ary = (int*)malloc(sizeof(*ary) * (max - min));
	while (min < max)
	{
		ary[index] = min;
		index++;
		min++;
	}
	return (ary);
}
