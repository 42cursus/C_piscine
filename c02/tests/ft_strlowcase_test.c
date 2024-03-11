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

int	ft_strlowcase_test(void)
{
	char	str1[50];
	char	str2[50];
	char	*str;

	strcpy(str1,"uifhesfuieseufhi");
	strcpy(str2,str1);
	str = ft_strlowcase(str2);
	printf("s: %s, r: %s\n", str1, str2);
	printf("======\n");

	strcpy(str1,"uifha31323FSF13123sFSSufhi");
	strcpy(str2,str1);
	str = ft_strlowcase(str2);
	printf("s: %s, r: %s\n", str1, str2);
	printf("======\n");

	strcpy(str1,"IUHIAUWDHIUDHIAWDH");
	strcpy(str2,str1);
	str = ft_strlowcase(str2);
	printf("s: %s, r: %s\n", str1, str2);
	printf("======\n");
	
	return (0);
}
