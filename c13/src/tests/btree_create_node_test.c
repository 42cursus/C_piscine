/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:09:26 by abelov            #+#    #+#             */
/*   Updated: 2025/03/03 21:11:06 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

int btree_create_node_test(void)
{
	const char	*str;
	t_btree		*node;
	int 		check_val;

	ft_print_title("btree_create_node_test");
	str = "Wello Horld! I'm a unicron!";
	node = btree_create_node((void  *)str);

	check_val = !ft_strcmp(node->item, str) && (node->item == str);
	check(check_val);
	btree_destroy(node, NULL);
	return (0);
}
