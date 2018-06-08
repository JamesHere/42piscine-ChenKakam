/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:57:57 by kachen            #+#    #+#             */
/*   Updated: 2018/05/18 22:55:54 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		max;
	int		index;
	char	temp;

	max = 0;
	while (str[max] != '\0')
	{
		max++;
	}
	max--;
	index = 0;
	while (index < max)
	{
		temp = str[max];
		str[max] = str[index];
		str[index] = temp;
		index++;
		max--;
	}
	return (str);
}
