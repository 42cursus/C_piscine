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

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	r;
	const int		ascii_zero = '0';
	const int		decimal_radix = 10;
	int const		mask = nb >> (sizeof(int) * CHAR_BIT - 1);

	r = (nb + mask) ^ mask;
	if (nb < 0)
		ft_putchar('-');
	if (r >= decimal_radix)
	{
		ft_putnbr(r / decimal_radix);
		ft_putchar((r % decimal_radix) + ascii_zero);
	}
	if (r < decimal_radix)
		ft_putchar(r + ascii_zero);
}
