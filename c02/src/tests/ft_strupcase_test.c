/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:57:28 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:34:24 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "c02.h"
#include "c02_tests.h"

int	ft_strupcase_test(void)
{
	char	str1[50];
	char	str2[50];
	char	*str;

	ft_print_title("ft_strupcase_test");
	strcpy(str1,"uifhesfuieseufhi");
	strcpy(str2,str1);
	str = ft_strupcase(str2);
	printf("s: %s, r: %s\n", str1, str2);
	printf("======\n");

	strcpy(str1,"uifha31323FSF13123sFSSufhi");
	strcpy(str2,str1);
	str = ft_strupcase(str2);
	printf("s: %s, r: %s\n", str1, str2);
	printf("======\n");

	strcpy(str1,"IUHIAUWDHIUDHIAWDH");
	strcpy(str2,str1);
	str = ft_strupcase(str2);
	printf("s: %s, r: %s\n", str1, str2);
	printf("======\n");
	
	return (0);
}
