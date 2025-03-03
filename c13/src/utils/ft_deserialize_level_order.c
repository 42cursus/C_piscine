/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deserialize_level_order.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:11:47 by abelov            #+#    #+#             */
/*   Updated: 2025/03/03 21:11:48 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

t_btree *ft_deserialize_level_order(int *arr, int size)
{
	t_btree	*root = NULL;
	t_btree	*current;
	t_btree	*queue[STACK_SIZE];
	int		front = 0, rear = 0;
	int 	i = 0;

	if (size == 0 || arr[0] == null)
		return NULL;

	root = btree_create_node(FT_INT_TO_PTR(arr[0]));
	queue[rear++] = root;
	while (i < size) // Start from the second element in the array
	{
		current = queue[front++]; // Dequeue the front node
		front %= STACK_SIZE;

		if (++i < size && arr[i] != null)
		{
			current->left = btree_create_node(FT_INT_TO_PTR(arr[i]));
			queue[rear++] = current->left; // Enqueue the left child
			rear %= STACK_SIZE;
		}
		if (++i < size && arr[i] != null)
		{
			current->right = btree_create_node(FT_INT_TO_PTR(arr[i]));
			queue[rear++] = current->right; // Enqueue the right child
			rear %= STACK_SIZE;
		}
	}
	return (root);
}
