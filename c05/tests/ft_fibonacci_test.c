/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:02:36 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 23:50:50 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

#include "c05_test.h"

//#define DEST_ARRAY_SIZE (255)
#define ENOUGH ((CHAR_BIT * sizeof(int) - 1) / 3 + 2)

int	ft_fibonacci(int);

int	ft_fibonacci_test(int argc, char **argv)
{
	char		buf[ENOUGH + 1];
	const char	*str = "";
	int nb;

	if ((argc - 1) < 1)
	{
		fprintf(stderr, "Usage: %s <str1>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else if ((argc - 1) >= 1)
		str = argv[1];

	memset(buf, 0, sizeof(buf));

	nb = atoi(str);
	sprintf(buf, "%d", nb);

	printf("s: \"%s\"\n", buf);


	nb = ft_fibonacci(nb);
	printf("ft: \"%d\"\n", nb);

	return (EXIT_SUCCESS);
}

