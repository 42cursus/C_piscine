/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:04:42 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 23:04:43 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

static void btree_insert_strlcat(void *data, void *ref)
{
	t_cont	*cont;

	cont = ref;
	ft_strlcat(cont->data, data, cont->size);
}

static void btree_insert_data_fun(void *data, void *ref)
{
	btree_insert_data(ref, data, (void *)&ft_strcmp);
}

int btree_insert_data_test(void)
{
	size_t	tab_size;
	t_btree	*tmp;
	char 	*str1;
	char 	*str2;
	void	(*apply_fun)(void *);
	char 	*tab[] = {"9", "1", "3", "5", "2", "0", "8", "6", "4", "7", NULL};

	tab_size = ft_get_tab_size(tab);
	ft_print_title("btree_insert_data_test");
	str1 = ft_empty_string(tab_size);
	str2 = ft_empty_string(tab_size);
	ft_tab_foreach(tab, tab_size, btree_insert_data_fun, &tmp);
	apply_fun = ({void __fun(void *data)
		{ft_strlcat(str1, data, tab_size + 1);} __fun;});
	btree_apply_infix(tmp, apply_fun);
	ft_sort_string_tab(tab);
	ft_tab_foreach(tab, tab_size, btree_insert_strlcat,
				   &(t_cont){.data = str2, .size = (int)tab_size + 1});
	check(!ft_strcmp(str1, str2));

	return (0);
}
