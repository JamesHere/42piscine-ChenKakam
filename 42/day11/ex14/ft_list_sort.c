/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 22:33:03 by kachen            #+#    #+#             */
/*   Updated: 2018/05/30 22:33:04 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_swap(t_list **current)
{
	t_list	*temp;

	temp = (*current)->next->next;
	(*current)->next->next = (*current);
	(*current)->next = temp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*last;

	current = *begin_list;
	if (!*begin_list)
		return ;
	while (current->next)
	{
		if ((*cmp)(current->data, current->next->data) > 0)
		{
			if (current != *begin_list)
				last->next = current->next;
			else
				*begin_list = current->next;
			ft_list_swap(&current);
			current = *begin_list;
		}
		else
		{
			last = current;
			current = current->next ? current->next : current;
		}
	}
}
