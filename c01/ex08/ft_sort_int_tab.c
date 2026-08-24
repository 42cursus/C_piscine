/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:07:27 by abelov            #+#    #+#             */
/*   Updated: 2026/08/24 17:32:25 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Bubble sort
 */
void	ft_sort_int_tab(int *array, int size)
{
	int	i;
	int	tmp;
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
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				last_swap_pos = i;
			}
		}
		end = last_swap_pos;
	}
}
