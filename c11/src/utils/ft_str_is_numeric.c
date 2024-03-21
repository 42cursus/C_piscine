/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:25:27 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 20:18:30 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	char_is_num(char c)
{
	int			result;
	const char	ascii_zero = 0 + '0';
	const char	ascii_nine = 9 + '0';

	result = false;
	if ((c >= ascii_zero) && (c <= ascii_nine))
		result = true;
	return (result);
}

int	ft_str_is_numeric(char *str)
{
	int	res;

	res = 1;
	while (*str && res)
		if (!char_is_num(*str++))
			res = false;
	return (res);
}
