/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:33:58 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:34:36 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "c02.h"

#define DEST_ARRAY_SIZE (255)

/**
 * cc main.c && \
 * 	./a.out "NUL-terminate dsawddadwadawdaawdawdawdwadwadwadawdwadwt"
 */
int	ft_strncpy_test(int argc, char **argv)
{
	char	str1[DEST_ARRAY_SIZE];
	char	str2[3];
	char	buf[DEST_ARRAY_SIZE];
	char	*str = "";
	char	*res;
	if ((argc - 1) >= 1)
		str = argv[1];

	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	res  = strncpy(buf,"", 1);
	printf("s: \"%s\",\nb: \"%s\", r: %p\n", "", buf, res);
	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	res = ft_strncpy(buf,"", 1);
	printf("s: \"%s\",\nb: \"%s\", r: %p\n", "", buf, res);
	printf("======\n");

	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	res  = strncpy(buf,"", sizeof(buf) - 1);
	printf("s: \"%s\",\nb: \"%s\", r: %p\n", "", buf, res);
	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	res = ft_strncpy(buf,"", sizeof(buf) - 1);
	printf("s: \"%s\",\nb: \"%s\", r: %p\n", "", buf, res);
	printf("======\n");

	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	strncpy(str1,str, sizeof(buf) - 1);
	res  = strncpy(buf,str1, 169);
	printf("s: \"%s\",\nb: \"%s\", r: %p\n", str1, buf, res);
	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	strncpy(str1,str,  sizeof(buf) - 1);
	res = ft_strncpy(buf,str1, 169);
	printf("f: \"%s\", r: %p\n", buf, res);
	printf("======\n");

	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	strncpy(str1,str, sizeof(buf) - 1);
	res  = strncpy(buf,str1, 2);
	printf("s: \"%s\",\nb: \"%s\", r: %p\n", str1, buf, res);
	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	strncpy(str1,str,  sizeof(buf) - 1);
	res = ft_strncpy(buf,str1, 2);
	printf("f: \"%s\", r: %p\n", buf, res);
	printf("======\n");

	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	strncpy(str1,str, sizeof(buf) - 1);
	res  = strncpy(buf,str1, sizeof(buf) - 1);
	printf("s: \"%s\",\nb: \"%s\", r: %p\n", str1, buf, res);
	memset(buf, 0, sizeof(buf));
	memset(str1, 0, sizeof(str1));
	strncpy(str1,str, sizeof(buf) - 1);
	res = ft_strncpy(buf,str1, sizeof(buf) - 1);
	printf("f: \"%s\", r: %p\n", buf, res);
	printf("======\n");


	memset(buf, 0, sizeof(buf));
	memset(str2, 0, sizeof(str2));
	strcpy(str2,"abc");
	res  = strncpy(buf,str2, 3);
	printf("s: \"%s\",\nb: \"%s\", r: %p\n", str2, buf, res);
	memset(buf, 0, sizeof(buf));
	memset(str2, 0, sizeof(str2));
	strcpy(str2,"abc");
	res = ft_strncpy(buf,str2, 3);
	printf("f: \"%s\", r: %p\n", buf, res);
	printf("======\n");

	return (0);
}
