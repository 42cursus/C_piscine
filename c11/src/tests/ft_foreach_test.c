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

int	ft_foreach_test(void)
{
	int	*tab;
	int	length;

	ft_print_title("ft_foreach_test");
	length = 3;
	tab = ft_range(0, length);
	ft_foreach(tab, length, &ft_putnbr);
	printf("\n");
	fflush(stdout);
	return (0);
}
