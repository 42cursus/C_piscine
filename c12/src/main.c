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
	printf("> %s%s%s\n", FT_CYAN, ".SIGSEGV", FT_RESET);
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
static int	cmpstringp(const void *p1, const void *p2)
{
	return (ft_strcmp(*(char *const *) p1, *(char *const *) p2));
}

int	main(void)
{
	int			i;
	int const	tests[] = {11, 10};

	signal(SIGSEGV, sigsegv);
	i = sizeof(tests) / sizeof(tests[0]);
	i = sizeof(g_tests) / sizeof(g_tests[0]);
	while (i--)
		g_tests[i]();
	return (EX_OK);
}
