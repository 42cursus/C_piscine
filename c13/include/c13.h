/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c13.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:53:05 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 21:53:05 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C13_H
# define C13_H
# include "ft_btree.h"

t_btree	*btree_create_node(void *item);
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void	btree_apply_infix(t_btree *root, void (*applyf)(void *));
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));
int		btree_level_count(t_btree *root);
void	btree_apply_by_level(t_btree *root,
							 void (*applyf)(void *item, int current_level,
								 			int is_first_elem));

#endif //C13_H
