/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:46:36 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:32:44 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "c02.h"
#include "c02_tests.h"

int	ft_str_is_uppercase_test(void)
{
	const char	*str;
	int			r;

	ft_print_title("ft_str_is_uppercase_test");
	str = "ADUWHKWDHUWAI";
	r = ft_str_is_uppercase((char *)str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	str="uifhesfuieseufhi";
	r = ft_str_is_uppercase((char *)str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	str="FEUUISEFuifhesfuieseufhi";
	r = ft_str_is_uppercase((char *)str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	str="11165465465ADWAWDBHJjhbjdawb";
	r = ft_str_is_uppercase((char *)str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	str="";
	r = ft_str_is_uppercase((char *)str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	return (0);
}
