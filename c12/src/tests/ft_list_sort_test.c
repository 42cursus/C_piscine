/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:14 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:14 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

void	lambda_fun(void *data)
{
	ft_putstr_eol(data, ", ");
}

int	ft_list_sort_test(void)
{
	char	**tab;
	int		tab_size;
	t_list	*list;
	int		(*f)(void *, void *);

	ft_print_title("ft_list_sort_test");
	tab = ft_split("alpha beta gamma delta zeta iota lambda theta", ' ');
	tab_size = (int)ft_get_tab_size((void **) tab);
	ft_putstr("the original array is: \n\t");
	ft_print_str_tab(tab, NULL);

	list = ft_list_push_strs(tab_size, tab);
	ft_list_reverse(&list);
	ft_putstr("the original list is: \n\t");
	ft_list_foreach(list, lambda_fun);
	ft_putstr("\n");
	f = (int (*)(void *, void *)) ft_strcmp;
	ft_list_sort(&list, f);

	ft_putstr("the result list is: \n\t");
	ft_list_foreach(list, lambda_fun);
	ft_putstr("\n");

	ft_sort_string_tab_fun(tab, (int (*)(char *, char *)) ft_strcmp);
	ft_putstr("the sorted array is: \n\t");
	ft_print_str_tab(tab, NULL);
	ft_putstr("\n");

	ft_list_clear(list, NULL);
	ft_free_tab((void **) tab, tab_size);
	return (0);
}
