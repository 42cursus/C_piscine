/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:25:27 by abelov            #+#    #+#             */
/*   Updated: 2023/10/12 20:18:30 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INT_TRUE (1)
#define INT_FALSE (0)

int	char_is_num(char c)
{
	int			result;
	const char	ascii_zero = 0 + '0';
	const char	ascii_nine = 9 + '0';

	result = INT_FALSE;
	if ((c >= ascii_zero) && (c <= ascii_nine))
		result = INT_TRUE;
	return (result);
}

int	ft_str_is_numeric(char *str)
{
	int	res;

	res = 1;
	while (*str && res)
		if (INT_TRUE != char_is_num(*str++))
			res = 0;
	return (res);
}
