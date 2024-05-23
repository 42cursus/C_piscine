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
	int		i;

	ft_print_title("ft_advanced_sort_string_tab_test");
	otab = ft_split("hey ho !", ' ');
	tab = otab;
	length = (int)ft_get_tab_size(tab);
	ft_putstr("the array is: ");
	while (*tab)
		(ft_putstr("["), ft_putstr(*tab++), ft_putstr("] "));
	i = ft_count_if(otab, length, &ft_str_is_alpha);
	(ft_putstr("\nThere are "), ft_putnbr(i));
	ft_putstr(" fully alphabetical words\n");
	fflush(stdout);
	while (length--)
		free(otab[length]);
	free(otab);
	return (0);
}

