/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet_test.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:54:06 by abelov            #+#    #+#             */
/*   Updated: 2023/10/05 20:34:23 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"

int	ft_print_reverse_alphabet_test(void)
{
	ft_print_title("ft_print_reverse_alphabet_test");
	ft_print_reverse_alphabet();
	printf("\n");
	fflush(stdout);
	return (0);
}