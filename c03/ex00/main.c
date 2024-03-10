/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:27:58 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 20:56:58 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_strcmp.c"
#define DEST_ARRAY_SIZE (255)

int	main(int argc, char *argv[])
{
	char	buf[DEST_ARRAY_SIZE];
	char	*str1 = "ABC";
	char	*str2 = "ABD";
	unsigned char	res;

	if ((argc - 1) < 2)
	{
		fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else if ((argc - 1) >= 2)
	{
		str1 = argv[1];
		str2 = argv[2];
	}

	memset(buf, 0, sizeof(buf));

	res = strcmp(str1, str2);
	printf("s1: \"%s\", s2: \"%s\",\n libc: %u\n", str1, str2, res);
	res = ft_strcmp(str1, str2);
	printf("s1: \"%s\", s2: \"%s\",\n ft: %u\n", str1, str2, res);
	printf("======\n");

	return (0);
}
