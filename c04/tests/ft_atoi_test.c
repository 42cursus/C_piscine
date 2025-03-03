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
#include "c04_test.h"

/**
 * https://stackoverflow.com/questions
 * /25848815/why-enough-is-enough-storing-an-int-in-a-char-array
 */
#define ENOUGH ((CHAR_BIT * sizeof(int) - 1) / 3 + 2)

int	ft_atoi(char *);

int ft_atoi_test()
{
	char		buf[ENOUGH + 1];
	const char	*str = "123";
	int nb;

	ft_print_title("ft_atoi_test");
	memset(buf, 0, sizeof(buf));
	nb = atoi(str);
	sprintf(buf, "%d", nb);
	printf("s: \"%s\"\n", buf);

	nb = ft_atoi((char *)str);
	sprintf(buf, "%d", nb);
	printf("ft: \"%s\"\n", buf);

	return (EXIT_SUCCESS);
}
