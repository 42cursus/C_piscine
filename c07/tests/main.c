/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:31:52 by abelov            #+#    #+#             */
/*   Updated: 2023/10/23 15:48:11 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "c07_tests.h"

int	main(void)
{
	char		*str;
	const t_pos	pos = {.min = INT_MIN, . max = INT_MAX};
	const char	*strs[3] = {"one", "", "three"};

	str = ft_strjoin(3, strs, ",");
	printf(" \"%s\"\n", str);
	test1(pos);
	return (0);
}
