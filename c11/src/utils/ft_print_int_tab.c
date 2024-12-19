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

#include "c11_tests.h"

void ft_print_int_tab(int tab[], size_t size, char *eol)
{
	int pos;

	pos = 0;
	ft_putstr("[");
	while (pos < size) {
		ft_putnbr(tab[pos++]);
		if (pos != size)
			ft_putstr(", ");
	}
	ft_putstr("]");
	if (!eol)
		ft_putstr("\n");
	else
		ft_putstr(eol);
}
