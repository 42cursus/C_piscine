/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:46:24 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 20:05:19 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	char_is_uppercase(char c)
{
	int			result;
	const char	g_ascii_upper_a = 'A';
	const char	g_ascii_upper_z = 'Z';

	result = false;
	if ((c >= g_ascii_upper_a) && (c <= g_ascii_upper_z))
		result = true;
	return (result);
}

int	ft_str_is_uppercase(char *str)
{
	int	res;

	res = 1;
	while (*str && res)
		if (!char_is_uppercase(*str++))
			res = false;
	return (res);
}
