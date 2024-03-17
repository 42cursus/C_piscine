/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:14:34 by abelov            #+#    #+#             */
/*   Updated: 2024/03/11 23:14:36 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>

typedef unsigned int	t_uint;

static char	*ft_strchr(const char *s, int c)
{
	if (!s || !*s)
		return (NULL);
	while (*s)
	{
		if (c == *s)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

static inline int	ft_strlen(char *str)
{
	char *const	ostr = str;

	while (*str)
		str++;
	return (str - ostr);
}

static inline bool	ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t')
		|| (c == '\n') || (c == '\v') || (c == '\f') || (c == '\r'));
}

static t_uint	check_base_valid(char *base)
{
	char		*ptr;
	t_uint		ret;
	char const	*save = base;

	if (!base)
		return (0);
	while (*base)
	{
		if ((*base == '-') || (*base == '+') || ft_is_space(*base))
			return (0);
		ptr = base;
		while (*ptr++)
			if (*ptr == *base)
				return (0);
		base++;
	}
	ret = ft_strlen((char *)save);
	return (ret);
}

int	ft_atoi_base(char *str, char *base)
{
	int		integer;
	int		neg;
	int		digit;
	t_uint	radix;

	neg = 1;
	integer = 0;
	radix = check_base_valid(base);
	if (radix <= 0)
		return (0);
	while (*str && ft_is_space(*str))
		str++;
	while (*str && ((*str == '-') || (*str == '+')))
	{
		if (*str++ == '-')
			neg *= -1;
	}
	while (*str && ft_strchr(base, *str))
	{
		digit = ft_strchr(base, *str++) - base;
		integer = digit + (integer * radix);
	}
	return (integer * neg);
}
