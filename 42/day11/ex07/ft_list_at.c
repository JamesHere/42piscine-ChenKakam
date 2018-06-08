/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 20:25:40 by kachen            #+#    #+#             */
/*   Updated: 2018/05/29 20:25:41 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list		*node;
	unsigned	i;

	node = begin_list;
	i = 0;
	while (node)
	{
		if (i == nbr)
			return (node);
		node = node->next;
		i++;
	}
	return (0);
}
