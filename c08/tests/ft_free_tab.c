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

#include "c08_tests.h"

void	ft_free_tab(void **tab, size_t size)
{
	while (size--)
		free(tab[size]);
	free(tab);
}

void	ft_free_stock_tab(t_stock_str *tab, size_t size)
{
	while (size--)
		free(tab[size].copy);
	free(tab);
}
