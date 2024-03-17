/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:30:05 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 02:37:09 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int			i;
	const char	ascii_zero = 0x30;
	const char	ascii_nine = 0x39;

	i = ascii_zero - 1;
	while (++i <= ascii_nine)
		write(1, &i, 1);
}
