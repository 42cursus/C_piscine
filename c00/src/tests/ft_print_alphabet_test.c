/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_test.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:31:15 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 02:31:17 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"

int	ft_print_alphabet_test(void)
{
	ft_print_title("ft_print_alphabet_test");
	ft_print_alphabet();
	printf("\n");
	fflush(stdout);
	return (0);
}
