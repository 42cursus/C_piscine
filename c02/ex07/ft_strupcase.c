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
#define INT_TRUE (1)
#define INT_FALSE (0)

int	char_is_lower(char c)
{
	int		result;
	char	ascii_lower_a = 'a';
	char	ascii_lower_z = 'z';

	result = INT_FALSE;
	if ((c >= ascii_lower_a) && (c <= ascii_lower_z))
		result = INT_TRUE;
	return (result);
}

/**
 * Function that transforms every letter to uppercase.
 * `char *const` is an immutable pointer (it cannot point to any other location)
 * but the contents of location at which it points are mutable.
 * stackoverflow.com/questions/9834067/difference-between-char-and-const-char
 */
char	*ft_strupcase(char *str)
{
	char		*c;
	char *const	save = str;
	const char	ascii_delta = 0x20;

	while (*str)
	{
		c = str++;
		if (INT_TRUE == char_is_lower(*c))
			*c -= ascii_delta;
	}
	return (save);
}
