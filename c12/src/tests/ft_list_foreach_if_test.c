/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

static int	ft_compare(void *data, void *data_ref)
{
	if (!data && !data_ref)
		return (0);
	if (!data || !data_ref)
		return (-1);
	return (ft_strcmp((char *)data, (char *)data_ref));
}

int	ft_list_foreach_if_test(void)
{
	char	**tab;
	int		l;
	t_list	*list;
	size_t	tab_size;
	void	(*apply_fun)(void *);

	ft_print_title("ft_list_foreach_if_test");
	tab = ft_split("alpha BeTa gaMMa deLta", ' ');
	tab_size = ft_get_tab_size((void **) tab);
	l = ft_signed_int(tab_size);
	list = ft_list_push_strs(l, tab);
	ft_list_reverse(&list);
	l = 0;
	apply_fun = ({void __fun(void *data){check(tab[l++] == data);} __fun;});
	ft_list_foreach_if(list, apply_fun,
		(void *)"alpha", ft_compare);
	printf("\n");
	ft_list_clear(list, NULL);
	ft_free_tab((void **) tab, tab_size);
	return (0);
}
