/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_get_next.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:14:41 by abelov            #+#    #+#             */
/*   Updated: 2024/03/26 22:15:38 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

/**
 * There are some warning options that could help you spot problem
 * functions, like -Wlarger-than and -Wstack-usage.  You can also generate
 * stack usage information with -fstack-usage.
 *
 * Also note that if the vars are not VLAs and you are not using
 * recursion, you can usually use "static" on the local variables to give
 * them fixed static addresses (in the data/bss section, rather than the
 * heap or stack) and thus move them off the stack.
 */
t_list	*ft_list_get_next(t_list *list)
{
	static t_list	*current = NULL;

	if (list)
		current = list;
	if (!current)
		return (NULL);
	current = current->next;
	return (current);
}
