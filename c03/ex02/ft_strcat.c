/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:18:46 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 21:01:14 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
