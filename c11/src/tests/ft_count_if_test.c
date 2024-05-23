/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:51:59 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 23:52:00 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11_tests.h"

int	ft_count_if_test(void)
{
	char	**tab;
	char	**otab;
	int		length;
	int		i;

	ft_print_title("ft_count_if");
	otab = ft_split("hey ho !", ' ');
	tab = otab;
	length = (int)ft_get_tab_size(tab);
	ft_putstr("the array is: ");
	while (*tab)
		(ft_putstr("["), ft_putstr(*tab++), ft_putstr("] "));
	i = ft_count_if(otab, tab - otab, &ft_str_is_alpha);
	printf("\nThere are %d fully alphabetical words\n", i);
	fflush(stdout);
	while (length--)
		free(otab[length]);
	free(otab);
	return (0);
}
