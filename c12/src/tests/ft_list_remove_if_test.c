/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:14 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:14 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

static int	ft_compare(void *data, void *data_ref)
{
	if (!data && !data_ref)
		return (0);
	if (!data || !data_ref)
		return (-1);
	return (ft_strcmp(data, data_ref));
}

int	ft_list_remove_if_test(void)
{
	char	**tab;
	int		l;
	t_list	*list;
	t_uint	tab_size;
	void	(*apply_fun)(void *);

	ft_print_title("ft_list_remove_if_test");
	tab = ft_split("alpha BeTa gaMMa deLta", ' ');
	tab_size = ft_get_tab_size(tab);
	l = ft_signed_int(tab_size);
	list = ft_list_push_strs(l, tab);
	ft_list_reverse(&list);
	ft_list_remove_if(&list, "gaMMa", ft_compare, free);
	l = 0;
	tab = ft_split("alpha BeTa deLta", ' ');
	apply_fun = ({void __fun(void *data)
		{check(!ft_strcmp(tab[l++], data));} __fun;});
	ft_list_foreach(list, apply_fun);
	printf("\n");
	fflush(stdout);
	return (0);
}
