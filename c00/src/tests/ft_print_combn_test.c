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
	ft_print_combn(5);
	printf("\n");
	fflush(stdout);
	return (0);
}
