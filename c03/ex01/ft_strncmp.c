/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:49:19 by abelov            #+#    #+#             */
/*   Updated: 2023/10/16 20:16:26 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The strncmp() returns an integer indicating the result of the comparison of
 * the first (at most) n bytes of s1 and s2 as follows:
 *     • 0, if the s1 and s2 are equal;
 *     • a negative value if s1 is less than s2;
 *     • a positive value if s1 is greater than s2.
 * Compares not more than n bytes (bytes that follow a NUL character are not
 * compared) from the array pointed to by s1 to the array pointed to by s2.
 *
 * The return value is the arithmetic result of subtracting the first pair
 * of bytes (both  interpreted as type unsigned char) that differ in the strings
 * being compared.
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result;

	result = 0;
	while (n-- > 0)
	{
		if (*s1 != *s2)
		{
			result = *(unsigned char *)s1 - *(unsigned char *)s2;
			break ;
		}
		if (*s1++ == '\0')
			break ;
		s2++;
	}
	return (result);
}
