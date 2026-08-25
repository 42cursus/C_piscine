/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 05:53:03 by abelov            #+#    #+#             */
/*   Updated: 2024/05/22 05:53:04 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
