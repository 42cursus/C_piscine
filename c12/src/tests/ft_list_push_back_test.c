/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_list_push_back_test(void)
{
	t_list	*l;
	t_list	*l2;

	ft_print_title("ft_list_push_back_test");
	l =  NULL;
	l2 =  NULL;
	ft_list_push_back(&l, (void *)1);
	/* 1 */ check(l->data == (void *)1);
	/* 2 */ check(l->next == 0);

	ft_list_push_back(&l, (void *)2);
	/* 3 */ check(l->data == (void *)1);
	/* 4 */ check(((t_list *)(l->next))->data == (void *)2);
	/* 5 */ check(((t_list *)(l->next))->next == 0);

	ft_list_push_back(&l2, (void *)3);
	ft_list_push_back(&l2, (void *)4);
	ft_list_append(&l, l2);
	/* 6 */ check(l->data == (void *)1);
	/* 7 */ check(((t_list *)(l->next))->data == (void *)2);
	/* 8 */ check(((t_list *)(((t_list *)(l->next))->next))->data == (void *)3);
	/* 9 */ check(((t_list *)((t_list *)(((t_list *)(l->next))->next))->next)->data == (void *)4);
	/* 10 */ check(((t_list *)((t_list *)(((t_list *)(l->next))->next))->next)->next == 0);
	printf("\n");
	fflush(stdout);
	return (0);
}
