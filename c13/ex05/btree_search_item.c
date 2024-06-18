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
void	*btree_search_item(t_btree *root, void *data_ref,
						   int (*cmpf)(void *, void *))
{
	(void)data_ref;
	(void)cmpf;
	return (root);
}