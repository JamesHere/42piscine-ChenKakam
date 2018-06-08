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
#include <stdlib.h>

int	depth_cnt(t_btree *node)
{
	int ldepth;
	int rdepth;

	if (node == 0)
		return (0);
	ldepth = depth_cnt(node->left);
	rdepth = depth_cnt(node->right);
	if (ldepth > rdepth)
		return (ldepth++);
	else
		return (rdepth++);
}

int	btree_level_count(t_btree *root)
{
	if (root)
		return (depth_cnt(root) + 1);
	else
		return (cnt);
}
