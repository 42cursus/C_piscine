/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:24:32 by abelov            #+#    #+#             */
/*   Updated: 2023/10/18 13:49:19 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
//#define DEST_ARRAY_SIZE (255)
#define ENOUGH ((CHAR_BIT * sizeof(int) - 1) / 3 + 2)

void ft_putnbr(int);

int	main(int argc, char **argv)
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

	ft_putnbr(nb);

	return (EXIT_SUCCESS);
}
