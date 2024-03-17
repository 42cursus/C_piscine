/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:28:40 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 01:28:43 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c08_tests.h"

int	ft_strs_to_tab_test(void)
{
	t_stock_str	*stock_str;

	stock_str = ft_strs_to_tab(10, NULL);
	ft_show_tab(stock_str);
	return (0);
}
