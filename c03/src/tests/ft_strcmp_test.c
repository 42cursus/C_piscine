/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:27:58 by abelov            #+#    #+#             */
/*   Updated: 2024/03/15 15:09:03 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c03_tests.h"

#define DEST_ARRAY_SIZE (256)

int	ft_strcmp(const char *s1, const char *s2);

int	ft_strcmp_test(void)
{
	char		buf[DEST_ARRAY_SIZE];
	const char	*str1 = "ABC";
	const char	*str2 = "ABD";
	unsigned char	res;

	ft_print_title("ft_strcmp_test");
	ft_memset(buf, 0, sizeof(buf));
	res = strcmp(str1, str2);
	printf("s1: \"%s\", s2: \"%s\",\n libc: %u\n", str1, str2, res);
	res = ft_strcmp(str1, str2);
	printf("s1: \"%s\", s2: \"%s\",\n ft: %u\n", str1, str2, res);
	printf("======\n");
	return (0);
}
