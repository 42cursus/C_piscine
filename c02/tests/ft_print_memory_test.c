/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:44:23 by abelov            #+#    #+#             */
/*   Updated: 2024/03/14 20:44:24 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	ft_print_memory_test(void)
{
	char src[0xFF + 10];
	int	i;

	i = 0;
	while (i <= 0xFF)
	{
		src[i] = i;
		i++;
	}
	src[i] = 0;

	i = 0;
	while (i < 30)
		ft_print_memory((void *) src, i++);
	ft_print_memory((void *)src, 0x101);
}
