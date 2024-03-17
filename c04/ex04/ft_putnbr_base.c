/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:12:16 by abelov            #+#    #+#             */
/*   Updated: 2024/03/11 23:12:18 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdbool.h>

typedef unsigned int	t_uint;

static inline bool	ft_is_space(char c)
{
	return ((c == ' ') || (c == '\t')
		|| (c == '\n') || (c == '\v') || (c == '\f') || (c == '\r'));
}

static inline t_uint	ft_strlen(char *str)
{
	char *const	ostr = str;

	while (*str)
		str++;
	return (str - ostr);
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

void	ft_putnbr_base(int nbr, char *base)
{
	t_uint		radix;
	t_uint		whole_nbr;
	int const	mask = nbr >> (sizeof(int) * CHAR_BIT - 1);

	radix = check_base_valid(base);
	if (radix < 2)
		return ;
	whole_nbr = (nbr + mask) ^ mask;
	if (nbr < 0)
		write(STDOUT_FILENO, "-", 1);
	if (whole_nbr >= radix)
	{
		ft_putnbr_base((whole_nbr / radix), base);
		write(STDOUT_FILENO, base + (whole_nbr % radix), 1);
	}
	if (whole_nbr < radix)
		write(STDOUT_FILENO, base + whole_nbr, 1);
}
