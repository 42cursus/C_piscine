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
#include <limits.h>

void	ft_print_alphabet(void)
{
	int			i;
	char		letter;
	char		buf[CHAR_MAX];
	const char	begin = 'a';
	const char	end = 'z';

	i = 0;
	letter = begin;
	while (letter <= end)
		buf[i++] = letter++;
	buf[i] = '\0';
	write(STDOUT_FILENO, buf, i);
}
