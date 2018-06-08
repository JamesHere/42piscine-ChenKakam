/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:01:42 by kachen            #+#    #+#             */
/*   Updated: 2018/06/01 13:01:43 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include "stdlib.h"

void	*btree_search_item(t_btree *root,
		void *data_ref, int (*cmpf)(void *, void *))
{
	t_btree	*cursor;
	int		res;

	cursor = root;
	while (cursor)
	{
		res = (*cmpf)(data_ref, cursor->item);
		if (res < 0)
			cursor = cursor->left;
		else if (res > 0)
			cursor = cursor->right;
		else
			return (cursor);
	}
	return (cursor);
}
