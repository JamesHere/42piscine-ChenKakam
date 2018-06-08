/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 20:08:21 by kachen            #+#    #+#             */
/*   Updated: 2018/05/21 20:08:23 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned index;

	index = 0;
	while ((s1[index] != '\0' && s2[index] != '\0') && index < n)
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
	if (index == n)
		return (0);
	else
		return (s1[index] - s2[index]);
}
