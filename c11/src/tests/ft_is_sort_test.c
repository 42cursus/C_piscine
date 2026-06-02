/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 04:19:03 by abelov            #+#    #+#             */
/*   Updated: 2024/05/22 04:19:03 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11_tests.h"

int ft_int_cmp(int x, int y)
{
	return ((x > y) - (x < y));
}

int	ft_is_sort_test(void)
{
	int			*tab;
	int			length;
	int			sorted;
	const char	*not;

	ft_print_title("ft_is_sort_test");
	length = 5;
	tab = ft_range(0, length);
	ft_putstr("The following array: ");
	ft_print_int_tab(tab, length, " ");
	sorted = ft_is_sort(tab, length, ft_int_cmp);
	not = "";
	if (!sorted)
		not = " NOT";
	(ft_putstr("is"), ft_putstr(not), ft_putstr(" sorted\n"));
	check(sorted == 1);
	ft_rev_int_tab(tab, length);
	ft_putstr("The following array: ");
	ft_print_int_tab(tab, length, " ");
	sorted = ft_is_sort(tab, length, ft_int_cmp);
	not = "";
	if (!sorted)
		not = FT_RED" NOT"FT_RESET;
	(ft_putstr("is"), ft_putstr(not), ft_putstr(" sorted\n"));
	check(sorted == 0);
	check(ft_is_sort(NULL, 0, ft_int_cmp) == 1);
	ft_putstr("\n");
	free(tab);
	return (0);
}