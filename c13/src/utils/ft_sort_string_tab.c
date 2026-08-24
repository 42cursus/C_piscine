/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 05:51:59 by abelov            #+#    #+#             */
/*   Updated: 2024/05/22 05:52:01 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "c13_tests.h"

/**
 * difference-between-always-inline-and-inline:
 * 	https://stackoverflow.com/questions/20995309/
 * how-do-move-elimination-slots-work-in-intel-cpu:
 * 	https://stackoverflow.com/questions/75204302/
 * See also:
 * 	https://en.wikipedia.org/wiki/XOR_swap_algorithm
 * 	https://chipsandcheese.com/2021/12/21/gracemont-revenge-of-the-atom-cores/
 */
static inline
void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/**
 * Bubble sort
 */
void	ft_sort_string_tab_fun(char **tab, int (*cmp)(char *, char *))
{
	size_t	j;
	size_t	size;
	size_t	end;
	size_t	last_swap_pos;

	if (!tab || !*tab || !cmp)
		return ;
	size = 0;
	while (tab[size])
		size++;
	end = size - 1;
	while (end > 0)
	{
		last_swap_pos = 0;
		j = (size_t)(-1);
		while (++j < end)
		{
			if (cmp(tab[j], tab[j + 1]) <= 0)
				continue ;
			ft_swap(tab + j, tab + j + 1);
			last_swap_pos = j;
		}
		end = last_swap_pos;
	}
}

void	ft_sort_string_tab(char **tab)
{
	ft_sort_string_tab_fun(tab, (int (*)(char *, char *)) ft_strcmp);
}
