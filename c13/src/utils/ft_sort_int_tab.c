/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:07:27 by abelov            #+#    #+#             */
/*   Updated: 2023/10/19 20:41:48 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * difference-between-always-inline-and-inline:
 * 	https://stackoverflow.com/questions/20995309/
 * How do `move elimination` slots work in Intel CPU:
 * 	https://stackoverflow.com/questions/75204302/
 * See also:
 * 	https://en.wikipedia.org/wiki/XOR_swap_algorithm
 * 	https://chipsandcheese.com/2021/12/21/gracemont-revenge-of-the-atom-cores/
 */
static inline
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/**
 * Bubble sort
 */
void	ft_sort_int_tab(int *array, int size)
{
	int	i;
	int	end;
	int	last_swap_pos;

	end = size - 1;
	while (end > 0)
	{
		last_swap_pos = 0;
		i = -1;
		while (++i < end)
		{
			if (array[i] > array[i + 1])
			{
				ft_swap(&array[i], &array[i + 1]);
				last_swap_pos = i;
			}
		}
		end = last_swap_pos;
	}
}
