/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:41:33 by abelov            #+#    #+#             */
/*   Updated: 2024/05/23 19:41:34 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c07_tests.h"

void	ft_free_tab(void **tab, size_t size)
{
	while (size--)
		free(tab[size]);
	free(tab);
}
