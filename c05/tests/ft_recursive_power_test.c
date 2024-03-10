/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:02:36 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 23:54:14 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define DEST_ARRAY_SIZE (255)
//#define ENOUGH ((CHAR_BIT * sizeof(int) - 1) / 3 + 2)

int	ft_recursive_power(int, int);

int	ft_recursive_power_test(int argc, char **argv)
{
//	char	buf[ENOUGH];
	char	buf[DEST_ARRAY_SIZE];
	char	*str1 = "";
	char	*str2 = "";
	int nb;
	int pow;

	if ((argc - 1) < 2)
	{
		fprintf(stderr, "Usage: %s <num> <pow>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	str1 = argv[1];
	str2 = argv[2];

	memset(buf, 0, sizeof(buf)-1);

	nb = atoi(str1);
	pow = atoi(str2);
	sprintf(buf, "num: \"%d\", pow: \"%d\"", nb, pow);

	printf("s: \"%s\"\n", buf);

	nb = ft_recursive_power(nb, pow);
	printf("ft: \"%d\"\n", nb);

	return (EXIT_SUCCESS);
}

