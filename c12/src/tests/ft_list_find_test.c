/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:14 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:14 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

static int	ft_compare(char *data, char *data_ref)
{
	if (!data && !data_ref)
		return (0);
	if (!data || !data_ref)
		return (-1);
	return (ft_strcmp(data, data_ref));
}

int	ft_list_find_test(void)
{
	char	**tab;
	int		length;
	t_list	*list;
	t_uint	tab_size;
	int		(*cmp)(void *, void *);

	ft_print_title("ft_list_find_test");
	tab = ft_split("alpha BeTa gaMMa deLta", ' ');
	tab_size = ft_get_tab_size(tab);
	length = ft_signed_int(tab_size);
	list = ft_list_push_strs(length, tab);
	ft_list_reverse(&list);
	cmp = (t_cmp_fun) ft_compare;
	check(NULL == ft_list_find(list, NULL, cmp));
	while (length--)
		check(tab[length] == ft_list_find(list, tab[length], cmp)->data);
	printf("\n");
	fflush(stdout);
	return (0);
}
