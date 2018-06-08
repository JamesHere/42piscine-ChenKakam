/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:55:12 by kachen            #+#    #+#             */
/*   Updated: 2018/05/25 12:55:12 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *str, char *key)
{
	int i;

	i = 0;
	while (str[i] || key[i])
	{
		if (str[i] != key[i])
			return (0);
		i++;
	}
	return (1);
}

void	alert(void)
{
	write(1, "ALERT!!!", 8);
}

int		ft_spy(int argc, char **argv)
{
	int		i;
	char	*a;
	char	*p;
	char	*b;

	a = "attack";
	p = "president";
	b = "Bauer";
	i = 1;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], a) ||
			ft_strcmp(argv[i], p) || ft_strcmp(argv[i], b))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int flag;

	if (argc > 1)
	{
		flag = ft_spy(argc, argv);
	}
	if (flag)
		alert();
	return (0);
}
