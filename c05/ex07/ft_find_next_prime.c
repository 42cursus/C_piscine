/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:11:39 by abelov            #+#    #+#             */
/*   Updated: 2023/10/19 21:52:19 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

/*
 * https://en.m.wikipedia.org/wiki/Primality_test
 */
static int	ft_is_prime(int nb)
{
	long	i;

	i = 5;
	if (nb == 2 || nb == 3)
		return (true);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (false);
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (false);
		i += 6;
	}
	return (true);
}

int	ft_find_next_prime(int nb)
{
	long	i;

	if (nb < 2)
		return (2);
	i = nb - 1;
	while (++i < 2 * nb)
		if (ft_is_prime(i))
			return (i);
	return (0);
}
