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
	char	**otab;
	int		i;

	ft_print_title("ft_count_if");
	otab = ft_split("hey ho !", ' ');
	tab = otab;
	while (*tab)
		printf("%s, ", *tab++);
	i = ft_count_if(otab, tab - otab, &ft_str_is_alpha);
	printf("There are %d alphabetical words\n", i);
	fflush(stdout);
	return (0);
}
