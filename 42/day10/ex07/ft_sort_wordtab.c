/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:19:10 by kachen            #+#    #+#             */
/*   Updated: 2018/05/28 23:19:11 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	*is1;
	unsigned char	*is2;

	is1 = (unsigned char*)s1;
	is2 = (unsigned char*)s2;
	i = 0;
	while (is1[i] != 0 && is2[i] != 0)
	{
		if (is1[i] != is2[i])
			return (is1[i] - is2[i]);
		i++;
	}
	return (is1[i] - is2[i]);
}

void	q_sort(char **array, int start, int end)
{
	int		left;
	int		right;
	char	*pivot;

	if (start < end)
	{
		left = start + 1;
		right = end;
		pivot = array[start];
		while (left < right)
		{
			if (ft_strcmp(array[left], pivot) <= 0)
				left++;
			else if (ft_strcmp(array[right], pivot) >= 0)
				right--;
			else
				ft_swap(&array[left], &array[right]);
		}
		if (ft_strcmp(array[left], pivot) < 0)
			ft_swap(&array[left--], &array[start]);
		else
			ft_swap(&array[--left], &array[start]);
		q_sort(array, start, left);
		q_sort(array, right, end);
	}
}

void	ft_sort_wordtab(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != 0)
		i++;
	q_sort(tab, 0, i - 1);
}
