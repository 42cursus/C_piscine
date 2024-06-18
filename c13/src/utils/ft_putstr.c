/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:30:44 by abelov            #+#    #+#             */
/*   Updated: 2023/10/08 17:28:49 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "c13_tests.h"

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	write(STDOUT_FILENO, str, ft_strlen(str));
}
