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

int	ft_str_is_uppercase_test(void)
{
	char	str[50];
	const char	str2[] = "";
	int	r;


	strcpy(str,"ADUWHKWDHUWAI");
	r = ft_str_is_uppercase(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	strcpy(str,"uifhesfuieseufhi");
	r = ft_str_is_uppercase(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	strcpy(str,"FEUUISEFuifhesfuieseufhi");
	r = ft_str_is_uppercase(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	strcpy(str,"11165465465ADWAWDBHJjhbjdawb");
	r = ft_str_is_uppercase(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	r = ft_str_is_uppercase("");
	printf("s: \"%s\", r: %d\n", str2, r);
	printf("======\n");

	return (0);
}
