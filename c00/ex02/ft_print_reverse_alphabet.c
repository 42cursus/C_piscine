/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:54:06 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 02:40:37 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int			i;
	const char	ascii_a = 0x61;
	const char	ascii_z = 0x7A;

	i = ascii_z + 1;
	while (--i >= ascii_a)
		write(STDOUT_FILENO, &i, 1);
}
