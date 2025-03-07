/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 01:23:26 by abelov            #+#    #+#             */
/*   Updated: 2024/12/19 01:28:27 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	if (size && dst)
	{
		i = -1;
		while (++i < size - 1 && src[i] != 0)
			dst[i] = src[i];
		dst[i] = 0;
	}
	return (strlen(src));
}
