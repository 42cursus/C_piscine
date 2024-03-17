/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:46:39 by abelov            #+#    #+#             */
/*   Updated: 2023/10/05 22:43:17 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static const int	g_left_max_value = 98;
static const int	g_right_max_value = 99;

void	printout(int i, int j)
{
	char	buf[8];
	int		num_to_print;

	buf[0] = i / 10 + '0';
	buf[1] = i % 10 + '0';
	buf[2] = ' ';
	buf[3] = j / 10 + '0';
	buf[4] = j % 10 + '0';
	buf[5] = ',';
	buf[6] = ' ';
	buf[7] = '\0';
	if (i == g_left_max_value && j == g_right_max_value)
		num_to_print = 5;
	else
		num_to_print = 7;
	write(STDOUT_FILENO, &buf, num_to_print);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= g_left_max_value)
	{
		j = i + 1;
		while (j <= g_right_max_value)
		{
			printout(i, j);
			j++;
		}
		i++;
	}
}
