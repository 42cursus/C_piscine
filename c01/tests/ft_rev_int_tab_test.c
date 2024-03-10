/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:21:47 by abelov            #+#    #+#             */
/*   Updated: 2023/10/10 19:02:26 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c01_test.h"
#include <stdio.h>
#define ARRAY_SIZE (10)

void	printarray1(int *array, int size, int pos)
{
	if(pos < size)
	{
		printarray1(array, size, pos + 1);
		printf("%d%s", array[size - pos - 1], pos ? " ": "");
	}
}

void	printarray(int *array, int size)
{
	printf("[");
	printarray1(array, size, 0);
	printf("]\n");
}

int	ft_rev_int_tab_test(void)
{

	int	size = ARRAY_SIZE;
	//int	tab[ARRAY_SIZE] = {9, 3 ,7, 1};
	int	tab[ARRAY_SIZE] = {1,2,3,4,5,6,7,8,9 , 0};

	printarray(tab, size);
	ft_rev_int_tab(tab, size);
	printarray(tab, size);
	return (0);
}
