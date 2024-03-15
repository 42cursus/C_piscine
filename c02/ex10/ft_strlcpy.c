/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:10:39 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 17:51:02 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The ft_strlcpy() function copies up to size - 1 characters
 * from the NUL-terminated string src to dst, NUL-terminating the result.
 * Returns the total length of the string tried to create (the length of src).
 * Return count does not include NUL character. 
 * If retval >= dsize, truncation occurred.
 */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	const char	*save = src;
	const char	null_byte = '\0';

	if (size > 0)
	{
		while (--size && *src)
			*dest++ = *src++;
		*dest = null_byte;
	}
	while (*src)
		src++;
	return (src - save);
}
