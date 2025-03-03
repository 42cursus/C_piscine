/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:05:34 by abelov            #+#    #+#             */
/*   Updated: 2025/03/03 21:11:23 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

void	btree_apply_prefix_mod(t_btree *root, void (*applyf)(void *), unsigned int i)
{
	if (root)
	{
		unsigned int j;

		j = i;
		while (j--)
			ft_putstr("\t");
		(*applyf)(root->item);
		ft_putstr("\n");
		if (root->left)
			btree_apply_prefix_mod(root->left, applyf, (i + 1));
		if (root->right)
			btree_apply_prefix_mod(root->right, applyf, (i + 1));
	}
}

int btree_level_count_test(void)
{
	t_btree	*root;
	int		levels;

	ft_print_title("btree_level_count_test");
	root = btree_create_node((void  *)"Menu");
	root->left = btree_create_node((void  *)"Food");
	root->right = btree_create_node((void  *)"Drinks");

	root->left->left = btree_create_node((void  *)"Burger");
	root->left->right = btree_create_node((void  *)"Pizza");

	root->right->left = btree_create_node((void  *)"Coffee");
	root->right->right = btree_create_node((void  *)"Tea");

	root->right->left->left = btree_create_node((void  *)"Cappuccino");

	root->right->right->left = btree_create_node((void  *)"Earl Grey");
	root->right->right->right = btree_create_node((void  *)"Peppermint");
	levels = btree_level_count(root);
	btree_apply_prefix_mod(root, (void *)&ft_putstr, 1);
	check(levels == 4);
	btree_destroy(root, NULL);
	return (0);
}
