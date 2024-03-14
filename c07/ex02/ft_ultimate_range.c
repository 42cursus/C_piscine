/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:03:15 by abelov            #+#    #+#             */
/*   Updated: 2023/10/23 16:03:17 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_range_array_size(int start, int end)
{
	long	size;

	size = 0;
	if (start >= end)
		return (-1);
	else
		size = (long)end - (long)start;
	return (size);
}

static int	*ft_range(int min, int max)
{
	int	*ary;
	int	i;
	int	ary_size;

	i = 0;
	ary = NULL;
	ary_size = ft_range_array_size(min, max);
	if (ary_size <= 0)
		return (NULL);
	ary = (int *)malloc (sizeof(int) * ary_size - 1);
	if (!ary)
		return (NULL);
	while (min < max)
		ary[i++] = min++;
	return (ary);
}

/*
 *  The ft_ultimate_range() function allocates and assigns an array of ints.
 *  Int array contains all values between min and max:
 *  Min included - max excluded.
 *  Returns size of range (or -1 on error). If the value of min is greater
 *  or equal to max’s value, range will point on NULL and return is 0.
 */
int	ft_ultimate_range(int **range, int min, int max)
{
	long const	size = (long)max - (long)min;

	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (range == NULL)
		return (-1);
	return (size);
}
