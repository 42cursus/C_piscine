/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:02:36 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 23:51:30 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "c05_test.h"

//#define DEST_ARRAY_SIZE (255)
#define ENOUGH ((CHAR_BIT * sizeof(int) - 1) / 3 + 2)

int	ft_find_next_prime(int);

int	ft_find_next_prime_test(int argc, char **argv)
{
	char	buf[ENOUGH];
	char	*str = (char *)"";
	int nb;

	if ((argc - 1) < 1)
	{
		fprintf(stderr, "Usage: %s <str1>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else if ((argc - 1) >= 1)
		str = argv[1];

	memset(buf, 0, sizeof(buf)-1);

	nb = atoi(str);
	sprintf(buf, "%d", nb);

	printf("s: \"%s\"\n", buf);


	nb = ft_find_next_prime(nb);
	printf("ft: \"%d\"\n", nb);

	return (EXIT_SUCCESS);
}

