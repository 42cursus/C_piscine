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

static const int	g_min_hundred = 0;
static const int	g_max_hundred = 7;
static const int	g_max_tens = 8;
static const int	g_max_units = 9;

typedef struct s_int_triplet {
	int	i;
	int	j;
	int	k;
}	t_int_triplet;

/**
 * how-to-access-members-of-a-struct-according-to-a-variable-integer-in-c:
 * https://stackoverflow.com/questions/887852/
 */
static void	printout(t_int_triplet triplet)
{
	int			i;
	const char	*base = "0123456789";

	i = -1;
	while (i++ < 2)
		write(STDOUT_FILENO, &base[*((int *)&triplet + i)], 1);
	if (triplet.i == g_max_hundred
		&& triplet.j == g_max_tens && triplet.k == g_max_units)
		return ;
	write(STDOUT_FILENO, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = g_min_hundred - 1;
	while (i++ <= g_max_hundred)
	{
		j = i;
		while (j++ <= g_max_tens)
		{
			k = j;
			while (k++ < g_max_units)
				printout((t_int_triplet){i, j, k});
		}
	}
}
