/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:36:05 by abelov            #+#    #+#             */
/*   Updated: 2024/03/15 23:33:37 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "c04_test.h"

#define DEST_ARRAY_SIZE (255)

void ft_putstr(char *str);

int	ft_putstr_test(int argc, char **argv)
{
	char		buf[DEST_ARRAY_SIZE];
	const char	*str = "";

	ft_print_title("ft_putstr_test");
	if ((argc - 1) < 1)
	{
		fprintf(stderr, "Usage: %s <str1>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else if ((argc - 1) >= 1)
		str = argv[1];
	memset(buf, 0, sizeof(buf));
	ft_putstr(str);
	printf("\n");
	fflush(stdout);
	return (EXIT_SUCCESS);
}
