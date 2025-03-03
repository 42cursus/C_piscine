/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:02:04 by abelov            #+#    #+#             */
/*   Updated: 2024/03/15 15:09:47 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c03_tests.h"

#define DEST_ARRAY_SIZE (255)

int	ft_strncmp_test(void)
{
	char		buf[DEST_ARRAY_SIZE];
	const char	*str1 = "ABC";
	const char	*str2 = "ABD";
	int			len = 0;
	int			res = 0;

	ft_print_title("ft_strncmp_test");

	memset(buf, 0, sizeof(buf));

	res = strncmp(str1, str2, len);
	printf("s1: \"%s\", s2: \"%s\", n:%d\n cc: %u\n ", str1, str2, len, res);
	res = ft_strncmp(str1, str2, len);
	printf("ft: %u\n", res);
	printf("======\n");

	return (0);
}
