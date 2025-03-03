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
	size_t	size;
	long	i;
	int		*array;

	i = 0;
	array = ft_range(pos.min, pos.max);
	size = ft_range_array_size(pos.min, pos.max);
	while (i < 5 && array)
		printf("%d,", array[i++]);
	printf("\n\"%zu\"\n", size);
	printf("\n=============\n");
	free(array);
	size = ft_ultimate_range(&array, pos.min, pos.max);
	i = 0;
	while (i < 5 && array)
		printf("%d,", array[i++]);
	printf("\n\"%zu\"\n", size);
	printf("\n=============\n");
	ptr = (char *)"this*is**my***string";
	new = ft_split(ptr, (char *)"*");
	printf("%s\n%s\n%s\n", new[0], new[1], new[3]);
	ft_free_tab((void **) new, ft_get_tab_size((void **) new));
}
