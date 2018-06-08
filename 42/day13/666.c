/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   666.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:14:32 by kachen            #+#    #+#             */
/*   Updated: 2018/06/01 13:14:34 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
		void *data_ref, int (*cmpf)(void *, void *))
{
	void *temp;

	temp = NULL;
	if (root)
	{
		temp = btree_search_item(root->left, data_ref, cmpf);
		if (!temp && ((*cmpf)(root->item, data_ref) == 0))
			temp = root->item;
		if (!temp)
			temp = btree_search_item(root->right, data_ref, cmpf);
	}
	return (temp);
}


