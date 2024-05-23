/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:08:47 by abelov            #+#    #+#             */
/*   Updated: 2024/05/16 00:22:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdbool.h>
#include "ft_list.h"

static int ft_list_swap_data(t_list *left, t_list *right)
{
	void	*tmp;

	tmp = left->data;
	left->data = right->data;
	right->data = tmp;
	return (true);
}

static int	ft_list_size(t_list *list)
{
	int	size;

	if (!list)
		return (0);
	size = 1;
	while (list->next)
	{
		list = list->next;
		size++;
	}
	return (size);
}

/**
 * returns the Nth element of the list,
 * assuming the first element of the list is when nbr equals 0.
 */
static t_list	*ft_list_at(t_list *list, size_t nbr)
{
	if (!nbr)
		return (list);
	if (!list)
		return (NULL);
	while (nbr-- && list->next)
		list = list->next;
	if (!++nbr)
		return (list);
	return (NULL);
}

/**
 * ft_list_reverse_fun:
 * 	reverses the order of the elements of the list.
 */
void	ft_list_reverse_fun(t_list *list)
{
	size_t	i;
	size_t	size;
	t_list	*middle;
	t_list	*left;

	i = -1;
	left = list;
	size = ft_list_size(list);
	middle = ft_list_at(list, size / 2);
	while (++i < size / 2)
	{
		ft_list_swap_data(left, ft_list_at(middle, size/2 - i - 1));
		left = left->next;
	}
}
