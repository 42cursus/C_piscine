/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:31:52 by abelov            #+#    #+#             */
/*   Updated: 2023/10/23 15:48:11 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>
#include "libft.h"

typedef struct s_pos
{
	int	min;
	int	max;
}	t_pos;

void	test1(t_pos	pos);

int	main(void)
{
	char		*str;
	const t_pos	pos = {.min = INT_MIN, . max = INT_MAX};
	const char	*strs[3] = {"one", "", "three"};

	str = ft_strjoin(3, strs, ",");
	printf(" \"%s\"\n", str);
	test1(pos);
	return (0);
}

void	test1(t_pos	pos)
{
	char	*ptr;
	char	**new;
	int		size;
	long	i;
	int		*array;

	i = 0;
	array = ft_range(pos.min, pos.max);
	size = ft_range_ary_size(pos.min, pos.max);
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
