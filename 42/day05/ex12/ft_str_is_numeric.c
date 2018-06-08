/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:45:58 by kachen            #+#    #+#             */
/*   Updated: 2018/05/22 12:45:59 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		numcheck(char c)
{
	if (c >= '0' && c <= '9')
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
			if (!(numcheck(str[index])))
				return (0);
			index++;
		}
	}
	return (1);
}
