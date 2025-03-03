/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:08:47 by abelov            #+#    #+#             */
/*   Updated: 2024/05/16 00:22:14 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **list1, t_list *list2,
								int (*cmp)(void *, void *))
{
	t_list	dummy;
	t_list	*tail;

	tail = &dummy;
	while (*list1 && list2)
	{
		if ((*cmp)((*list1)->data, list2->data) > 0)
		{
			tail->next = list2;
			list2 = list2->next;
		}
		else
		{
			tail->next = (*list1);
			(*list1) = (*list1)->next;
		}
		tail = tail->next;
	}
	if ((*list1))
		tail->next = (*list1);
	else
		tail->next = list2;
	*list1 = dummy.next;
}
