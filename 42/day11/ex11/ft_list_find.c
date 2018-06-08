/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 20:39:15 by kachen            #+#    #+#             */
/*   Updated: 2018/05/30 20:39:17 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_find"

t_list *ft_list_find(t_list *begin_list,
					void *data_ref, int (*cmp) ())
{
	t_list	*node;

	node = begin_list;
	while (node)
	{
		if ((*cmp)(node->data, data_ref) == 0)
			return (node);
		node = node->next;
	}
	return (node);
}
