/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:59:36 by abelov            #+#    #+#             */
/*   Updated: 2024/03/28 13:59:37 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

/**
 * The ft_memcpy() copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap otherwise use ft_memmove().
 * ISO/IEC 9899:2023 Programming languages - C
 * https://news.ycombinator.com/item?id=36451907
 * https://stackoverflow.com/
 * questions/54964262/implement-memcpy-is-unsigned-char-needed-or-just-char
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *const			save_pointer = dest;
	const unsigned char	*s = src;

	if (!src && !dest)
		return (NULL);
	while (n-- > 0)
		*(unsigned char *)dest++ = *s++;
	return (save_pointer);
}
