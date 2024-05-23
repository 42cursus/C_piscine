/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:18:19 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 22:18:20 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11_tests.h"

void	ft_int_print(int i)
{
	ft_putnbr(i);
	ft_putstr(" ");
}

int	ft_foreach_test(void)
{
	int	*tab;
	int	length;

	ft_print_title("ft_foreach_test");
	length = 5;
	tab = ft_range(0, length);
	ft_putstr("The array is: ");
	ft_putstr("[ ");
	ft_foreach(tab, length, &ft_int_print);
	ft_putstr("]\n");
	ft_putstr("\n");
	fflush(stdout);
	free(tab);
	return (0);
}
