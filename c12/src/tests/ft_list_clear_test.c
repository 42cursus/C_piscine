/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_list_clear_test(void)
{
	int		i;
	t_list	*l;
	void	(*del_fun)(void *);

	ft_print_title("ft_list_clear_test");
	l = ft_create_elem((void *)malloc(42));
	while (i++ < 10)
		ft_list_push_front(&l, (void *)malloc(1));
	ft_list_clear(l, &free);
	check(l == l);
	printf("\n");
	fflush(stdout);
	return (0);
}
