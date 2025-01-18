/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:57:42 by abelov            #+#    #+#             */
/*   Updated: 2023/10/18 20:18:00 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>

static inline size_t	ft_strlen(const char *str)
{
	const char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}

void	ft_itoa_buf_base(unsigned int nb, char (*buf)[20], const char *base)
{
	int				sp;
	char			*ptr;
	u_int			stack[20];
	const size_t	radix = ft_strlen(base);

	sp = 0;
	ptr = *buf;
	if ((int)nb < 0)
	{
		nb *= -1;
		*ptr++ = '-';
	}
	stack[sp++] = nb;
	while (sp)
	{
		nb = stack[--sp];
		if (nb >= radix)
		{
			stack[sp++] = nb % radix;
			stack[sp++] = nb / radix;
		}
		else
			*ptr++ = base[nb];
	}
	*ptr = '\0';
}

/**
 * using stack with stack-pointer (sp) to traverse the number
 */
void	ft_putnbr(unsigned int nb)
{
	char	buf[20];

	ft_itoa_buf_base(nb, &buf, "0123456789");
	write(STDOUT_FILENO, buf, ft_strlen(buf));
}
