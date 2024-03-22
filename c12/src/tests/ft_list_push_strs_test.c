/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

int	ft_list_push_strs_test(void)
{
	char	**tab;
	int		length;
	int		i;
	t_list	*l;

	i = 0;
	ft_print_title("ft_list_push_strs_test");
	l =  NULL;
	length = 3;
	tab = ft_split("hey ho !", ' ');
	l = ft_list_push_strs(length, tab);
	while (l->next) {
		printf("%s, ", (char *) l->data);
		l = l->next;
	}
	printf("%s\n", tab[i]);
	printf("\n");
	fflush(stdout);
	return (0);
}
