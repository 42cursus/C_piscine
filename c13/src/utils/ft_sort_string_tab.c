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

#include <stdbool.h>
#include <stddef.h>
#include "c13_tests.h"

int	ft_string_tab_is_sort(char **tab, int (*f)(char *, char *))
{
	int ret_val;

	ret_val = true;
	if (tab && *tab)
	{
		if (!f)
			ret_val = false;
		else
		{
			while (*++tab)
			{

				char *str1 = *(tab - 1);
				char *str2 = *tab;
				if (f(str1, str2) > 0)
				{
					ret_val = false;
					break;
				}
			}
		}
	}
	return (ret_val);
}

/**
 * difference-between-always-inline-and-inline:
 * 	https://stackoverflow.com/questions/20995309/
 * how-do-move-elimination-slots-work-in-intel-cpu:
 * 	https://stackoverflow.com/questions/75204302/
 * See also:
 * 	https://en.wikipedia.org/wiki/XOR_swap_algorithm
 * 	https://chipsandcheese.com/2021/12/21/gracemont-revenge-of-the-atom-cores/
 */
static inline int	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
	return (true);
}

/**
 * Bubble sort
 */
void	ft_sort_string_tab(char **tab)
{
	int			i;
	int			j;
	size_t		size;
	int			swapped;

	size = 0;
	if (tab && *tab && !(*(tab + 1) && ft_string_tab_is_sort(tab, ft_strcmp)))
	{
		while (*tab && ++size)
			tab++;
		tab -= size;
		i = -1;
		while (++i < (int) (size - 1))
		{
			swapped = false;
			j = -1;
			while (++j < (int) (size - i - 1))
			{
				if (ft_strcmp(*(tab + j), *(tab + j + 1)) > 0)
					swapped = ft_swap(tab + j, tab + j + 1);
			}
			if (!swapped)
				break;
		}
	}
}
