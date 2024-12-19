/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:12:55 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:35:16 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "c02.h"
#include "c02_tests.h"

#define DEST_ARRAY_SIZE (255)

/**
 * cc main.c -lbsd && \
 * 	./a.out "NUL-terminate dsawddadwadawdaawdawdawdwadwadwadawdwadwt"
 */
int	ft_strlcpy_test(int argc, char **argv)
{
	char	str1[150];
	char	buf[DEST_ARRAY_SIZE];
	char	*str;
	size_t	len;

	ft_print_title("ft_strlcpy_test");
	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	strncpy(str1,str, sizeof(str1) - 1);
	len = strlcpy(buf,str1, sizeof(buf));
	printf("s: \"%s\",\nb: \"%s\", r: %ld\n", str1, buf, len);
	printf("======\n");

	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	strncpy(str1,str, sizeof(str1) - 1);
	len = ft_strlcpy(buf,str1, sizeof(buf));
	printf("s: \"%s\",\nb: \"%s\", r: %ld\n", str1, buf, len);
	printf("======\n");

	str = "abc";
	memset(buf, 0, sizeof(buf));
	len  = strlcpy(buf,str, 4);
	printf("s: \"%s\",\nb: \"%s\", r: %ld\n", str, buf, len);

	memset(buf, 0, sizeof(buf));
	len = ft_strlcpy(buf,str, 4);
	printf("f: \"%s\", r: %ld\n", buf, len);
	printf("======\n");

	return (0);
}
