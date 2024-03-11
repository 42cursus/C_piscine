/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:53:38 by abelov            #+#    #+#             */
/*   Updated: 2023/10/08 16:19:56 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c01_test.h"

int ft_div_mod_test(void)
{
	int	a = 9;
	int	b = 2;
	int div = 0;
	int rem = 0;

	ft_print_title("ft_div_mod_test");
	printf("a: %d, b: %d, div: %d, rem: %d\n", a, b, div, rem);
	ft_div_mod(a, b, &div, &rem);
	printf("a: %d, b: %d, div: %d, rem: %d\n", a, b, div, rem);
	return (0);
}
