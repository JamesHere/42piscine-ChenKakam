/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:47:53 by kachen            #+#    #+#             */
/*   Updated: 2018/05/22 16:47:54 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int len;
	int index;

	len = 0;
	index = 0;
	while (dest[len])
		len++;
	while (src[index])
	{
		dest[len] = src[index];
		len++;
		index++;
	}
	dest[len] = '\0';
	return (dest);
}
