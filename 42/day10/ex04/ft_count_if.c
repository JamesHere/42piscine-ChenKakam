/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 19:21:26 by kachen            #+#    #+#             */
/*   Updated: 2018/05/28 19:21:27 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f) (char*))
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (tab[i])
	{
		if (f(tab[i]))
		{
			cnt++;
		}
		i++;
	}
	return (cnt);
}
