/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:06:57 by abelov            #+#    #+#             */
/*   Updated: 2024/12/19 00:57:33 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "c02.h"
#include "c02_tests.h"

int	ft_strcpy_test(void)
{
	const char	*src = "Source";
	char		dest[10];

	ft_print_title("ft_strcpy_test");
	printf("s: \"%s\"\n", src);
	printf("d: \"%s\"\n\n", dest);

	ft_strcpy(dest, src);
	printf("s: \"%s\"\n", src);
	printf("d: \"%s\"\n", dest);
}
