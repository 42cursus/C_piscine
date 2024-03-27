/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_list_push_strs_test(void)
{
	char	**tab;
	int		length;
	t_list	*list;
	t_uint	tab_size;

	ft_print_title("ft_list_push_strs_test");
	list = NULL;
	tab = ft_split("hey ho !", ' ');
	tab_size = ft_get_tab_size(tab);
	length = FT_SIGNED(tab_size);
	list = ft_list_push_strs(length, tab);
	check(tab[--length] == (char *)list->data);
	check(tab[--length] == (char *)ft_list_get_next(list)->data);
	while (length--)
		check(tab[length] == ft_list_get_next(NULL)->data);
	printf("\n");
	fflush(stdout);
	return (0);
}
