/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:29:20 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:32:01 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "c02.h"
#include "c02_tests.h"

int	ft_str_is_numeric_test(void)
{
	const char	*str;
	int	r;

	ft_print_title("ft_str_is_numeric_test");
	str = "Heloooo!!";
	r = ft_str_is_numeric(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	str = "11165465465!!";
	r = ft_str_is_numeric(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	str = "";
	r = ft_str_is_numeric(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	return (0);
}
