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
	if (x == y)
		return (0);
	else if (x < y)
		return (1);
	else
		return (-1);
}

int	ft_is_sort_test(void)
{
	int	i;
	int	*tab;
	int	length;

	ft_print_title("ft_is_sort_test");
	length = 5;
	tab = ft_range(0, length);
	ft_rev_int_tab(tab, length);
	ft_putstr("the array is: ");
	i = 0;
	while (i < length)
		(ft_putstr("["), ft_putnbr(tab[i++]), ft_putstr("] "));
	tab = tab;
	ft_putstr("\n");
	if (ft_is_sort(tab, length, ft_int_cmp))
		ft_putstr("The array is sorted\n");
	else
		ft_putstr("The array is NOT sorted\n");
	fflush(stdout);
	free(tab);
	return (0);
}