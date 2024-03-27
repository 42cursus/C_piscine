/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "c12_tests.h"

int	ft_list_reverse_test(void)
{
	char	**tab;
	int		length;
	t_list	*list;
	int		i;
	t_uint	tab_size;

	ft_print_title("ft_list_reverse_test");
	tab = ft_split("alpha beta gamma", ' ');
	tab_size = ft_get_tab_size(tab);
	length = FT_SIGNED(tab_size);
	list = ft_list_push_strs(length, tab);
	i = 0;
	ft_list_reverse(&list);
	check(tab[i++] == (char *)list->data);
	check(tab[i++] == (char *)ft_list_get_next(list)->data);
	while (i < length)
		check(tab[i++] == ft_list_get_next(NULL)->data);
	fflush(stdout);
	printf("\n");
	fflush(stdout);
	return (0);
}
