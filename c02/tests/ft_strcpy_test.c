/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:06:57 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:35:27 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "c02.h"

int	ft_strcpy_test(void)
{
	char	src[] = "Source";
	char	dest[10];
	char *p = src;

	printf("s: %s\n", src);
	printf("d: %s\n", dest);

	ft_strcpy(dest, src);
	printf("p: %s\n", p);
	write(1,p-1,7);
	printf("\ns: %s\n", src);
	printf("\nd: %s\n", dest);
}
