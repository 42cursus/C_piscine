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
#include <signal.h>
#include "c12_tests.h"

void sigsegv(int signal)
{
	(void)signal;
	printf("> %s%s%s\n", FT_CYAN, ".SIGSEGV", FT_RESET);
	exit(EXIT_SUCCESS);
}

void check(bool succes)
{
	if (succes)
		printf("> %s%s%s\n", FT_GREEN, ".OK ", FT_RESET);
	else
		printf("> %s%s%s\n", FT_RED, ".KO ", FT_RESET);
}

int	main(void)
{
	signal(SIGSEGV, sigsegv);

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
