/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 19:14:37 by kachen            #+#    #+#             */
/*   Updated: 2018/05/24 19:14:41 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		sizecheck(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 1;
	size = 0;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			size++;
			j++;
		}
		j = 0;
		i++;
	}
	if (argc > 2)
		return (size + argc - 2);
	return (size);
}

char	*assignvalue(int argc, char **argv, char *str)
{
	int i;
	int j;
	int size;

	i = 1;
	j = 0;
	size = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			str[size] = argv[i][j];
			size++;
			j++;
		}
		j = 0;
		if (i < argc - 1)
			str[size++] = '\n';
		i++;
	}
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	char *str;
	int size;

	size = sizecheck(argc, argv);
	str = (char*)malloc(sizeof(*str) * size + 1);
	str = assignvalue(argc, argv, str);
	return (str);

}

int main(int argc, char **argv)
{
	int i = 0;
	char *str;
	str = ft_concat_params(argc, argv);
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
