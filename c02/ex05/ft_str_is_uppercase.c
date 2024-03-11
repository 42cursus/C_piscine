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
#define INT_TRUE (1)
#define INT_FALSE (0)

static const char	g_ascii_upper_a = 'A';
static const char	g_ascii_upper_z = 'Z';

int	char_is_uppercase(char c)
{
	int	result;

	result = INT_FALSE;
	if ((c >= g_ascii_upper_a) && (c <= g_ascii_upper_z))
		result = INT_TRUE;
	return (result);
}

int	ft_str_is_uppercase(char *str)
{
	int	res;

	res = 1;
	while (*str && res)
		if (INT_TRUE != char_is_uppercase(*str++))
			res = 0;
	return (res);
}
