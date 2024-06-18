/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:41:33 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 22:41:33 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

static inline int	ft_max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int btree_level_count(t_btree *root)
{
	int left;
	int right;

	if (!root)
		return (0);
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	return (1 + ft_max(left, right));
}
