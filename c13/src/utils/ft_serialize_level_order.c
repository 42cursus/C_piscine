/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_serialize_level_order.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 22:33:46 by abelov            #+#    #+#             */
/*   Updated: 2025/03/03 22:33:47 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

int *ft_serialize_level_order(t_btree *root, int *arraySize)
{
	t_btree *node;
	t_btree *queue[MAX_STACK_SIZE];
	int		front = 0, rear = 0;
	int		*result = NULL;
	int		stack[MAX_STACK_SIZE * 2];
	int 	sp = 0;

	if (arraySize == NULL)
		return NULL;
	if (root)
		queue[rear++] = root;
	while (rear > front) // Start from the second element in the array
	{
		node = queue[front++];

		if (node)
		{
			stack[sp++] = FT_PTR_TO_INT(node->item);
			if (node->left || node->right)
			{
				queue[rear++] = node->left;
				queue[rear++] = node->right;
			}
		}
		else
			stack[sp++] = null;
	}
	*arraySize = sp;
	result = (int *) malloc(sp * sizeof(int));
	ft_memcpy(result, stack, sp * sizeof(int));
	return (result);
}
