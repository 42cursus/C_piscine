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

typedef unsigned int	t_uint;

/**
 * In this example: `&(char){r + ascii_zero}`,
 * we create a "compound literal" `(char){r + ascii_zero}` which creates
 * an "anonymous variable" of type char and `&` is used to get its address.
 * Then we use this address to pass it as an argument to a `write` function.
 */
static void	ft_putnbr(int nb)
{
	t_uint			r;
	const char		*base = "0123456789";
	const t_uint	decimal_radix = 10;
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

void	ft_print_combn(int n)
{
	int 		i;
	const int	min = 0;
	const int	max = 10;
	int			int_array[11];

	i = min - 1;
	while (i++ < max + 1)
		int_array[i] = i;
	i = -1;
	while (i++ < n + 1)
	{
		
	}

	ft_putnbr(n);
}