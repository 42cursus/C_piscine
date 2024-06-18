/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:04:19 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 23:04:20 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

int btree_apply_suffix_test(void)
{
	t_btree 	*tmp;

	ft_print_title("btree_apply_suffix_test");
	tmp = btree_create_node("root \n");
	tmp->left = btree_create_node("\t left  \n");
	tmp->right = btree_create_node("\t right \n");

	tmp->left->left = btree_create_node("\t\t\t left children of left \n");
	tmp->left->right = btree_create_node("\t\t\t right children of left \n");

	tmp->right->left = btree_create_node("\t\t\t left children of right \n");
	tmp->right->right = btree_create_node("\t\t\t right children of right \n");
	btree_apply_suffix(tmp, (void *)&ft_putstr);
	return (0);
}
