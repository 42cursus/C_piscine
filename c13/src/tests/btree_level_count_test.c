/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:05:34 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 23:05:34 by abelov           ###   ########.fr       */
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
	t_btree		*tree_temp;
	int 		levels;

	ft_print_title("btree_level_count_test");
	tree_temp = btree_create_node("Menu");
	tree_temp->left = btree_create_node("Food");
	tree_temp->right = btree_create_node("Drinks");

	tree_temp->left->left = btree_create_node("Burger");
	tree_temp->left->right = btree_create_node("Pizza");

	tree_temp->right->left = btree_create_node("Coffee");
	tree_temp->right->right = btree_create_node("Tea");

	tree_temp->right->left->left = btree_create_node("Cappuccino");

	tree_temp->right->right->left = btree_create_node("Earl Grey");
	tree_temp->right->right->right = btree_create_node("Peppermint");
	btree_apply_prefix_mod(tree_temp, (void *)&ft_putstr, 1);
	return (0);
}
