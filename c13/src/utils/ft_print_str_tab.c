/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:19:55 by abelov            #+#    #+#             */
/*   Updated: 2024/05/23 18:43:34 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c13_tests.h"

void ft_print_str_tab(char **tab, char *eol)
{
	int 		size;
	int *const	pos = (int[]){0};

	size = (int)ft_get_tab_size(tab);
	ft_putstr("[");
	while (*pos < size) {
		ft_putstr("'");
		ft_putstr(tab[(*pos)++]);
		if (*pos != size)
			ft_putstr("', ");
		else
			ft_putstr("'");
	}
	if (!eol)
		ft_putstr("]\n");
	else
	{
		ft_putstr("]");
		ft_putstr(eol);
	}
}
