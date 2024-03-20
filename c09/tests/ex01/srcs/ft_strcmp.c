/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:42:57 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:42:58 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/**
 * Compares s1 and s2, returning less than, equal to or greater than zero
 * if s1 is lexicographically less than, equal to or greater than s2.
 *
 * POSIX.1 specifies only that:
 *		  The sign of a nonzero return value shall be determined by
 *		  the sign of the difference between the values of the first
 *		  pair of bytes (both interpreted as type unsigned char)
 *		  that differ in the strings being compared.
 * Note:
 * 		In glibc, as in most other implementations,
 * 		the return value is the arithmetic result of subtracting
 * 		the last compared byte in s2 from the last compared byte in s1.
 * 		(If the two characters are equal, this difference is 0.)
 */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2++)
		if (*s1++ == 0)
			return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)--s2);
}
