/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:02:04 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 20:57:54 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEST_ARRAY_SIZE (255)

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char *argv[])
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
