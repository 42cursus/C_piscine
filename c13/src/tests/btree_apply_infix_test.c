/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:56:40 by abelov            #+#    #+#             */
/*   Updated: 2025/03/03 21:10:45 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

int btree_apply_infix_test(void)
{
	t_btree 	*root;

	ft_print_title("btree_apply_infix_test");
	root = btree_create_node((void  *)"root \n");
	root->left = btree_create_node((void  *)"\t left  \n");
	root->right = btree_create_node((void  *)"\t right \n");

	root->left->left = btree_create_node((void  *)"\t\t\t left children of left \n");
	root->left->right = btree_create_node((void  *)"\t\t\t right children of left \n");

	root->right->left = btree_create_node((void  *)"\t\t\t left children of right \n");
	root->right->right = btree_create_node((void  *)"\t\t\t right children of right \n");
	btree_apply_infix(root, (void *)&ft_putstr);

	btree_destroy(root, NULL);

	return (0);
}
