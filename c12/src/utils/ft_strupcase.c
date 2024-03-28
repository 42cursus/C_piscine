/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:45:39 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 21:23:32 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The ft_toupper() function converts lowercase letters to uppercase.
 * Returns its uppercase equivalent, if an uppercase representation exists
 * in the current locale.  Otherwise, it returns c.
 */
int	ft_toupper(int c)
{
	if (!((c >= 'a') && (c <= 'z')))
		return (c);
	return (c - 'a' + 'A');
}

/**
 * Function that transforms every letter to uppercase.
 * `char *const` is an immutable pointer (it cannot point to any other location)
 * but the contents of location at which it points are mutable.
 * stackoverflow.com/questions/9834067/difference-between-char-and-const-char
 */
char	*ft_strupcase(char *str)
{
	char *const	save = str;

	while (*str)
		*str = ft_toupper(*str++);
	return (save);
}
