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

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] && s2[index] && s1[index] == s2[index])
	{
		index = index + 1;
	}
	return (s1[index] - s2[index]);
}

int main()
{
	char *s1;
	char *s2;
	s1 = "ABCDE";
	s2 = "ABCD";
	printf("%d\n", ft_strcmp(s1, s2));
}