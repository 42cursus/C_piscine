/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:29:28 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 03:29:28 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"

int	ft_print_combn_test(void)
{
	ft_print_title("ft_print_combn_test");
	ft_print_combn(1);
	write(1, "\n", 1);
	ft_print_combn(2);
	write(1, "\n", 1);
	ft_print_combn(3);
	write(1, "\n", 1);
	ft_print_combn(4);
	write(1, "\n", 1);
	ft_print_combn(5);
	write(1, "\n", 1);
	ft_print_combn(6);
	write(1, "\n", 1);
	ft_print_combn(7);
	write(1, "\n", 1);
	ft_print_combn(8);
	write(1, "\n", 1);
	ft_print_combn(9);
	write(1, "\n", 1);
	ft_print_combn(10);
	printf("\n");
	fflush(stdout);
	return (0);
}
