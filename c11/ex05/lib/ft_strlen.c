/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:28:53 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 21:30:21 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Chopping the ptrdiff_t to int to get the legth is a narrowing conversion
 * 	from 'long' to signed type 'int' and is implementation-defined.
 *
 * See also:
 * 	…is there a [real life] OS where int is not 4 bytes?
 * 		https://queue.acm.org/detail.cfm?id=1165766
 */
int	ft_strlen(char *str)
{
	ptrdiff_t	diff;
	char *const	head = str;

	while (*str)
		str++;
	diff = str - head;
	return ((int)diff);
}
