/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:39:51 by abelov            #+#    #+#             */
/*   Updated: 2024/03/22 18:22:05 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	if (!list || !new)
		return ;
	new->next = *list;
	*list = new;
}
