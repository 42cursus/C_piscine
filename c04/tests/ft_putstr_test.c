/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:36:05 by abelov            #+#    #+#             */
/*   Updated: 2024/03/15 23:33:37 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "c04_test.h"

void ft_putstr(const char *str);

int	ft_putstr_test(void)
{
	const char	*str = "str1";
	ft_print_title("ft_putstr_test");
	ft_putstr(str);
	printf("\n");
	return (EXIT_SUCCESS);
}
