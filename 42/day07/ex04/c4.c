/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 20:29:40 by kachen            #+#    #+#             */
/*   Updated: 2018/05/24 20:29:42 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		cnt_word(char *str)
{
	int i;
	int flag;
	int cnt;

	i = 0;
	flag = 0;
	cnt = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
			i++;
			flag = 1;
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
			if (flag)
				cnt += 1;
			flag = 0;
			i++;
	}
	return (cnt);
}

int		cnt_space(char *str, int i)
{
	int cnt;

	cnt = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		cnt++;
		i++;
	}
	return (cnt);
}

char	**assignvalue(char *str, char **ary, int i)
{
	int j;
	int k;

	j = 0;
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((ary[j] = malloc(sizeof(char) * cnt_space(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				ary[j][k++] = str[i++];
			ary[j++][k] = '\0';
		}
	}
	ary[j] = NULL;
	return (ary);
}


char	**ft_split_whitespaces(char *str)
{
	char **ary;
	int i;

	i = 0;
	ary = malloc(sizeof(char*) * cnt_word(str) + 1);
	if (ary == NULL)
		return (NULL);
	ary = assignvalue(str, ary, i);
	return (ary);
}
