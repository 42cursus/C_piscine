/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:41:42 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 00:41:43 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_list_push_front_test(void)
{
	t_list	*l;

	ft_print_title("ft_list_push_front_test");
	l = NULL;
	ft_list_push_front(&l, (void *)1);
	check(l->data == (void *)1);
	check(l->next == 0);
	ft_list_push_front(&l, (void *)2);
	check(l->data == (void *)2);
	check(((t_list *)l->next)->data == (void *)1);
	check(((t_list *)l->next)->next == 0);
	printf("\n");
	fflush(stdout);
	return (0);
}
