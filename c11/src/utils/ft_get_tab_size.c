/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tab_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:16:45 by abelov            #+#    #+#             */
/*   Updated: 2024/05/23 05:21:37 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11_tests.h"

size_t ft_get_tab_size(void **tab)
{
	t_uint	*const size = (t_uint[]){0};

	while (*tab && ++(*size))
		tab++;
	return (*size);
}
