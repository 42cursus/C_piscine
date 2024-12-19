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
#include <string.h>

/**
 * In this example: `&(char){r + ascii_zero}`,
 * we create a "compound literal" `(char){r + ascii_zero}` which creates
 * an "anonymous variable" of type char and `&` is used to get its address.
 * Then we use this address to pass it as an argument to a `write` function.
 */
void	ft_putnbr(unsigned int nb)
{
	int					sp;
	unsigned int		stack[20];
	const char			*base = "0123456789";
	const unsigned int	radix = strlen(base);

	sp = 0;
	if ((int)nb < 0)
	{
		nb *= -1;
		write(STDOUT_FILENO, "-", 1);
	}
	stack[sp++] = nb;
	while (sp)
	{
		nb = stack[--sp];
		stack[sp] = 0;
		if (nb >= radix)
		{
			stack[sp++] = nb % radix;
			stack[sp++] = nb / radix;
		}
		else
			write(STDOUT_FILENO, &base[nb], 1);
	}
}
