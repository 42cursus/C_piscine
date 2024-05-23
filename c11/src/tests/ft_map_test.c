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

int	test_fuction(int i)
{
	return (++i);
}

int	ft_map_test(void)
{
	int	*tab;
	int	*otab;
	int	length;

	ft_print_title("ft_map_test");
	length = 3;
	otab = ft_range(0, length);
	tab = otab;
	ft_foreach(tab, length, &ft_putnbr);
	printf("\n");
	tab = ft_map(tab, length, &test_fuction);
	ft_foreach(tab, length, &ft_putnbr);
	printf("\n");
	fflush(stdout);
	free(tab);
	free(otab);
	return (0);
}
