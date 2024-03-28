/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:37:56 by abelov            #+#    #+#             */
/*   Updated: 2024/03/28 03:33:29 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c03_tests.h"

/**
 * ft_memset() fills memory with a constant byte,
 * returns a pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*d;

	d = s;
	while (n-- != 0)
		*d++ = (unsigned char)c;
	return (s);
}
