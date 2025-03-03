/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:01:40 by abelov            #+#    #+#             */
/*   Updated: 2024/03/15 15:01:41 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c03_tests.h"
#include <stdint.h>

int ft_strcat_test(void)
{
	#define LIM 4000
    char		p[LIM + 1];    /* +1 for terminating null byte */
    time_t		base;
	const char	null_byte = '\0';
	int			j;

	ft_print_title("ft_strcat_test");
    base = time(NULL);
    p[0] = null_byte;
	j = 0;
	while (j < LIM)
	{
		if ((j % 10000) == 0)
			printf("%d %jd\n", j, (intmax_t) (time(NULL) - base));
		ft_strcat(p, "a");
		j++;
	}
	return (0);
}

