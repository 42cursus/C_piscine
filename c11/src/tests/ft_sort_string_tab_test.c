/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 05:56:23 by abelov            #+#    #+#             */
/*   Updated: 2024/05/22 05:56:23 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11_tests.h"

int	ft_sort_string_tab_test(void)
{
	char	**tab;
	size_t	length;

	ft_print_title("ft_sort_string_tab_test");
	tab = ft_split("gamma delta beta alpha", ' ');
	length = ft_get_tab_size((void **) tab);
	ft_putstr("the original array is: \n\t");
	ft_print_str_tab(tab, NULL);
	ft_sort_string_tab(tab);
	ft_putstr("the sorted array is: \n\t");
	ft_print_str_tab(tab, NULL);
	check(ft_strcmp(tab[0], "alpha") == 0);
	check(ft_strcmp(tab[length - 1], "gamma") == 0);
	ft_putstr("\n");
	ft_free_tab((void **) tab, length);
	return (0);
}
