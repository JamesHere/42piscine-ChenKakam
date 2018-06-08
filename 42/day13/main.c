


#include "ft_btree.h"

int	g_level = 0;

int		level_cnt(t_btree *root)
{
	int	lsize;
	int	rsize;

	if (!root)
		return (0);
	lsize = level_cnt(root->left);
	rsize = level_cnt(root->right);
	if (lsize > rsiez)
		return (lsize + 1);
	else
		return (rsize + 1);
}

void	btree_apply_to_level(
		t_btree *root,
		int level,
		int is_first_elem,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (level == g_level)
	{
		(*applyf)(root->item, level, is_first_elem);
		return ;
	}
	if (root->left)
		btree_apply_to_level(root->left, level + 1, is_first_elem, applyf);
	if (root->right)
		btree_apply_to_level(root->right, level + 1, 0, applyf);
}

void	btree_apply_by_level(
		t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int		height;

	height = level_cnt(root);
	while (g_level < height)
	{
		btree_apply_to_level(root, 0, 1, applyf);
		g_level++;
	}
}