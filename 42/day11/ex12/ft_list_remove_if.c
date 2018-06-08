/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 21:56:25 by kachen            #+#    #+#             */
/*   Updated: 2018/05/30 21:56:27 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(
		t_list **begin_list,
		void *data_ref,
		int (*cmp)())
{
	t_list	*last;
	t_list	*current;
	t_list	*temp;

	last = NULL;
	current = *begin_list;
	temp = NULL;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			if (current == *begin_list)
				*begin_list = current->next;
			else
				last->next = current->next;
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
}