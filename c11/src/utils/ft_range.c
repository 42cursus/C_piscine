/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:44:39 by abelov            #+#    #+#             */
/*   Updated: 2023/10/20 23:01:42 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_range_array_size(int start, int end)
{
	if (start >= end)
		return (-1);
	return (end - start);
}

int	*ft_range(int min, int max)
{
	int	*int_array;
	int	i;
	int	ary_size;

	i = 0;
	int_array = NULL;
	ary_size = ft_range_array_size(min, max);
	if (ary_size <= 0)
		return (NULL);
	int_array = (int *)malloc (sizeof(int) * ary_size - 1);
	if (!int_array)
		return (NULL);
	while (min < max)
		int_array[i++] = min++;
	return (int_array);
}
