/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:08:46 by abelov            #+#    #+#             */
/*   Updated: 2024/03/22 18:22:05 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_list.h"

static void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	if (!begin_list || !new)
		return ;
	new->next = *begin_list;
	*begin_list = new;
}

/**
 * Creates a new list that includes all string pointed by the element in strs.
 * The first element should be at the end of the list.
 */
t_list	*ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list	*l;

	l = NULL;
	i = 0;
	while (size--)
		ft_list_push_front(&l, (void *) strs[i++]);
	return (l);
}

