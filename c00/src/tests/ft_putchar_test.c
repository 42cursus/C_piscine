/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:15:32 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 03:15:34 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"

int	ft_putchar_test(void)
{
	ft_print_title("ft_putchar_test");
	ft_putchar('c');
	printf("\n");
	fflush(stdout);
	return (0);
}
