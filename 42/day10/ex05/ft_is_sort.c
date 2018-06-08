/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 20:04:49 by kachen            #+#    #+#             */
/*   Updated: 2018/05/28 20:04:50 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int i;
	int temp;

	i = 0;
	if (length < 2)
		return (1);
	while (f(tab[i], tab[i + 1]) == 0)
		i++;
	temp = f(tab[i], tab[i + 1]);
	i = 0;
	while (tab[i + 1] < length)
	{
		if (f(tab[i], tab[i + 1]) == 0)
			i++;
		else if (f(tab[i], tab[i + 1]) != temp)
			return (0);
		else
			i++;
	}
	return (1);
}
