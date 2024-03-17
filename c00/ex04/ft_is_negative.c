/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:34:33 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 02:38:00 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	const char	negative = 'N';
	const char	positive = 'P';

	if (n < 0)
		write(1, &negative, 1);
	else
		write(1, &positive, 1);
}
