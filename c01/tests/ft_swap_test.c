/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 01:19:15 by abelov            #+#    #+#             */
/*   Updated: 2024/03/07 01:19:18 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c01_test.h"

int ft_swap_test(void)
{
	int a = 4;
	int b = 5;

	ft_print_title("ft_swap_test");
	printf("a: %d, b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);
	return 0;
}
