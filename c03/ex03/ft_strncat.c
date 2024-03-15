/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:48:14 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 21:01:38 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The  ft_strncat() function  appends at most n bytes from src string to
 * the dest string, overwriting the terminating null byte ('\0') at the end
 * of dest, and then adds a terminating null byte. The strings may not overlap,
 * and the dest string must have enough space for the result. The src does not
 * need to be null-terminated if it contains n or more bytes.
 * The resulting string in dest is always null-terminated.
 * If  src  contains  n or more bytes, strncat() writes n+1 bytes to dest
 * (n from src plus the terminating null byte).
 * Therefore, the size of dest must be at least strlen(dest)+n+1.
 */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *const		save_pointer = dest;
	unsigned int	i;
	const char		null_byte = '\0';

	i = 0;
	while (*dest)
		dest++;
	while (*src && (i++ < nb))
		*dest++ = *src++;
	*dest = null_byte;
	return (save_pointer);
}
