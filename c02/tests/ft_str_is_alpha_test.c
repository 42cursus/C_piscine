/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:45:16 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:06:54 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "c02.h"

int	ft_str_is_alpha_test(void)
{
	char	str[50];
	const char	str2[] = "";
	int	r;

	strcpy(str,"Heloooo!!");
	r = ft_str_is_alpha(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	strcpy(str,"This is a string!");
	r = ft_str_is_alpha(str);
	printf("s: \"%s\", r: %d\n", str, r);
	printf("======\n");

	r = ft_str_is_alpha("");
	printf("s: \"%s\", r: %d\n", str2, r);
	printf("======\n");

	return (0);
}
