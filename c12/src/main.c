/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:26:30 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 00:26:31 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include "c12_tests.h"

int	main(void)
{

	ft_create_elem_test();
	ft_list_push_front_test();
	ft_list_size_test();
	ft_list_last_test();
	ft_list_push_back_test();
	ft_list_push_strs_test();
	ft_list_clear_test();
	ft_list_at_test();
	ft_list_reverse_test();
	ft_list_foreach_test();
	ft_list_foreach_if_test();
	ft_list_find_test();
	ft_list_remove_if_test();
	ft_list_merge_test();
	ft_list_sort_test();
	ft_list_reverse_fun_test();
	ft_sorted_list_insert_test();
	ft_sorted_list_merge_test();
	return (EX_OK);
}
