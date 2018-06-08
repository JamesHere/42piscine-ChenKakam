/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:25:00 by kachen            #+#    #+#             */
/*   Updated: 2018/05/24 12:25:03 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		i;

	i = 0;
	temp = (char*)malloc(sizeof(*temp) * (ft_strlen(src) + 1));
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = src[i];
	return (temp);
}
