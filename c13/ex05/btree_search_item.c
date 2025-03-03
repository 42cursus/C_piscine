/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:39:58 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 22:39:58 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/**
 * returns the first element related to the reference data given as argument.
 */
void	*btree_search_item(t_btree *ptr, void *data_ref,
						   int (*cmpf)(void *, void *))
{
	int	diff;

	while (ptr)
	{
		diff = (*cmpf)(ptr->item, data_ref);
		if (diff == 0) break;
		if (diff > 0) ptr = ptr->left;
		else ptr = ptr->right;
	}
	return (ptr);
}
