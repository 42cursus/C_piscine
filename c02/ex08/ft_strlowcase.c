/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:56:32 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 21:23:20 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define INT_TRUE (1)
#define INT_FALSE (0)

static int	char_is_uppercase(char c)
{
	int			result;
	const char	ascii_upper_a = 'A';
	const char	ascii_upper_z = 'Z';

	result = INT_FALSE;
	if ((c >= ascii_upper_a) && (c <= ascii_upper_z))
		result = INT_TRUE;
	return (result);
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
	char		*c;
	char *const	save = str;
	const char	ascii_delta = 0x20;

	while (*str)
	{
		c = str++;
		if (INT_TRUE == char_is_uppercase(*c))
			*c += ascii_delta;
	}
	return (save);
}
