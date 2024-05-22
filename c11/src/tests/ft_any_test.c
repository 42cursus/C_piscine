/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:10:28 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 23:10:28 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11_tests.h"

int	ft_any_test(void)
{
	char	**tab;
	int		length;
	int		i;

	i = 0;
	ft_print_title("ft_any_test");
	length = 3;
	tab = ft_split("hey ho !", ' ');
	while (i < length - 1)
		printf("%s, ", tab[i++]);
	printf("%s\n", tab[i]);
	i = ft_any(tab, &ft_str_is_alpha);
	if (!i)
		printf("There are no non-alphabetical words\n");
	else
		printf("There are some non-alphabetical words\n");
	fflush(stdout);
	return (0);
}
