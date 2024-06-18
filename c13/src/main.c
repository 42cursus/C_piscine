/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:06:37 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 22:06:37 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <sysexits.h>
#include <asm-generic/errno.h>
#include "c13_tests.h"

void	sigsegv(int signal)
{
	(void)signal;
	ft_putstr("> "FT_CYAN".SIGSEGV"FT_RESET"\n");
	exit(EXIT_SUCCESS);
}

void	check(bool succes)
{
	if (succes)
		ft_putstr("> "FT_GREEN".OK "FT_RESET"\n");
	else
		ft_putstr("> "FT_RED".KO "FT_RESET"\n");
}

void	do_init(t_ops *t)
{
	size_t		size;
	static t_test_fun const functions[] = {
			btree_create_node_test,
			btree_apply_prefix_test,
			btree_apply_infix_test,
			btree_apply_suffix_test,
			btree_insert_data_test,
			btree_search_item_test,
			btree_level_count_test,
			btree_apply_by_level_test
	};

	signal(SIGSEGV, sigsegv);
	t->size = sizeof(functions) / sizeof(functions[0]);
	t->functions = functions;
}

int	main(void)
{
	int 		error_code;
	int *const	i = (int[]){0};
	t_ops		test;

	error_code = 0;
	do_init(&test);
	while (*i < (int) test.size && !error_code)
		error_code = test.functions[(*i)++]();
	return (EUSERS);
}
