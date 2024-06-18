/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:09:26 by abelov            #+#    #+#             */
/*   Updated: 2024/06/18 20:09:26 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"


int btree_create_node_test(void)
{
	char	*str;
	t_btree	*node;

	ft_print_title("btree_create_node_test");
	str = "Wello Horld! I'm a unicron!";
	node = btree_create_node(str);
	check(!ft_strcmp(node->item, str));
	check(node->item == str);
	return (0);
}