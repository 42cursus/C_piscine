/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:21:54 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 20:56:01 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

static inline int	ft_strlen(char *str)
{
	char *const	ostr = str;

	while (*str)
		str++;
	return (str - ostr);
}

/**
 * The ft_strstr() function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes ('\0') are not compared.
 * Returns a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char	*ft_strstr(char *str, char *to_find)
{
	char *const	save = to_find;
	char		*s;

	if (!ft_strlen(to_find))
		return (str);
	while (*str)
	{
		s = str;
		to_find = save;
		while (*to_find == *s++)
			if (*to_find++ == '\0')
				return (str);
		str++;
	}
	return (NULL);
}
