/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:20:23 by kachen            #+#    #+#             */
/*   Updated: 2018/05/29 14:20:24 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		cnt;
	t_list	*temp;

	cnt = 0;
	temp = begin_list;
	while (temp)
	{
		temp = temp->next;
		cnt++;
	}
	return (cnt);
}
