/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:08:46 by abelov            #+#    #+#             */
/*   Updated: 2024/03/27 01:02:19 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/**
 * removes from the list, all elements whose data compared to data_ref
 * using cmp, makes cmp return 0.
 */
void	ft_list_remove_if(t_list **list, void *data_ref,
							int (*cmp)(t_list *, void *),
							void (*del_fun)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!list || !del_fun)
		return ;
	current = *list;
	while (current)
	{
		next = current->next;
		if (!(*cmp)(current->data, data_ref))
		{
			del_fun(current->data);
			free(current);
		}
		current = next;
	}
}
