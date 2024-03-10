/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:46:32 by abelov            #+#    #+#             */
/*   Updated: 2023/10/09 20:28:20 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "c01_test.h"
#define ARRAY_SIZE (4)

static void printarray1(int *array, int size, int pos)
{
    if(pos < size)
	{
		printarray1(array, size, pos + 1);
		printf("%d%s", array[size - pos - 1], pos ? " ": "");
	}
}

static void printarray(int *array, int size)
{
    printf("[");
	printarray1(array, size, 0);
	printf("]");
}

int	ft_sort_int_tab_test(void)
{
	int	size = ARRAY_SIZE;
	int	tab[ARRAY_SIZE] = {9, 3 ,7, 1};

	ft_print_title("ft_sort_int_tab_test");
	printarray(tab, size);
	ft_sort_int_tab(tab, size);
	printarray(tab, size);
	return (0);
}
