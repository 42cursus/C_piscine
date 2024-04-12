/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:56:32 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 21:23:20 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/**
 * The ft_tolower() function converts uppercase letters to lowercase.
 * Returns its lowercase equivalent, if a lowercase representation exists
 * in the current locale.  Otherwise, returns c.
 */
int	ft_tolower(int c)
{
	if (!((c >= 'A') && (c <= 'Z')))
		return (c);
	return (c - 'A' + 'a');
}

/**
 * The function ft_strlowcase() transforms every letter int the given string
 * to lowercase.
 * `char *const` is an immutable pointer (it cannot point to any other location)
 * but the contents of location at which it points are mutable.
 * stackoverflow.com/questions/9834067/difference-between-char-and-const-char
 */
char	*ft_strlowcase(char *str)
{
	char *const	save = str;

	while (*str)
		*str = ft_tolower(*str++);
	return (save);
}
