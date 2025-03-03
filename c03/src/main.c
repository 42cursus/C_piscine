/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:41:50 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 18:41:54 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include <signal.h>
#include "c03_tests.h"

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

int	main(void)
{
	setbuf(stdout, NULL);
	signal(SIGSEGV, sigsegv);

	ft_strcmp_test();
	ft_strncmp_test();
	ft_strcat_test();
	ft_strncat_test();
	ft_strstr_test();
	ft_strlcat_test();
	return (EX_OK);
}
