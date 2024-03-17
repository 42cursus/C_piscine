/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:54:05 by abelov            #+#    #+#             */
/*   Updated: 2023/10/05 22:39:51 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static const char	g_ascii_a = 0x61;
static const char	g_ascii_z = 0x7A;

void	ft_print_alphabet(void)
{
	int	i;

	i = g_ascii_a;
	while (i <= g_ascii_z)
	{
		write(STDOUT_FILENO, &i, 1);
		i++;
	}
}
