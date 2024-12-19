/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:35:04 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:35:00 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "c02.h"
#include "c02_tests.h"

int	ft_strlowcase_test(void)
{
	char		buf[50];
	const char	*str;
	const char	*src;

	ft_print_title("ft_strlowcase_test");
	src = "uifhesfuieseufhi";
	strcpy(buf, src);
	str = ft_strlowcase(buf);
	printf("s: \"%s\",\nr: \"%s\"\n", src, str);
	printf("======\n");

	src = "uifha31323FSF13123sFSSufhi";
	strcpy(buf, src);
	str = ft_strlowcase(buf);
	printf("s: \"%s\",\nr: \"%s\"\n", src, str);
	printf("======\n");

	src = "IUHIAUWDHIUDHIAWDH";
	strcpy(buf, src);
	str = ft_strlowcase(buf);
	printf("s: \"%s\",\nr: \"%s\"\n", src, str);
	printf("======\n");
	
	return (0);
}
