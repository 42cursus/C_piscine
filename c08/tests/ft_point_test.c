/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:17:39 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 01:17:40 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c08_tests.h"
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	ft_point_test(void)
{
	t_point	point;

	set_point(&point);
	return (0);
}
