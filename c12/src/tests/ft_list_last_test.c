/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_list_last_test(void)
{
	t_list	*l;

	ft_print_title("ft_list_last_test");
	l =  NULL;
	/* 1 */ check(ft_list_last(l) == 0);
	ft_list_push_back(&l, (void *)1);
	/* 2 */ check(ft_list_last(l)->data == (void *)1);
	ft_list_push_back(&l, (void *)2);
	/* 3 */ check(ft_list_last(l)->data == (void *)2);
	/* 4 */ check(ft_list_last(l)->next == 0);
	printf("\n");
	fflush(stdout);
	return (0);
}
