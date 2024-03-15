/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:20:51 by abelov            #+#    #+#             */
/*   Updated: 2023/10/15 13:48:51 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Copy src to dest, truncating or null-padding to always copy n bytes.
 * Return dest.
 * If there is no terminating null byte in the first n bytes of src, strncpy()
 * produces an unterminated string in dest.
 * `const char*` is a mutable pointer to an immutable character/string.
 * You cannot change the contents of the location(s) this pointer points to.
 */
char	*ft_strncpy2(char *dest, char *src, unsigned int n)
{
	char		*d;
	const char	*s;

	if (n != 0)
	{
		d = dest;
		s = src;
		while (n != 0)
		{
			if (*s == 0)
			{
				while (--n != 0)
					*d++ = 0;
				break ;
			}
			*d++ = *s++;
		}
	}
	return (dest);
}
