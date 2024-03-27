/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_list_at_test(void)
{
	char	**tab;
	int		length;
	t_list	*list;
	int		i;
	t_uint	tab_size;

	ft_print_title("ft_list_at_test");
	tab = ft_split("alpha beta gamma delta", ' ');
	tab_size = ft_get_tab_size(tab);
	length = FT_SIGNED(tab_size);
	list = ft_list_push_strs(length, tab);
	ft_list_reverse(&list);
	i = -1;
	while (++i < length)
		check(tab[i] == ft_list_at(list, i)->data);
	printf("\n");
	fflush(stdout);
	return (0);
}
