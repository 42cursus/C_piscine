/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:39:40 by abelov            #+#    #+#             */
/*   Updated: 2024/03/15 17:39:42 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "c04_test.h"

int	ft_putnbr_base_test(void)
{
	ft_print_title("ft_putnbr_base_test");
	ft_putnbr_base(-122, (char *)"0123456789abcdef");
	write(1, "42:", 3);
	ft_putnbr_base(42, (char *)"0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, (char *)"0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, (char *)"0123456789abcdef");
	write(1, "\n0:", 3);
	ft_putnbr_base(0, (char *)"0123456789abcdef");
	write(1, "\nINT_MAX:", 9);
	ft_putnbr_base(INT_MAX, (char *)"0123456789abcdef");
	write(1, "\nINT_MAX:", 9);
	ft_putnbr_base(INT_MAX, (char *)"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210");
	write(1, "\nINT_MIN:", 9);
	ft_putnbr_base(INT_MIN, (char *)"0123456789abcdef");
	write(1, "\n-2143247366 : ", 15);
	ft_putnbr_base(INT_MIN + 4236282, (char *)"'~");
	write(1, "\n-1:", 4);
	ft_putnbr_base(-1, (char *)"0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, (char *)"");
	write(1, "\n:", 2);
	ft_putnbr_base(42, (char *)"0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, (char *)"+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, (char *)"\v0123456789abcdef");
	printf("\n");
	return (0);
}
