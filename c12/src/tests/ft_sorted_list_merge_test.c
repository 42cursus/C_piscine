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

#include "c12_tests.h"

int	ft_sorted_list_merge_test(void)
{
	char	**tab;
	int		tab_size;
	t_list	*lst;
	t_list	*list_2;
	int		check_val;
	int 	i;

	ft_print_title("ft_sorted_list_merge_test");
	printf("\n");


	tab = ft_split("Alfa Charlie Echo Golf", ' ');
	tab_size = (int)ft_get_tab_size((void **) tab);

	lst = ft_list_push_strs(tab_size, tab);
	ft_list_reverse(&lst);
	free(tab);

	tab = ft_split("Bravo Delta Foxtrot Hotel", ' ');
	tab_size = (int)ft_get_tab_size((void **) tab);
	list_2 = ft_list_push_strs(tab_size, tab);
	ft_list_reverse(&list_2);
	free(tab);

	tab = ft_split("Alfa Bravo Charlie Delta Echo Foxtrot Golf Hotel", ' ');
	tab_size = (int)ft_get_tab_size((void **) tab);

	ft_sorted_list_merge(&lst, list_2,
						 (int (*)(void *, void *)) ft_strcmp);

	list_2 = lst;

	check_val = 1;
	i = 0;
	while (check_val && list_2 && i < tab_size)
	{
		check_val = !ft_strcmp(list_2->data, tab[i++]);
		list_2 = list_2->next;
	}

	if (check_val && i < tab_size) check_val = 0;
	check(check_val);
	ft_list_clear(lst, free);
	ft_free_tab((void **) tab, tab_size);

	return (0);
}
