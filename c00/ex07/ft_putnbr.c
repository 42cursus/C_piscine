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

/**
 * In this example: `&(char){r + ascii_zero}`,
 * we create a "compound literal" `(char){r + ascii_zero}` which creates
 * an "anonymous variable" of type char and `&` is used to get its address.
 * Then we use this address to pass it as an argument to a `write` function.
 */
void	ft_putnbr(unsigned int nb)
{
	const char	*base = "0123456789";
	int			stack[20];
	int			stack_size;

	stack_size = 0;
	if ((int)nb < 0)
		nb = ((void) write(STDOUT_FILENO, "-", 1), nb * -1);
	stack[stack_size++] = (int)nb;
	while (stack_size)
	{
		nb = stack[--stack_size];
		if (nb >= 10)
		{
			stack[stack_size++] = (int)(nb % 10);
			stack[stack_size++] = (int)(nb / 10);
		}
		else
			write(STDOUT_FILENO, &base[nb], 1);
	}
}
