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
	char		**tab;
	int			length;
	const char	*some = "some";

	ft_print_title("ft_any_test");
	tab = ft_split("hey ho !", ' ');
	length = (int)ft_get_tab_size((void **) tab);
	ft_putstr("the array is: ");
	ft_print_str_tab(tab, NULL);
	if (!ft_any(tab, &ft_str_is_alpha))
		some = "no";
	(ft_putstr("There are "), ft_putstr(some), ft_putstr(" non-alphabetical words\n"));
	ft_putstr("\n");
	while (length--)
		free(tab[length]);
	free(tab);
	return (0);
}
