/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab_test.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 02:58:34 by abelov            #+#    #+#             */
/*   Updated: 2024/05/23 02:58:36 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11_tests.h"

int	ft_advanced_sort_string_tab_test(void)
{
	char	**tab;
	char	**otab;
	int		length;

	ft_print_title("ft_advanced_sort_string_tab_test");
	otab = ft_split("delta beta gamma alpha", ' ');
	tab = otab;
	length = (int)ft_get_tab_size((void **) tab);
	ft_putstr("the original array is: \n\t");
	ft_print_str_tab(tab, NULL);
	ft_advanced_sort_string_tab(tab, (int (*)(char *, char *)) ft_strcmp);
	ft_putstr("the sorted array is: \n\t");
	ft_print_str_tab(tab, NULL);
	ft_putstr("\n");
	ft_free_tab((void **) otab, length);
	return (0);
}

