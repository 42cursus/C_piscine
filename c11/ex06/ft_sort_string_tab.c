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

/**
 * Compares s1 and s2, returning less than, equal to or greater than zero
 * if s1 is lexicographically less than, equal to or greater than s2.
 *
 * POSIX.1 specifies only that:
 *		  The sign of a nonzero return value shall be determined by
 *		  the sign of the difference between the values of the first
 *		  pair of bytes (both interpreted as type unsigned char)
 *		  that differ in the strings being compared.
 * Note:
 * 		In glibc, as in most other implementations,
 * 		the return value is the arithmetic result of subtracting
 * 		the last compared byte in s2 from the last compared byte in s1.
 * 		(If the two characters are equal, this difference is 0.)
 */
static
int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2++)
		if (*s1++ == 0)
			return (0);
	return (*(const unsigned char *)s1 - *(const unsigned char *)--s2);
}

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

void	ft_sort_string_tab(char **tab)
{
	ft_advanced_sort_string_tab(tab, (int (*)(char *, char *)) ft_strcmp);
}
