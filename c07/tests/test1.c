/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:11:41 by abelov            #+#    #+#             */
/*   Updated: 2024/03/11 22:11:42 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c07_tests.h"

void	test1(t_pos	pos)
{
	char	*ptr;
	char	**new;
	int		size;
	long	i;
	int		*array;

	i = 0;
	array = ft_range(pos.min, pos.max);
	size = ft_range_array_size(pos.min, pos.max);
	while (i < 5 && array)
		printf("%d,", array[i++]);
	printf("\n\"%d\"\n", size);
	printf("\n=============\n");
	if (array)
		memset(array, 0, size);
	i = 0;
	size = 0;
	size = ft_ultimate_range(&array, pos.min, pos.max);
	while (i < 5 && array)
		printf("%d,", array[i++]);
	printf("\n\"%d\"\n", size);
	printf("\n=============\n");
	ptr = "this*is**my***string";
	new = ft_split(ptr, "*");
	printf("%s\n%s\n%s\n", new[0], new[1], new[3]);
}
