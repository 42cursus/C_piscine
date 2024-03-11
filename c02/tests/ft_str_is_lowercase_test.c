/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:18:10 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:31:38 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "c02.h"

int	ft_str_is_lowercase_test(void)
{
	char	str[50];
	const char	str2[] = "";
	int	r;

	strcpy(str,"uifhesfuieseufhi");
	r = ft_str_is_lowercase(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	strcpy(str,"FEUUISEFuifhesfuieseufhi");
	r = ft_str_is_lowercase(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	strcpy(str,"11165465465");
	r = ft_str_is_lowercase(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	r = ft_str_is_lowercase("");
	printf("s: \"%s\", r: %d\n", str2, r);
	printf("======\n");

	return (0);
}
