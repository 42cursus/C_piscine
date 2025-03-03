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
	int			ac;
	const char	*strs[] = {
		"hey!",
		"ho!",
		"lets",
		"go!"
	};

	ac = sizeof(strs) / sizeof(strs[0]);
	stock_str = ft_strs_to_tab(ac, (char **) strs);
	if (stock_str)
	{
		ft_show_tab(stock_str);
		ft_free_stock_tab(stock_str, ac);
	}
	return (0);
}
