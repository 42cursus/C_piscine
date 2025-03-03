/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:24:32 by abelov            #+#    #+#             */
/*   Updated: 2024/03/15 23:32:35 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "c04_test.h"

//#define DEST_ARRAY_SIZE (255)
#define ENOUGH ((CHAR_BIT * sizeof(int) - 1) / 3 + 2)

void ft_putnbr(int);

int ft_putnbr_test()
{
	char		buf[ENOUGH + 1];
	const char	*str = "123";
	int nb;

	ft_print_title("ft_putnbr_test");
	memset(buf, 0, sizeof(buf));
	nb = atoi(str);
	sprintf(buf, "%d", nb);
	printf("s: \"%s\", nbr: ", buf);
	ft_putnbr(nb);
	printf("\n");
	return (EXIT_SUCCESS);
}
