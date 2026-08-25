/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 04:19:03 by abelov            #+#    #+#             */
/*   Updated: 2026/08/25 02:13:53 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11_tests.h"

static int	ft_int_cmp(int x, int y)
{
	return ((x > y) - (x < y));
}

static int	ft_reverse_int_cmp(int x, int y)
{
	return (ft_int_cmp(y, x));
}

static int	ft_do_test(t_is_sort_input *input)
{
	int	check_val;

	ft_print_int_tab(input->nums, input->nums_size, NULL);
	check_val = ft_is_sort(input->nums, input->nums_size, input->cmp);
	if (check_val != input->expected)
		printf("got \"%d\" whilst \"%d\" was to be expected\n",
			check_val, input->expected);
	check(check_val == input->expected);
	return (0);
}

static void	ft_init_inputs(t_is_sort_input *inputs)
{
	inputs[0] = (t_is_sort_input){NULL, 0, true, ft_int_cmp};
	inputs[1] = (t_is_sort_input){ft_range(42, 43), 1, true, ft_int_cmp};
	inputs[2] = (t_is_sort_input){ft_range(-2, 3), 5, true, ft_int_cmp};
	inputs[3] = (t_is_sort_input){ft_range(-2, 3), 5, true, ft_int_cmp};
	inputs[3].nums[2] = inputs[3].nums[1];
	inputs[4] = (t_is_sort_input){ft_range(-2, 3), 5, false, ft_int_cmp};
	ft_rev_int_tab(inputs[4].nums, inputs[4].nums_size);
	inputs[5] = (t_is_sort_input){ft_range(-2, 3), 5, true,
		ft_reverse_int_cmp};
	ft_rev_int_tab(inputs[5].nums, inputs[5].nums_size);
	inputs[6] = (t_is_sort_input){ft_range(1, 3), 2, false, NULL};
}

int	ft_is_sort_test(void)
{
	int				i;
	t_is_sort_input	inputs[7];

	ft_print_title("ft_is_sort_test");
	ft_init_inputs(inputs);
	i = -1;
	while (++i < (int)(sizeof(inputs) / sizeof(inputs[0])))
	{
		ft_do_test(&inputs[i]);
		free(inputs[i].nums);
	}
	return (0);
}
