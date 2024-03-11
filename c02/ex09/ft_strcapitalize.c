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
static const char	g_ascii_delta = 0x20;
static const char	g_ascii_zero = 0 + '0';
static const char	g_ascii_nine = 9 + '0';
static const char	g_ascii_upper_a = 'A';
static const char	g_ascii_upper_z = 'Z';
static const char	g_ascii_lower_a = 'a';
static const char	g_ascii_lower_z = 'z';

/**
 * We can simply return the condition and it will be automatically converted
 * to int.
 * stackoverflow.com/questions/69110890/cast-vs-implicit-conversion-in-c
 */
int	is_uppercase(char c)
{
	return ((c >= g_ascii_upper_a) && (c <= g_ascii_upper_z));
}

int	is_lowercase(char c)
{
	return ((c >= g_ascii_lower_a) && (c <= g_ascii_lower_z));
}

int	is_alphanum(char c)
{
	return (is_lowercase(c) || is_uppercase(c)
		|| ((c >= g_ascii_zero) && (c <= g_ascii_nine)));
}

/**
 * The function ft_strcapitalize() capitalizes the ﬁrst letter of each word
 * and transforms all other letters to lowercase.
 * A word is a string of alphanumeric characters
 */
char	*ft_strcapitalize(char *str)
{
	char *const	save = str;
	char		*c;
	char		p;

	c = str++;
	if (is_lowercase(*c))
		*c -= g_ascii_delta;
	while (*str)
	{
		p = *c;
		c = str++;
		if (is_alphanum(p) && is_uppercase(*c))
			*c += g_ascii_delta;
		else if (!is_alphanum(p) && is_lowercase(*c))
			*c -= g_ascii_delta;
	}
	return (save);
}
