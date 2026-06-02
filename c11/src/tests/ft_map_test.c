/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:37:02 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 22:37:03 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "c11_tests.h"

int	ft_int_increment(int i)
{
	return (++i);
}

int	ft_map_test(void)
{
	int	*tab;
	int	*otab;
	int	length;
	int	i;

	ft_print_title("ft_map_test");
	length = 3;
	otab = ft_range(0, length);
	tab = ft_map(otab, length, &ft_int_increment);
	ft_print_int_tab(otab, length, NULL);
	ft_print_int_tab(tab, length, NULL);
	i = -1;
	while (++i < length)
		check(tab[i] == otab[i] + 1);
	ft_putstr("\n");
	free(tab);
	free(otab);
	return (0);
}
