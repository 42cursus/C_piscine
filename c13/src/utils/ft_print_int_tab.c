/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:19:55 by abelov            #+#    #+#             */
/*   Updated: 2024/05/23 18:19:56 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

void ft_print_int_tab(int tab[], size_t size, char *eol)
{
	size_t *const pos = (size_t[]){0};

	ft_putstr("[");
	while (*pos < size) {
		ft_putnbr(tab[(*pos)++]);
		if (*pos != size)
			ft_putstr(", ");
	}
	if (!eol)
		ft_putstr("]\n");
	else
	{
		ft_putstr("]");
		ft_putstr(eol);
	}
}

void ft_print_int_tab_null(int tab[], size_t size, int nil, const char *eol)
{
	size_t pos;
	int val;

	pos = 0;
	printf("[");
	if (pos < size)
	{
		val = tab[pos++];
		if (val == nil)
			printf("%s", "null");
		else
			printf("%d", val);
	}
	while (pos < size)
	{
		val = tab[pos++];
		if (val == nil)
			printf(", %s", "null");
		else
			printf(", %d", val);
	}
	printf("]%s", (!eol) ? "\n" : eol);
}

