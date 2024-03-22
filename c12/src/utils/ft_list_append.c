/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:54:53 by abelov            #+#    #+#             */
/*   Updated: 2024/03/22 16:54:53 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

/**
 * Adds the node 'new' at the end of the list.
 */
void	ft_list_append(t_list **begin_list, t_list *new)
{
	t_list	*last;

	if (!begin_list)
		return ;
	if (*begin_list)
	{
		last = ft_list_last(*begin_list);
		last->next = new;
	}
	else
		*begin_list = new;
}
