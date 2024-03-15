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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEST_ARRAY_SIZE (255)

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp_test(int argc, char *argv[])
{
	char	buf[DEST_ARRAY_SIZE];
	char	*str1 = "ABC";
	char	*str2 = "ABD";
	int		len = 0;
	int		res = 0;


	if ((argc - 1) < 3)
	{
		fprintf(stderr, "Usage: %s <str1> <str2> <len>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else if ((argc - 1) >= 3)
	{
		str1 = argv[1];
		str2 = argv[2];
		len = atoi(argv[3]);
	}

	memset(buf, 0, sizeof(buf));

	res = strncmp(str1, str2, len);
	printf("s1: \"%s\", s2: \"%s\", n:%d\n cc: %u\n ", str1, str2, len, res);
	res = ft_strncmp(str1, str2, len);
	printf("ft: %u\n", res);
	printf("======\n");

	return (0);
}
