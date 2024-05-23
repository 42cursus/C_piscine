/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:16:26 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 22:16:27 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <sysexits.h>
#include <stdlib.h>
#include "c11_tests.h"

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
		ft_putstr("> "FT_RED".OK "FT_RESET"\n");
}

void	do_init(t_ops *t)
{
	size_t		size;
	static t_test_fun const functions[] = {
		ft_foreach_test,
		ft_map_test,
		ft_any_test,
		ft_count_if_test,
		ft_is_sort_test,
		ft_sort_string_tab_test,
		ft_advanced_sort_string_tab_test
	};

	signal(SIGSEGV, sigsegv);
	t->size = sizeof(functions) / sizeof(functions[0]);
	t->functions = functions;
}

int	main(void)
{
	int *const i = (int[]){0};
	t_ops	test;

	do_init(&test);
	while (*i < (int) test.size)
		test.functions[(*i)++]();
	return (EX_OK);
}
