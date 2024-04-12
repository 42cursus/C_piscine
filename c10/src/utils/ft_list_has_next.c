/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_has_next.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:14:41 by abelov            #+#    #+#             */
/*   Updated: 2024/03/26 22:14:42 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_list_has_next(t_list	*list)
{
	int	ret_val;

	ret_val = 0;
	if (list && list->next)
		ret_val = 1;
	return (ret_val);
}
