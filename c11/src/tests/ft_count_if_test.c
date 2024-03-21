/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:51:59 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 23:52:00 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11_tests.h"

int	ft_count_if_test(void)
{
	char	**tab;
	int		length;
	int		i;

	i = 0;
	ft_print_title("ft_count_if");
	length = 3;
	tab = ft_split("hey ho !", ' ');
	while (i < length - 1)
		printf("%s, ", tab[i++]);
	printf("%s\n", tab[i]);
	ft_count_if(tab, length, &ft_str_is_alpha);
	printf("\n");
	fflush(stdout);
	return (0);
}
