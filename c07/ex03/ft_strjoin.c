/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:03:15 by abelov            #+#    #+#             */
/*   Updated: 2023/10/23 16:03:17 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 * The ft_strcat() function  appends  the src string to the dest string,
 * overwriting the terminating null byte ('\0') at the end of dest,
 * and then adds a terminating null byte. The strings may not overlap,
 * and the dest string must have enough space for the result.
 *
 * Returns a pointer to the resulting string dest.
 */
char	*ft_strcat(char *dest, const char *src)
{
	char *const	save = dest;
	const char	null_byte = '\0';

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = null_byte;
	return (save);
}

static inline size_t	ft_strlen(const char *str)
{
	const char	*ostr = str;

	while (*str)
		str++;
	return (str - ostr);
}

static inline char	*ft_empty_string(int length)
{
	char			*new;
	unsigned char	*ptr;

	new = (char *)malloc(sizeof(char) * (++length));
	if (!new)
		return (NULL);
	ptr = (unsigned char *)new;
	while (length--)
		*(ptr++) = '\0';
	return (new);
}

static inline int	ft_strlen_all(const char **strs, size_t size)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (i < size)
		counter += ft_strlen(strs[i++]);
	return (counter);
}

/**
 * Concatenates all the strings pointed by strs separated by sep.
 * size is the number of strings in strs.
 * if size is 0, returns an empty string that you can free().
 */
char	*ft_strjoin(int size, const char **strs, const char *sep)
{
	char	*new;
	int		i;

	if (size <= 0)
		return (ft_empty_string(0));
	new = ft_empty_string(ft_strlen_all(strs, size)
			+ (ft_strlen(sep) * (size - 1)));
	i = 0;
	while (i < size - 1)
		ft_strcat(ft_strcat(new, strs[i++]), sep);
	ft_strcat(new, strs[i]);
	return (new);
}
