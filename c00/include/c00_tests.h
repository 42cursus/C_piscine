/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c00_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:25:36 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 02:25:37 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C00_TESTS_H
# define C00_TESTS_H
# include "c00.h"
# include <stdio.h>
# include <unistd.h>

# define RED   "\033[0;31m"
# define GREEN "\033[0;32m"
# define CYAN  "\033[36m"
# define RESET "\e[0m"

static void	ft_print_title(char *title)
{
	printf("--------------------------------------------------\n");
	printf("> %s%s%s\n", CYAN, title, RESET);
	printf("--------------------------------------------------\n");
}

int	ft_putchar_test(void);
int	ft_print_alphabet_test(void);
int	ft_print_reverse_alphabet_test(void);
int	ft_print_numbers_test(void);
int	ft_is_negative_test(void);
int	ft_print_comb_test(void);
int	ft_print_comb2_test(void);
int	ft_putnbr_test(void);
int	ft_print_combn_test(void);

#endif //C00_TESTS_H
