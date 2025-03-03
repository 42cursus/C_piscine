/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:04:42 by abelov            #+#    #+#             */
/*   Updated: 2025/03/03 21:11:10 by abelov           ###   ########.fr       */
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
	size_t		tab_size;
	t_btree		*root;
	char 		str1[1024];
	char 		str2[1024];
	void		(*apply_fun)(void *);
	const char 	*tab[] = {"9", "1", "3", "5", "2", "0", "8", "6", "4", "7", NULL};

	ft_print_title("btree_insert_data_test");
	tab_size = ft_get_tab_size((void **) tab);
	ft_tab_foreach((void **) tab, tab_size, btree_insert_data_fun, &root);
	apply_fun = ({void __fun(void *data)
		{ft_strlcat(str1, data, tab_size + 1);} __fun;});
	btree_apply_infix(root, apply_fun);
	ft_sort_string_tab((char **) tab);
	ft_tab_foreach((void **) tab, tab_size, btree_insert_strlcat,
				   &(t_cont){.data = str2, .size = (int)tab_size + 1});
	check(!ft_strcmp(str1, str2));
	btree_destroy(root, NULL);
	return (0);
}
