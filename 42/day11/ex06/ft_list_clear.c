/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 20:06:46 by kachen            #+#    #+#             */
/*   Updated: 2018/05/29 20:06:48 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;
	t_list *next_one;

	temp = *begin_list;
	while (temp)
	{
		next_one = temp->next;
		free(temp);
		temp = next_one;
	}
	*begin_list = NULL;
}
