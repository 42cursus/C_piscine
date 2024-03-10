/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:56:51 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 20:22:20 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define INT_TRUE (1)
#define INT_FALSE (0)

static const char	g_ascii_space = '\x20';
static const char	g_ascii_del_char = '\x7f';

int	char_is_printable(char c)
{
	int	result;

	result = INT_FALSE;
	if ((c >= g_ascii_space) && (c != g_ascii_del_char))
		result = INT_TRUE;
	return (result);
}

int	ft_str_is_printable(char *str)
{
	int	res;

	res = 1;
	while (*str)
	{
		if (INT_TRUE != char_is_printable(*str++))
		{
			res = 0;
			break ;
		}
	}
	return (res);
}
