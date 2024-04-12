/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:30:44 by abelov            #+#    #+#             */
/*   Updated: 2024/03/26 23:15:29 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "c12_tests.h"

void	ft_puts(char *str)
{
	if (!str)
		return ;
	write(STDOUT_FILENO, str, ft_strlen(str));
	write(STDOUT_FILENO, "\n", 1);
}
