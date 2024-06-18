/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:37:47 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 20:21:28 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

static int	char_is_lower(char c)
{
	int			result;
	const char	ascii_lower_a = 'a';
	const char	ascii_lower_z = 'z';

	result = false;
	if ((c >= ascii_lower_a) && (c <= ascii_lower_z))
		result = true;
	return (result);
}

int	ft_str_is_lowercase(char *str)
{
	int	res;

	res = 1;
	while (*str && res)
		if (!char_is_lower(*str++))
			res = false;
	return (res);
}
