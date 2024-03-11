/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:53:38 by abelov            #+#    #+#             */
/*   Updated: 2023/10/08 16:29:09 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c01_test.h"

int ft_ultimate_div_mod_test(void)
{
	int	a = 9;
	int	b = 2;

	ft_print_title("ft_ultimate_div_mod_test");
	printf("a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d, b: %d\n", a, b);
	return (0);
}
