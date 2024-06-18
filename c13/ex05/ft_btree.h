/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:10:12 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 22:10:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
#define FT_BTREE_H

typedef struct s_btree	t_btree;
struct s_btree
{
	t_btree	*left;
	t_btree	*right;
	void	*item;
};

#endif //FT_BTREE_H
