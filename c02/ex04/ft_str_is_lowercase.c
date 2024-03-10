/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:37:47 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 20:21:28 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define INT_TRUE (1)
#define INT_FALSE (0)

static const char	g_ascii_lower_a = 'a';
static const char	g_ascii_lower_z = 'z';

static int	char_is_lower(char c)
{
	int	result;

	result = INT_FALSE;
	if ((c >= g_ascii_lower_a) && (c <= g_ascii_lower_z))
		result = INT_TRUE;
	return (result);
}

int	ft_str_is_lowercase(char *str)
{
	int	res;

	res = 1;
	while (*str && res)
		if (INT_TRUE != char_is_lower(*str++))
			res = 0;
	return (res);
}
