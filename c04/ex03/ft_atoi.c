/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:55:58 by abelov            #+#    #+#             */
/*   Updated: 2023/10/18 14:46:24 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

static inline bool	ft_is_number(char c)
{
	const int	ascii_zero = '0';
	const int	ascii_nine = '9';

	return ((c >= ascii_zero) && (c <= ascii_nine));
}

static inline bool	ft_is_sign(char c)
{
	return ((c == '-') || (c == '+'));
}

static inline bool	ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t')
		|| (c == '\n') || (c == '\v') || (c == '\f') || (c == '\r'));
}

int	ft_atoi(char *str)
{
	int			i;
	int			nbr;
	int			neg;
	const int	decimal_radix = 10;
	const int	ascii_zero = '0';

	i = 0;
	nbr = 0;
	neg = 1;
	while (ft_is_space(str[i]))
		i++;
	while (ft_is_sign(str[i]))
		if (str[i++] == '-')
			neg *= -1;
	while (ft_is_number(str[i]))
	{
		nbr *= decimal_radix;
		nbr += str[i++] - ascii_zero;
	}
	if (neg < 0)
		return (-nbr);
	else
		return (nbr);
}
