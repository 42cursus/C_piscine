/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 00:17:43 by abelov            #+#    #+#             */
/*   Updated: 2024/03/16 00:17:44 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "c04_test.h"

int	ft_atoi_base_test(void)
{
	int			integer;
	const char	*base;
	int res;
	int expected;
	ft_print_title("ft_atoi_base_test");

	write(STDOUT_FILENO, "INT_MAX: ", 9);
	base = "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210";
	integer = ft_atoi_base((char *)"XEFnoY", (char *)base);
	ft_putnbr_base(integer, (char *)base);
	printf("\n");
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-g", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
	res = ft_atoi_base(" \v7fffffff", "0123456789abcdef");
	printf("%d : %d (equals: %i)\n", INT_MAX, res, INT_MAX == res);

	res = ft_atoi_base("-2147483648", "0123456789");
	printf("%d : %d (equals: %i)\n", INT_MIN, res, INT_MIN == res);

	res = atoi("-2147483648");
	printf("%d : %d (equals: %i)\n", INT_MIN, res, INT_MIN == res);

	res = ft_atoi_base(" \f-80000000", "0123456789abcdef");
	printf("%d : %d (equals: %i)\n", INT_MIN, res, INT_MIN == res);

	res = ft_atoi_base("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZXEFnoY$",
					   "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210");
	printf("%d : %d (equals: %i)\n", INT_MAX, res, INT_MAX == res);
	res = ft_atoi_base("-~~~~~~~~'~~~~~~'~'~~~'''''''~~'$", "'~");
	expected = -2143247366;
	printf("%d : %d (equals: %i)\n", expected, res, expected == res);
	return (0);
}
