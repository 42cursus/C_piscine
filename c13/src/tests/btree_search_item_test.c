/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:05:18 by abelov            #+#    #+#             */
/*   Updated: 2025/03/03 21:10:40 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

int intcmp(void *p, void *q)
{
	const int a = FT_PTR_TO_INT(p);
	const int b = FT_PTR_TO_INT(q);
	return (a > b) - (a < b);
}

static int ft_do_test(t_input_search *input)
{
	t_btree	*root;
	t_btree	*ans;
	int		*result;
	int		resultSize;
	int		check_val;

	ft_print_int_tab_null(input->nums, input->numsSize, null, NULL);
	root = ft_deserialize_level_order(input->nums, input->numsSize);
	ans = btree_search_item(root, FT_INT_TO_PTR(input->val), intcmp);
	result = ft_serialize_level_order(ans, &resultSize);
	check_val = (resultSize == input->expectedSize);
	if (!check_val)
	{
		printf("got \"%d\" whilst \"%d\" was to be expected\n",
			   resultSize, input->expectedSize);
	}
	else if (resultSize != 0)
	{
		check_val = !ft_memcmp(result,
							input->expected,
							(sizeof(int) * input->expectedSize));
		if (!check_val)
		{
			printf("got ");
			ft_print_int_tab_null(result, resultSize, null, " whilst ");
			ft_print_int_tab_null(input->expected, input->expectedSize, null, "");
			printf(" was to be expected \n");
		}
	}
	check(check_val);
	free(result);
	btree_destroy(root, NULL);
	return (0);
}

int btree_search_item_test(void)
{
	int i;
	t_input_search inputs[] = {
		{
			.nums = (int[5]) {4,2,7,1,3},
			.numsSize = 5,
			.val = 2,
			.expected = (int[3]) {2,1,3},
			.expectedSize = 3
		},
		{
			.nums = (int[5]) {4,2,7,1,3},
			.numsSize = 5,
			.val = 5,
			.expected = (int[1]) {},
			.expectedSize = 0
		}
	};
	size_t inputs_size = (sizeof(inputs) / sizeof(inputs[0]));

	ft_print_title("btree_search_item_test");
	i = -1;
	while (++i < (int) inputs_size)
		ft_do_test(&inputs[i]);
	return (0);
}
