/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_list_size_test(void)
{
	t_list	*l;

	ft_print_title("ft_list_size_test");
	l = NULL;
	check(ft_list_size(l) == 0);
	ft_list_push_front(&l, (void *)1);
	check(ft_list_size(l) == 1);
	ft_list_push_front(&l, (void *)2);
	check(ft_list_size(l) == 2);
	printf("\n");
	ft_list_clear(l, NULL);
	return (0);
}
