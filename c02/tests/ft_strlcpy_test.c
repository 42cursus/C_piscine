/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:12:55 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:35:16 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "c02.h"

#define DEST_ARRAY_SIZE (255)

/**
 * cc main.c -lbsd && \
 * 	./a.out "NUL-terminate dsawddadwadawdaawdawdawdwadwadwadawdwadwt"
 */
int	ft_strlcpy_test(int argc, char **argv)
{
	char	str1[150];
	char	str2[3];
	char	buf[DEST_ARRAY_SIZE];
	char	*str = "";
	size_t	len;
	if ((argc - 1) >= 1)
		str = argv[1];

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

	memset(buf, 0, sizeof(buf));
	memset(str2, 0, sizeof(str2));
	strncpy(str2,"abc",3);
	len  = strlcpy(buf,str2, 4);
	printf("s: \"%s\",\nb: \"%s\", r: %ld\n", str1, buf, len);
	memset(buf, 0, sizeof(buf));
	memset(str2, 0, sizeof(str2));
	strncpy(str2,"abc",3);
	len = ft_strlcpy(buf,str2, 4);
	printf("f: \"%s\", r: %ld\n", buf, len);
	printf("======\n");

	return (0);
}
