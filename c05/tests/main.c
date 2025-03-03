/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:39:14 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 23:39:15 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include <stdio.h>
#include "c05_test.h"

int	main(int argc, char **argv)
{
	setbuf(stdout, NULL);

	ft_fibonacci_test(argc, argv);
	ft_find_next_prime_test(argc, argv);
	ft_is_prime_test(argc, argv);
	ft_iterative_factorial_test(argc, argv);
	ft_iterative_power_test(argc, argv);
	ft_recursive_factorial_test(argc, argv);
	ft_recursive_power_test(argc, argv);
	ft_sqrt_test(argc, argv);
	ft_ten_queens_puzzle_test();
	return (EX_OK);
}

