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

void	sigsegv(int signal)
{
	(void)signal;
	ft_putstr("> "FT_CYAN".SIGSEGV"FT_RESET"\n");
	exit(EXIT_SUCCESS);
}

void	check(bool succes)
{
	if (succes)
		printf("> %s%s%s\n", FT_GREEN, ".OK ", FT_RESET);
	else
		printf("> %s%s%s\n", FT_RED, ".KO ", FT_RESET);
}

/**
 * The actual arguments to this function are "pointers to
 * pointers to char", but strcmp(3) arguments are "pointers
 * to char", hence the following cast plus dereference
 */
__attribute__((unused)) static
int	cmpstringp(const void *p1, const void *p2)
{
	return (ft_strcmp(*(char *const *) p1, *(char *const *) p2));
}

typedef struct s_ops
{
	size_t size;
	const t_test_fun *tests;
} t_ops;

void	do_init(t_ops *t)
{
	static t_test_fun const	tests[] = {
		ft_create_elem_test,
		ft_list_push_front_test,
		ft_list_size_test,
		ft_list_last_test,
		ft_list_push_back_test,
		ft_list_push_strs_test,
		ft_list_clear_test,
		ft_list_at_test,
		ft_list_reverse_test,
		ft_list_foreach_test,
		ft_list_foreach_if_test,
		ft_list_find_test,
		ft_list_remove_if_test,
		ft_list_merge_test,
		ft_list_sort_test,
		ft_list_reverse_fun_test,
		ft_sorted_list_insert_test,
		ft_sorted_list_merge_test
	};

	signal(SIGSEGV, sigsegv);
	t->size = sizeof(tests) / sizeof(tests[0]);
	t->tests = tests;
}

int	main(void)
{
	int i;
	t_ops	t;

	setbuf(stdout, NULL);
	do_init(&t);
	i = 0;
	while (i < (int) t.size)
		t.tests[i++]();
	return (EX_OK);
}
