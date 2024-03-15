/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:53:19 by abelov            #+#    #+#             */
/*   Updated: 2023/10/26 21:53:35 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_atoi_base(char *str, char *base);

static inline int	ft_strlen(char *str)
{
	const char	*ostr = str;

	while (*str)
		str++;
	return (str - ostr);
}

/**
 * The ft_strcat() function  appends  the src string to the dest string,
 * overwriting the terminating null byte ('\0') at the end of dest,
 * and then adds a terminating null byte. The strings may not overlap,
 * and the dest string must have enough space for the result.
 *
 * Returns a pointer to the resulting string dest.
 */
char	*ft_strcat(char *dest, char *src)
{
	char *const	save = dest;
	const char	null_byte = '\0';

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = null_byte;
	return (save);
}

void	ft_nbr_base_str(int nbr, char *base, char *str)
{
	int	lbase;

	lbase = ft_strlen(base);
	if (nbr < 0)
	{
		ft_strcat(str, "-");
		nbr *= -1;
	}
	if (nbr > lbase - 1)
	{
		ft_nbr_base_str(nbr / lbase, base, str);
		ft_nbr_base_str(nbr % lbase, base, str);
	}
	else
		ft_strncat(str, &base[nbr], 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*str;
	int		dec;
	int		max;
	int		base_to_length;
	int		count;

	dec = ft_atoi_base(nbr, base_from);
	base_to_length = ft_strlen(base_to);
	max = 1;
	count = 1;
	while (max <= dec)
	{
		max = max * base_to_length;
		count++;
	}
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (0);
	ft_nbr_base_str(dec, base_to, &(*str));
	return (str);
}
