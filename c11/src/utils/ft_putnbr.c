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
#include <limits.h>
#include <sys/types.h>

/**
 * In this example: `&(char){r + ascii_zero}`,
 * we create a "compound literal" `(char){r + ascii_zero}` which creates
 * an "anonymous variable" of type char and `&` is used to get its address.
 * Then we use this address to pass it as an argument to a `write` function.
 */
void	ft_putnbr(int nb)
{
	u_int			r;
	const char		*base = "0123456789";
	const u_int		decimal_radix = 10;
	int const		mask = nb >> (sizeof(int) * CHAR_BIT - 1);

	r = (nb + mask) ^ mask;
	if (nb < 0)
		write(STDOUT_FILENO, "-", 1);
	if (r >= decimal_radix)
	{
		ft_putnbr(r / decimal_radix);
		write(STDOUT_FILENO, &base[(r % decimal_radix)], 1);
	}
	if (r < decimal_radix)
		write(STDOUT_FILENO, &base[r], 1);
}
