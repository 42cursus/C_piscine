/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:15:30 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:32:24 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "c02.h"
#include "c02_tests.h"

int	ft_str_is_printable_test()
{
	char			str[2000];
	int 			j;
	unsigned char	c;

	const char	str2[] = "";
	int	r;

	ft_print_title("ft_str_is_printable_test");
	while (1)
	{
		j = 0;
		//Check random, with all 127 chars
		while ((c = rand()%129) != 128)
			str[j++] = c;
		str[j] = 0;

		printf("%s-> %s\n\n\n", str,
				(ft_str_is_printable(str)) ? 
				"This string contains only printable chars, or the string is empty" :
			   	"This string contains non printable chars");

		if (ft_str_is_printable(str) && (strlen(str) > 3)) break;
	}	

	r = ft_str_is_printable("");
	printf("s: \"%s\", r: %d\n", str2, r);
	printf("======\n");
	
}
