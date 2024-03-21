/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:51:48 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 23:51:49 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function t_count_if returns the number of elements of the array
 * that return does not return 0 when passed to the function `f`
 */
int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	if (!tab || !length)
		return (res);
	while (i < length)
		if (f(tab[i++]))
			res++;
	return (res);
}
