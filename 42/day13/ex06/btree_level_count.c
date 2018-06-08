/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:34:17 by kachen            #+#    #+#             */
/*   Updated: 2018/06/01 13:34:18 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#define CMP(a,b) ((a > b) ? a : b)

int	btree_level_count(t_btree *root)
{
	if (root)
		return (CMP(btree_level_count(root->left),
			btree_level_count(root->right)) + 1);
	else
		return (0);
}
