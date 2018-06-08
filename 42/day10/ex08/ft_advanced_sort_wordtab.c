/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 23:24:02 by kachen            #+#    #+#             */
/*   Updated: 2018/05/29 23:24:04 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	q_sort(char **array, int start, int end, int (*cmp)(char *, char *))
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
			if (cmp(array[left], pivot) <= 0)
				left++;
			else if (cmp(array[right], pivot) >= 0)
				right--;
			else
				ft_swap(&array[left], &array[right]);
		}
		if (cmp(array[left], pivot) < 0)
			ft_swap(&array[left--], &array[start]);
		else
			ft_swap(&array[--left], &array[start]);
		q_sort(array, start, left);
		q_sort(array, right, end);
	}
}

void	ft_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;

	i = 0;
	while (tab[i] != 0)
		i++;
	q_sort(tab, 0, i - 1, cmp);
}
