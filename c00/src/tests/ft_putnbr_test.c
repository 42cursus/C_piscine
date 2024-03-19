/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:26:26 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 03:26:27 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"

int	ft_putnbr_test(void)
{
	ft_print_title("ft_putnbr_test");
	ft_putnbr(42);
	write(STDOUT_FILENO, "\n", 1);
	fflush(stdout);
	return (0);
}
