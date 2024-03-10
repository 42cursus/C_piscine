/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:29:20 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:32:01 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "c02.h"

int	ft_str_is_numeric_test(void)
{
	char	str[50];
	const char	str2[] = "";
	int	r;

	strcpy(str,"Heloooo!!");
	r = ft_str_is_numeric(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	strcpy(str,"11165465465");
	r = ft_str_is_numeric(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	r = ft_str_is_numeric("");
	printf("s: \"%s\", r: %d\n", str2, r);
	printf("======\n");

	return (0);
}
