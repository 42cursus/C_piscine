/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:37:38 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 20:55:41 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline int	ft_strlen(char *str)
{
	char *const	ostr = str;

	while (*str)
		str++;
	return (str - ostr);
}

/**
 * The ft_strlcpy() function copies up to size - 1 characters
 * from the NUL-terminated string src to dst, NUL-terminating the result.
 * Returns the total length of the string tried to create (the length of src).
 * Return count does not include NUL character.
 * If retval >= dsize, truncation occurred.
 */
static unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	const char	*save = src;
	const char	null_byte = '\0';

	if (size > 0)
	{
		while (size-- > 1 && *src)
			*dest++ = *src++;
		*dest = null_byte;
	}
	while (*src)
		src++;
	return (src - save);
}

/**
 *  The ft_strlcat() function concatenates strings. It take the full size of
 *  the buffer (not just the length) and guarantees to NUL-terminate the result
 *  (as long as there is at least one byte free in dst).
 *  ft_strlcat() only operate on true “C” strings.  This means that both src
 *  and dst must be NUL-terminated.
 *
 *  Returns the total length of the string tried to create.
 *  That means the initial length of dst plus the length of src.
 */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char *const		odest = dest;
	unsigned int	dest_len;

	while (*dest)
		dest++;
	dest_len = dest - odest;
	if (dest_len >= size)
		return (size + ft_strlen(src));
	return (dest_len + ft_strlcpy(dest, src, size - dest_len));
}
