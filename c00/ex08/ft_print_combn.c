/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:13:05 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 03:13:06 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

#define ARRAY_SIZE 10

/**
 * Compares two equal-sized integer int_arrays
 */
static bool	ft_arrcmp(const int *curr, const int *max_val, int int_array_size)
{
	int	i;

	i = -1;
	while (++i < int_array_size)
		if (curr[i] != max_val[i])
			return (false);
	return (true);
}

/**
 * how-to-access-members-of-a-struct-according-to-a-variable-integer-in-c:
 * https://stackoverflow.com/questions/887852/
 */
static void	printout(const int *int_array, const int *max, int int_array_size)
{
	int			i;
	char		buf[ARRAY_SIZE];
	const char	*base = "0123456789";

	i = -1;
	while (i++ < (int_array_size - 1))
		buf[i] = base[int_array[i]];
	write(STDOUT_FILENO, buf, int_array_size);
	if (!ft_arrcmp(int_array, max, int_array_size))
		write(STDOUT_FILENO, ", ", 2);
}

int	increment(int *int_array, const int *max_val, int int_array_size)
{
	int	i;
	int	n;

	n = int_array_size;
	while (--n)
	{
		if (int_array[n] == max_val[n])
		{
			if (int_array[n - 1] != max_val[n - 1])
			{
				i = n - 1;
				int_array[i]++;
				while (++i < int_array_size)
					int_array[i] = int_array[i - 1] + 1;
				return (true);
			}
			int_array[n] = int_array[n - 1] + 1;
		}
	}
	return (false);
}

/**
 * Chapter XI
 * Exercise 08: ft_print_combn
 *
 * Allowed functions : write
 * Create a function that displays all different combinations of n numbers
 * by ascending order.
 *
 * Constrains:
 * 	 0 < n < 10
 */
void	ft_print_combn(const int n)
{
	int	i;
	int	n1;
	int	int_array[ARRAY_SIZE];
	int	max_val[ARRAY_SIZE];

	i = 9;
	n1 = n;
	while (n1--)
	{
		int_array[n1] = n1;
		max_val[n1] = i--;
	}
	i = n - 1;
	printout(int_array, max_val, n);
	while (!ft_arrcmp(int_array, max_val, n))
	{
		while ((int_array[i] < max_val[i]) && ++int_array[i])
			printout(int_array, max_val, n);
		if (increment(int_array, &max_val[0], n))
			printout(int_array, max_val, n);
	}
}
