/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:49:47 by abelov            #+#    #+#             */
/*   Updated: 2023/10/18 14:29:57 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/*
 * https://stackoverflow.com/questions
 * /25848815/why-enough-is-enough-storing-an-int-in-a-char-array
 */
#define ENOUGH ((CHAR_BIT * sizeof(int) - 1) / 3 + 2)

int	ft_atoi(char *);

int	ft_atoi_test(int argc, char **argv)
{
	char	buf[ENOUGH];
	char	*str = "";
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

	nb = ft_atoi(str);
	sprintf(buf, "%d", nb);
	printf("ft: \"%s\"\n", buf);

	return (EXIT_SUCCESS);
}
