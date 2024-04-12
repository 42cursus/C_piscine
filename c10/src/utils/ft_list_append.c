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
void	ft_list_append(t_list **list, t_list *new)
{
	t_list	*last;

	if (!list)
		return ;
	if (*list)
	{
		last = ft_list_last(*list);
		last->next = new;
	}
	else
		*list = new;
}
