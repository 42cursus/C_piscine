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
	size_t	tab_size;

	ft_print_title("ft_list_push_strs_test");
	list = NULL;
	tab = ft_split("hey ho !", ' ');
	tab_size = ft_get_tab_size((void **) tab);
	length = ft_signed_int(tab_size);
	list = ft_list_push_strs(length, tab);
	check(tab[--length] == (char *)list->data);
	check(tab[--length] == (char *)ft_list_get_next(list)->data);
	while (length--)
		check(tab[length] == ft_list_get_next(NULL)->data);
	printf("\n");
	ft_list_clear(list, NULL);
	ft_free_tab((void **) tab, tab_size);
	return (0);
}
