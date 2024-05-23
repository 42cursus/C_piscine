/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 04:09:44 by abelov            #+#    #+#             */
/*   Updated: 2024/05/22 04:09:45 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

/**
 * returns 1 if the array is sorted and 0 if it isn't
 */
int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if(!tab || !length)
		return (true);
	if(!f)
		return (false);
	while(--length)
		if(f(tab[length - 1], tab[length]) < 0)
			return (false);
	return (true);
}
