/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:16:09 by abelov            #+#    #+#             */
/*   Updated: 2025/03/03 20:16:09 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

void	btree_destroy(t_btree *root, void (*f)(void *))
{
	if (root == NULL) return;

	t_btree	*node;
	t_btree	*stack[STACK_SIZE];
	int		stackSize = 0;

	stack[stackSize++] = root;
	while (stackSize != 0)
	{
		node = stack[--stackSize];
		if (node->right != NULL)
			stack[stackSize++] = node->right;
		if (node->left != NULL)
			stack[stackSize++] = node->left;
		if (f)
			f(node->item);
		free(node);
	}
}
