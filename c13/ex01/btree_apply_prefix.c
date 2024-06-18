/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:25:32 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 22:25:32 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/**
 * applies the function given as argument to the item of each node,
 * using prefix traversal to search the tree.
 */
void btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	if (root->item)
		applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
}
