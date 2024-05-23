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
#include "ft_list.h"

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

void	ft_list_swap_elem_data(t_list *elem1, t_list *elem2)
{
	void	*p;

	p = elem1->data;
	elem1->data = elem2->data;
	elem2->data = p;
}

/**
 * ft_list_reverse_fun:
 * 	reverses the order of the elements of the list.
 */
void	ft_list_reverse_fun(t_list *list)
{
	size_t	i;
	size_t	size;
	size_t	half_size;
	t_list	*elem1;
	t_list	*elem2;

	i = -1;
	size = ft_list_size(list);
	half_size = size / 2;
	while (++i < half_size) {
		elem1 = ft_list_at(list, i);
		elem2 = ft_list_at(list, size - i - 1);
		ft_list_swap_elem_data(elem1, elem2);
	}
}

//void	ft_rev_int_tab2(int *tab, int size)
//{
//	int	i;
//	int	tmp;
//	int	half_size;
//
//	half_size = size / 2;
//	i = 0;
//	while (i < half_size)
//	{
//		tmp = tab[i];
//		tab[i] = tab[size - i - 1];
//		tab[size - i - 1] = tmp;
//		i++;
//	}
//}
//
//void	ft_rev_int_tab(int *tab, int size)
//{
//	int	*head;
//	int	*tail;
//
//	head = tab;
//	tail = tab + size - 1;
//	while (head <= tail)
//		ft_swap(head++, tail--);
//}