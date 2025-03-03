/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:28:55 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 00:28:55 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_create_elem_test(void)
{
	t_list	*l;

	ft_print_title("ft_create_elem_test");
	l = ft_create_elem((void *)42);
	check(l->data == (void *)42);
	check(l->next == 0);
	printf("\n");
	ft_list_clear(l, NULL);
	return (0);
}
