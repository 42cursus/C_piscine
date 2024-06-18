/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:56:51 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 20:22:20 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	char_is_printable(char c)
{
	int			result;
	const char	g_ascii_space = '\x20';
	const char	g_ascii_del_char = '\x7f';

	result = false;
	if ((c >= g_ascii_space) && (c != g_ascii_del_char))
		result = true;
	return (result);
}

int	ft_str_is_printable(char *str)
{
	int	res;

	res = 1;
	while (*str && res)
		if (!char_is_printable(*str++))
			res = false;
	return (res);
}
