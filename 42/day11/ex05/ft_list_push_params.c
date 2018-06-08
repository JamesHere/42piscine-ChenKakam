/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:12:45 by kachen            #+#    #+#             */
/*   Updated: 2018/05/29 15:12:47 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*node;
	t_list	*temp;

	temp = 0;
	node = 0;
	i = 0;
	while (i < ac)
	{
		node = ft_create_elem(av[i]);
		node->next = temp;
		temp = node;
		i++;
	}
	return (node);
}
