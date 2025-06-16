/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:14 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:14 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/types/struct_iovec.h>
#include "c12_tests.h"

int	ft_sorted_list_merge_test(void)
{
	struct iovec	tab;
	t_list			*lst;
	t_list			*list_2;
	int				check_val;
	int				i;

	ft_print_title("ft_sorted_list_merge_test");
	printf("\n");
	tab.iov_base = ft_split("Alfa Charlie Echo Golf", ' ');
	tab.iov_len = (int)ft_get_tab_size((void **) tab.iov_base);
	lst = ft_list_push_strs(tab.iov_len, tab.iov_base);
	ft_list_reverse(&lst);
	free(tab.iov_base);
	tab.iov_base = ft_split("Bravo Delta Foxtrot Hotel", ' ');
	tab.iov_len = (int)ft_get_tab_size((void **) tab.iov_base);
	list_2 = ft_list_push_strs(tab.iov_len, tab.iov_base);
	ft_list_reverse(&list_2);
	free(tab.iov_base);
	tab.iov_base = ft_split("Alfa Bravo Charlie Delta Echo"
			" Foxtrot Golf Hotel", ' ');
	tab.iov_len = (int)ft_get_tab_size((void **) tab.iov_base);
	ft_sorted_list_merge(&lst, list_2, (void *)ft_strcmp);
	list_2 = lst;
	check_val = 1;
	i = 0;
	while (check_val && list_2 && i < (int)tab.iov_len)
	{
		check_val = !ft_strcmp(list_2->data, ((char **)tab.iov_base)[i++]);
		list_2 = list_2->next;
	}
	if (check_val && i < (int)tab.iov_len)
		check_val = 0;
	check(check_val);
	ft_list_clear(lst, free);
	ft_free_tab((void **) tab.iov_base, tab.iov_len);
	return (0);
}
