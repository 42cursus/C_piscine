/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:13:05 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 03:13:06 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

/**
 * In this example: `&(char){r + ascii_zero}`,
 * we create a "compound literal" `(char){r + ascii_zero}` which creates
 * an "anonymous variable" of type char and `&` is used to get its address.
 * Then we use this address to pass it as an argument to a `write` function.
 */
static void	ft_putnbr(int nb)
{
	char			c;
	unsigned int	r;
	const int		ascii_zero = '0';
	const size_t	decimal_radix = 10;
	int const		mask = nb >> (sizeof(int) * CHAR_BIT - 1);

	r = (nb + mask) ^ mask;
	if (nb < 0)
		write(STDOUT_FILENO, "-", 1);
	if (r >= decimal_radix)
	{
		ft_putnbr(r / decimal_radix);
		c = (r % decimal_radix) + ascii_zero;
		write(STDOUT_FILENO, &c, 1);
	}
	if (r < decimal_radix)
		write(STDOUT_FILENO, &(char){r + ascii_zero}, 1);
}

void	ft_print_combn(int n)
{
	ft_putnbr(n);
}