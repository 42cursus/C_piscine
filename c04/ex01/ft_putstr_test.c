/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:36:05 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 21:43:56 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define DEST_ARRAY_SIZE (255)

void ft_putstr(char *str);

int	main(int argc, char **argv)
{
	char		buf[DEST_ARRAY_SIZE];
	const char	*str = "";

	if ((argc - 1) < 1)
	{
		fprintf(stderr, "Usage: %s <str1>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	else if ((argc - 1) >= 1)
		str = argv[1];
	memset(buf, 0, sizeof(buf));
	ft_putstr(str);
	return (EXIT_SUCCESS);
}
