/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:41:50 by abelov            #+#    #+#             */
/*   Updated: 2024/03/11 23:20:53 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c03_tests.h"

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	ft_strncat_test(void)
{
	char	src[] = " world!";
	char	dest[14] = "Hello";

	ft_print_title("ft_strncat_test");
	printf("RES: %s\n", ft_strncat(dest, src, 200));
	printf("DEST: %s\n", dest);
	return (0);
}
