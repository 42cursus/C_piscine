/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:22:23 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 20:15:22 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define INT_TRUE (1)
#define INT_FALSE (0)

static const char	g_ascii_upper_a = 'A';
static const char	g_ascii_upper_z = 'Z';
static const char	g_ascii_lower_a = 'a';
static const char	g_ascii_lower_z = 'z';

int	char_is_alpha(char c)
{
	int	result;

	result = INT_FALSE;
	if (((c >= g_ascii_upper_a) && (c <= g_ascii_upper_z))
		|| ((c >= g_ascii_lower_a) && (c <= g_ascii_lower_z)))
		result = INT_TRUE;
	return (result);
}

int	ft_str_is_alpha(char *str)
{
	int	res;

	res = 1;
	while (*str)
	{
		if (INT_TRUE != char_is_alpha(*str++))
		{
			res = 0;
			break ;
		}
	}
	return (res);
}
