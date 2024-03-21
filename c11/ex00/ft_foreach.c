/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:12:33 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 22:12:33 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function ft_foreach applies a function on all elements of the given array.
 * This function will be applied following the array’s order.
 */
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	if (!tab || !length)
		return ;
	while (i < length)
		f(tab[i++]);
}
