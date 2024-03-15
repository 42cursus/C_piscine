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

#include <stdbool.h>

int	char_is_alpha(char c)
{
	int			result;
	const char	ascii_upper_a = 'A';
	const char	ascii_upper_z = 'Z';
	const char	ascii_lower_a = 'a';
	const char	ascii_lower_z = 'z';

	result = false;
	if (((c >= ascii_upper_a) && (c <= ascii_upper_z))
		|| ((c >= ascii_lower_a) && (c <= ascii_lower_z)))
		result = true;
	return (result);
}

int	ft_str_is_alpha(char *str)
{
	int	res;

	res = 1;
	while (*str && res)
		if (!char_is_alpha(*str++))
			res = false;
	return (res);
}
