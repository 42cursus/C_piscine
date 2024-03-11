/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:37:04 by abelov            #+#    #+#             */
/*   Updated: 2023/10/23 15:47:45 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

static const char	g_ascii_zero_character = '\0';

static int	ft_strlen(char *str)
{
	const char	*ostr = str;

	while (*str)
		str++;
	return (str - ostr);
}

char	*ft_strcpy(char *dest, char *src)
{
	char *const	save = dest;

	while (*src)
		*dest++ = *src++;
	*dest = g_ascii_zero_character;
	return (save);
}

char	*ft_strdup(char *src)
{
	char	*new;

	new = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new)
		return (NULL);
	return (ft_strcpy(new, src));
}
