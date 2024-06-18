/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:36:58 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 22:36:59 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "ft_btree.h"

static t_btree	*btree_create_node(void *item)
{
	t_btree	*new;

	new = (t_btree *)malloc(sizeof(t_btree));
	if (new)
	{
		new->item = item;
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}

/**
 * inserts the element item into a tree.
 * The tree passed as argument will be sorted:
 * for each node all lower elements are located on the left side and
 * all higher or equal elements on the right.
 */
void	btree_insert_data(t_btree **root, void *item,
						  int (*cmpf)(void *, void *))
{
	t_btree	*new;
	t_btree	*node;

	new = btree_create_node(item);
	if (!new)
		return ;
	if (!*root)
		*root = new;
	else
	{
		node = *root;
		if ((*cmpf)(item, node->item) < 0)
		{
			if (node->left)
				btree_insert_data(&node->left, item, cmpf);
			else
				node->left = btree_create_node(item);
		}
		else
		{
			if (node->right)
				btree_insert_data(&node->right, item, cmpf);
			else
				node->right = btree_create_node(item);
		}
	}
}
