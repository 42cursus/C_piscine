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

int	ft_range_ary_size(int start, int end)
{
	long	size;

	size = 0;
	if (start >= end)
		return (-1);
	else
		size = (end - start);
	return (size);
}

int	*ft_range(int min, int max)
{
	int	*ary;
	int	i;
	int	ary_size;

	i = 0;
	ary = NULL;
	ary_size = ft_range_ary_size(min, max);
	if (ary_size <= 0)
		return (NULL);
	ary = (int *)malloc (sizeof(int) * ary_size - 1);
	if (!ary)
		return (NULL);
	while (min < max)
		ary[i++] = min++;
	return (ary);
}
