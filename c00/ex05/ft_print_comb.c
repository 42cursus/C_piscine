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

void	printout(int i, int j, int k)
{
	char				buf[6];
	int					num_to_print;

	buf[0] = i + '0';
	buf[1] = j + '0';
	buf[2] = k + '0';
	buf[3] = ',';
	buf[4] = ' ';
	buf[5] = '\0';
	if (i == g_max_hundred && j == g_max_tens && k == g_max_units)
		num_to_print = 3;
	else
		num_to_print = 5;
	write(STDOUT_FILENO, &buf, num_to_print);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = g_min_hundred;
	while (i <= g_max_hundred)
	{
		j = i + 1;
		while (j <= g_max_tens)
		{
			k = j + 1;
			while (k <= g_max_units)
				printout(i++, j++, k++);
		}
	}
}
