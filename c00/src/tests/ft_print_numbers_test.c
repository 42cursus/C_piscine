/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:20:37 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 03:20:37 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"

int	ft_print_numbers_test(void)
{
	ft_print_title("ft_print_numbers_test");
	ft_print_numbers();
	printf("\n");
	fflush(stdout);
	return (0);
}