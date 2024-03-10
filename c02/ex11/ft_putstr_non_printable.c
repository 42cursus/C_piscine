/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:21:41 by abelov            #+#    #+#             */
/*   Updated: 2023/10/14 19:43:49 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static const char	g_ascii_zero = '0';
static const char	g_ascii_slash = '\\';
static const char	g_ascii_space = '\x20';
static const char	g_ascii_del_char = '\x7f';
static const int	g_hex_radix = 16;
static const char	*g_hex_base = "0123456789abcdef";

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

int	is_printable(char c)
{
	return ((c >= g_ascii_space) && (c != g_ascii_del_char));
}

/*
 * Static functions in C are functions that are restricted
 * to the same file in which they are defined.
 */
static void	ft_print_hex(char non_printable_char)
{
	int	np;

	np = (unsigned char) non_printable_char;
	if (np > g_hex_radix)
	{
		ft_putchar(g_hex_base[np / g_hex_radix]);
		ft_putchar(g_hex_base[np % g_hex_radix]);
	}
	else
	{
		ft_putchar(g_ascii_zero);
		ft_putchar(g_hex_base[np]);
	}
}

/**
 * If this string contains characters that aren’t printable, 
 * they’ll have to be displayed in the shape of hexadecimals (lowercase),
 * preceeded by a "backslash".
 */
void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_printable(*str))
			ft_putchar(*str);
		else
		{
			ft_putchar(g_ascii_slash);
			ft_print_hex(*str);
		}
		str++;
	}
}
