/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:53:34 by kachen            #+#    #+#             */
/*   Updated: 2018/05/25 14:53:35 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int i;
	int j;

	i = 0;
	while (i < length)
	{
		while (tab[i])
		{
			i++;
		}
		j = i;
		length--;
		while (j < length)
		{
			tab[j] = tab[j + 1];
			j++;
		}
	}
	return (length);
}
