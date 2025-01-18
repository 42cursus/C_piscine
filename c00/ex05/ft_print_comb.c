/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:44:45 by abelov            #+#    #+#             */
/*   Updated: 2023/10/05 19:00:11 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

#define ARRAY_SIZE 3

static bool	ft_arrcmp(const int *curr, const int *max, int array_size)
{
	int	i;

	i = -1;
	while (i++ < (array_size - 1))
		if (curr[i] != max[i])
			return (false);
	return (true);
}

/**
 * how-to-access-members-of-a-struct-according-to-a-variable-integer-in-c:
 * https://stackoverflow.com/questions/887852/
 */
static void	printout(const int *curr, const int *max)
{
	int			i;
	const char	*base = "0123456789";

	i = -1;
	while (i++ < 2)
		write(STDOUT_FILENO, &base[curr[i]], 1);
	if (!ft_arrcmp(curr, max, ARRAY_SIZE))
		write(STDOUT_FILENO, ", ", 2);
}

/**
 * @see: https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf
 * 	6.5.2.5 Compound literals
 *
 * In example: `&(char){r + ascii_zero}`, we create a "compound literal"
 * which creates an "anonymous variable" of type char and `&` is used
 * to get its address.
 * Then we can use this address to pass it as an argument to a `write` function.
 */
void	ft_print_comb(void)
{
	int			*curr;
	int const	*max = (int []){7, 8, 9};

	curr = (int [ARRAY_SIZE]){0};
	curr[0] = -1;
	while (curr[0]++ < max[0])
	{
		curr[1] = curr[0];
		while (curr[1]++ < max[1])
		{
			curr[2] = curr[1];
			while (curr[2]++ < max[2])
				printout(curr, max);
		}
	}
}
