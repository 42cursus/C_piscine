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

static void	printout(int i, int j)
{
	char		buf[5];
	const char	*base = "0123456789";

	buf[0] = base[i / 10];
	buf[1] = base[i % 10];
	buf[2] = ' ';
	buf[3] = base[j / 10];
	buf[4] = base[j % 10];
	write(STDOUT_FILENO, &buf, 5);
	if (i == g_left_max_value && j == g_right_max_value)
		return ;
	write(STDOUT_FILENO, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (i++ < g_left_max_value)
	{
		j = i;
		while (j++ < g_right_max_value)
			printout(i, j);
	}
}
