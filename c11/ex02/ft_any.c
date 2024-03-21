/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:01:07 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 23:01:08 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

static int	ft_arraylen(char **tab)
{
	if (!tab || !*tab)
		return (0);
	return (1);
}

int	ft_any(char **tab, int (*f)(char *))
{
	int	length;
	int	i;

	i = 0;
	length = ft_arraylen(tab);
	if (!length)
		return (false);
	while (i < length)
		if (f(tab[i++]))
			return (true);
	return (false);
}
