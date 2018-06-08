/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 18:16:11 by kachen            #+#    #+#             */
/*   Updated: 2018/05/22 18:16:14 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int len;
	int index;

	len = 0;
	index = 0;
	while (dest[len])
		len++;
	while (src[index] && index <= nb)
	{
		dest[len] = src[index];
		len++;
		index++;
	}
	dest[len] = '\0';
	return (dest);
}
