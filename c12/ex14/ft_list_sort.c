/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:08:46 by abelov            #+#    #+#             */
/*   Updated: 2024/05/16 00:22:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/**
 * Swapping two nodes usually takes five operations:
 * 	   Change the node one back from the first node to point to the second node.
 * 	   Change the node one back from the second node to point to the first node.
 * 	   Store the first node's next pointer in a temporary pointer.
 * 	   Change the first node's next pointer to the second node's next pointer.
 * 	   Change the second node's next pointer to the temporary pointer.
 * Swapping two variables takes at least three operations:
 *     Store the first variable in a temporary variable.
 *     Change the first variable to the second variable.
 *     Change the second variable to the first variable.
 * See also:
 * 	Sorting a linked list via copying its values or via relinking the nodes
 * 		https://cs.stackexchange.com/questions/117557/
 * 	Sorting Linked Lists - move nodes or swap data members
 * 		https://stackoverflow.com/questions/37475405/
 */
static void	ft_list_swap(t_list *parent1, t_list *parent2)
{
	t_list *ptr;
	t_list *first;
	t_list *second;

	first = parent1->next;
	second = parent2->next;
	parent1->next = second;
	parent2->next = first;

	ptr = first->next;
	first->next = second->next;
	second->next = ptr;
}

/**
 * `ft_list_sort` sorts the list's elements by ascending order
 * 	by comparing two elements by comparing their data with a function.
 *
 * 	Hint:
 * 		function argument is a double pointer that implies that we are to sort
 * 		list elements and not their data values.
 */
void	ft_list_sort(t_list **list, int (*cmp)(void *, void *))
{
	if (!list)
		return ;
	(void )cmp;
}
