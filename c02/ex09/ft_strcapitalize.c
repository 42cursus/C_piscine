/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:40:01 by abelov            #+#    #+#             */
/*   Updated: 2023/10/13 19:55:18 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * We can simply return the condition and it will be automatically converted
 * to int.
 * stackoverflow.com/questions/69110890/cast-vs-implicit-conversion-in-c
 */
int	is_uppercase(char c)
{
	const char	ascii_upper_a = 'A';
	const char	ascii_upper_z = 'Z';

	return ((c >= ascii_upper_a) && (c <= ascii_upper_z));
}

int	is_lowercase(char c)
{
	const char	ascii_lower_a = 'a';
	const char	ascii_lower_z = 'z';

	return ((c >= ascii_lower_a) && (c <= ascii_lower_z));
}

int	is_alphanum(char c)
{
	const char	ascii_zero = 0 + '0';
	const char	ascii_nine = 9 + '0';

	return (is_lowercase(c) || is_uppercase(c)
		|| ((c >= ascii_zero) && (c <= ascii_nine)));
}

/**
 * The function ft_strcapitalize() capitalizes the ﬁrst letter of each word
 * and transforms all other letters to lowercase.
 * A word is a string of alphanumeric characters
 */
char	*ft_strcapitalize(char *str)
{
	char *const	save = str;
	const char	ascii_delta = 0x20;
	char		*c;
	char		p;

	c = str++;
	if (is_lowercase(*c))
		*c -= ascii_delta;
	while (*str)
	{
		p = *c;
		c = str++;
		if (is_alphanum(p) && is_uppercase(*c))
			*c += ascii_delta;
		else if (!is_alphanum(p) && is_lowercase(*c))
			*c -= ascii_delta;
	}
	return (save);
}
