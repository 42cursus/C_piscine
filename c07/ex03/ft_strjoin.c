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

static const char	g_ascii_zero_character = '\0';

/*
 * The ft_strcat() function  appends  the src string to the dest string,
 * overwriting the terminating null byte ('\0') at the end of dest,
 * and then adds a terminating null byte. The strings may not overlap,
 * and the dest string must have enough space for the result.
 *
 * Returns a pointer to the resulting string dest.
 */
char	*ft_strcat(char *dest, char *src)
{
	char *const	save = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = g_ascii_zero_character;
	return (save);
}

static inline int	ft_strlen(char *str)
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

	new = (char *)malloc(sizeof(char) * length + 1);
	if (!new)
		return (NULL);
	ptr = (unsigned char *)new;
	while (length-- >= 0)
		*ptr++ = '\0';
	return (new);
}

static inline int	ft_strlen_all(char **strs, size_t size)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (i < size)
		counter += ft_strlen(strs[i++]);
	return (counter);
}

/*
 * Concatenates all the strings pointed by strs separated by sep.
 * size is the number of strings in strs.
 * if size is 0, returns an empty string that you can free().
 */
char	*ft_strjoin(int size, char **strs, char *sep)
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
