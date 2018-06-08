/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:15:32 by kachen            #+#    #+#             */
/*   Updated: 2018/05/22 13:15:34 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		uppercheck(char c)
{
	if (c >= 'A' && c <= 'Z')
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
			if (!(uppercheck(str[index])))
				return (0);
			index++;
		}
	}
	return (1);
}
