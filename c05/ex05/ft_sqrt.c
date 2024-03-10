/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:13:32 by abelov            #+#    #+#             */
/*   Updated: 2023/10/19 19:00:18 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_rec(long guess, int nb)
{
	const long	result = guess * guess;

	if (result > nb)
		return (0);
	else if (result == nb)
		return (guess);
	else
		return (ft_sqrt_rec(guess + 1, nb));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_rec(1, nb));
}
