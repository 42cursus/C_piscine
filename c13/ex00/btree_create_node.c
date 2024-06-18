/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:07:10 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 22:07:10 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
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
