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

static void	printout(int i, int j)
{
	char				buf[5];
	const char			*base = "0123456789";
	static const int	left_max_value = 98;
	static const int	right_max_value = 99;

	buf[0] = base[i / 10];
	buf[1] = base[i % 10];
	buf[2] = ' ';
	buf[3] = base[j / 10];
	buf[4] = base[j % 10];
	write(STDOUT_FILENO, &buf, 5);
	if (i == left_max_value && j == right_max_value)
		return ;
	write(STDOUT_FILENO, ", ", 2);
}

void	ft_print_comb2(void)
{
	int					i;
	int					j;
	static const int	left_max_value = 98;
	static const int	right_max_value = 99;

	i = -1;
	while (i++ < left_max_value)
	{
		j = i;
		while (j++ < right_max_value)
			printout(i, j);
	}
}
