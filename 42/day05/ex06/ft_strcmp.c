/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 19:23:58 by kachen            #+#    #+#             */
/*   Updated: 2018/05/21 19:24:14 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] < s2[index])
		{
			return (-1);
		}
		if (s1[index] > s2[index])
		{
			return (1);
		}
		index++;
	}
	return (s1[index] - s2[index]);
}
