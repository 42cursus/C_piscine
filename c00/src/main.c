/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:34:05 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 02:34:06 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include <signal.h>
#include <stdlib.h>
#include "c00_tests.h"

void	check(bool succes)
{
	if (succes)
		printf("> "FT_GREEN".OK "FT_RESET"\n");
	else
		printf("> "FT_RED".KO "FT_RESET"\n");
}

void sigsegv(int signal)
{
	(void) signal;
	printf("> "FT_CYAN".SIGSEGV"FT_RESET"\n");
	exit(EXIT_FAILURE);
}

int	main(void)
{
	setbuf(stdout, NULL);
	signal(SIGSEGV, sigsegv);

	ft_putchar_test();
	ft_print_alphabet_test();
	ft_print_reverse_alphabet_test();
	ft_print_numbers_test();
	ft_is_negative_test();
	ft_print_comb_test();
	ft_print_comb2_test();
	ft_putnbr_test();
	ft_print_combn_test();
	return (EX_OK);
}
