/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:49:19 by abelov            #+#    #+#             */
/*   Updated: 2023/10/16 20:16:26 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The strncmp() function compares not more than n bytes (bytes that follow
 * a NUL character are not compared) from the array pointed to by s1
 * to the array pointed to by s2.
 *
 * The return value is the arithmetic result of subtracting the first pair
 * of bytes (both  interpreted as type unsigned char) that differ in the strings
 * being compared.
 */
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int			result;
	const char	null_byte = '\0';

	result = 0;
	while (n-- > 0)
	{
		if (*s1 != *s2)
		{
			result = *(unsigned char *)s1 - *(unsigned char *)s2;
			break ;
		}
		if (*s1++ == null_byte)
			break ;
		s2++;
	}
	return (result);
}
