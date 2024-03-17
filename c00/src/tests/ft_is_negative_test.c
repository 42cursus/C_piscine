/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:21:34 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 03:21:35 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"

int	ft_is_negative_test(void)
{
	ft_print_title("ft_is_negative_test");
	ft_is_negative(-1);
	ft_is_negative(1);
	printf("\n");
	fflush(stdout);
	return (0);
}
