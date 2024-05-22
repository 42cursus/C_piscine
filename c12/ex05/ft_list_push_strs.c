/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:08:46 by abelov            #+#    #+#             */
/*   Updated: 2024/05/16 00:22:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

static void	ft_list_push_front(t_list **list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	if (!list || !new)
		return ;
	new->next = *list;
	*list = new;
}

/**
 * Creates a new list that includes all string pointed by the element in strs.
 * The first element should be at the end of the list.
 */
t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;

	list = NULL;
	while (size--)
		ft_list_push_front(&list, (void *) *strs++);
	return (list);
}
