/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:09:44 by kachen            #+#    #+#             */
/*   Updated: 2018/05/22 13:09:46 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lowecheck(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	if (str[0] != '\0')
	{
		while (str[index])
		{
			if (!(lowecheck(str[index])))
				return (0);
			index++;
		}
	}
	return (1);
}
