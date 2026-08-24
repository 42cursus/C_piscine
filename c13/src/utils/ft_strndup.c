/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:42:23 by abelov            #+#    #+#             */
/*   Updated: 2024/07/02 17:42:24 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <errno.h>

/**
 * Copy src to dest, truncating or null-padding to always copy n bytes.
 * Return dest.
 * `const char*` is a mutable pointer to an immutable character/string.
 * You cannot change the contents of the location(s) this pointer points to.
 *
 * Warning:
 * 	If there is no null byte among the first n bytes of src, the string placed
 * 	in dest will not be null-terminated.
 */
char	*ft_strncpy(char *dst, const char *src, unsigned int n)
{
	char *const	dest = dst;
	const char	*s = src;

	while (n-- != 0)
	{
		*dst++ = *s;
		if (*s++ == 0)
		{
			while (n-- != 0)
				*dst++ = '\0';
			break ;
		}
	}
	return (dest);
}

/**
 * The ft_strndup() function is similar to ft_strdup, but copies at most nb
 * bytes. If s is longer than nb, only nb bytes are copied,
 * and a terminating null byte ('\0') is added.
 *
 * ERRORS
 * 		ENOMEM Insufficient memory available to allocate duplicate string.
 */
char	*ft_strndup(const char *src, unsigned int nb)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * (nb + 1));
	if (!new)
	{
		errno = ENOMEM;
		return (NULL);
	}
	new[nb] = '\0';
	ft_strncpy(new, src, nb);
	return (new);
}
