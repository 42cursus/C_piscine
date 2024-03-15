/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:41:50 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 18:41:54 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "c03_test.h"

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char src[] = " world!";
	char dest[14] = "Hello";
	printf("RES: %s\n", ft_strncat(dest, src, 200));
	printf("DEST: %s\n", dest);

	ft_strstr_test();
//	ft_strlcat_test();
	return (0);
}
