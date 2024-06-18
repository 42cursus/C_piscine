/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:44:27 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 22:44:28 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_by_level(t_btree *root,
							 void (*applyf)(void *item, int current_level,
												int is_first_elem))
{
	(void)root;
	(void)applyf;
}