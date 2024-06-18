/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_foreach.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:12:33 by abelov            #+#    #+#             */
/*   Updated: 2024/06/18 22:59:55 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Function ft_foreach applies a function on all elements of the given array.
 * This function will be applied following the array’s order.
 */
void	ft_tab_foreach(void **tab, size_t tab_size, void (*f)(void *, void *), void *ref)
{
	int	i;

	i = 0;
	if (!tab || !tab_size)
		return ;
	while (i < tab_size)
		f(tab[i++], ref);
}
