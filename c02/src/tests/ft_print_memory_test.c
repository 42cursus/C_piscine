/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:44:23 by abelov            #+#    #+#             */
/*   Updated: 2024/03/14 20:44:24 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c02_tests.h"

int	ft_print_memory_test(void)
{
	int		i;
	char	src[0xFF + 10];

	ft_print_title("ft_print_memory_test");
	i = -1;
	while (++i <= 0xFF)
		src[i] = (char)i;
	src[i] = 0;

	i = 0;
	while (i < 30)
		ft_print_memory((void *) src, i++);
	ft_print_memory((void *)src, 0x101);
	return (0);
}
