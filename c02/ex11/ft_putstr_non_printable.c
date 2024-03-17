/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:21:41 by abelov            #+#    #+#             */
/*   Updated: 2023/10/14 19:43:49 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static inline void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

/**
 * Static functions in C are functions that are restricted
 * to the same file in which they are defined.
 */
static void	ft_print_hex(char non_printable_char)
{
	int			np;
	const int	hex_radix = 16;
	const char	*hex_base = "0123456789abcdef";
	const char	ascii_zero = '0';
	const char	ascii_slash = '\\';

	ft_putchar(ascii_slash);
	np = (unsigned char) non_printable_char;
	if (np >= hex_radix)
	{
		ft_putchar(hex_base[np / hex_radix]);
		ft_putchar(hex_base[np % hex_radix]);
	}
	else
	{
		ft_putchar(ascii_zero);
		ft_putchar(hex_base[np]);
	}
}

/**
 * If this string contains characters that aren’t printable, 
 * they’ll have to be displayed in the shape of hexadecimals (lowercase),
 * preceeded by a "backslash".
 */
void	ft_putstr_non_printable(char *str)
{
	const char asciiSpace = '\x20';
	const char asciiDelChar = '\x7f';

	while (*str)
	{
		if (((*str >= asciiSpace) && (*str != asciiDelChar)))
			ft_putchar(*str);
		else
			ft_print_hex(*str);
		str++;
	}
}
