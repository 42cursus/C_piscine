/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:46:32 by abelov            #+#    #+#             */
/*   Updated: 2026/08/24 17:32:25 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <string.h>
#include "c01_test.h"

struct s_input
{
	int *nums;
	int numsSize;
	int *expected;
};

int ft_do_test(struct s_input	*input)
{
	int				check_val;

	ft_print_int_tab(input->nums, input->numsSize, NULL);
	ft_sort_int_tab(input->nums, input->numsSize);
	check_val = memcmp(input->nums, input->expected,
			(sizeof(int) * input->numsSize));
	if (check_val)
	{
		printf("got ");
		ft_print_int_tab(input->nums, input->numsSize, " whilst ");
		ft_print_int_tab(input->expected, input->numsSize, "");
		printf(" was to be expected \n");
	}
	check(!check_val);
	return (0);
}

int	ft_sort_int_tab_test(void)
{
	int				i;
	struct s_input	inputs[] = {
		{
			.nums = (int[]) {42},
			.numsSize = 0,
			.expected = (int[]) {42}
		},
		{
			.nums = (int[]) {42},
			.numsSize = 1,
			.expected = (int[]) {42}
		},
		{
			.nums = (int[]) {-2, -1, 0, 1, 2},
			.numsSize = 5,
			.expected = (int[]) {-2, -1, 0, 1, 2}
		},
		{
			.nums = (int[]) {2, 1, 0, -1, -2},
			.numsSize = 5,
			.expected = (int[]) {-2, -1, 0, 1, 2}
		},
		{
			.nums = (int[]) {3, -1, 3, 0, -1, 3},
			.numsSize = 6,
			.expected = (int[]) {-1, -1, 0, 3, 3, 3}
		},
		{
			.nums = (int[]) {INT_MAX, 0, INT_MIN, -1, INT_MAX},
			.numsSize = 5,
			.expected = (int[]) {INT_MIN, -1, 0, INT_MAX, INT_MAX}
		}
	};

	ft_print_title("ft_sort_int_tab_test");
	i = -1;
	while (++i < (int) (sizeof(inputs) / sizeof(inputs[0])))
		ft_do_test(&inputs[i]);
	return (0);
}
