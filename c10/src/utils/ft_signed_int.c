/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signed_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:49:35 by abelov            #+#    #+#             */
/*   Updated: 2024/03/27 22:49:36 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_signed_int(t_uint value)
{
	if (value <= INT_MAX)
		return ((int)value);
	else
		return (0);
}
