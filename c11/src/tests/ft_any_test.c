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
	size_t		length;
	int			res;
	const char	*some = "some";

	ft_print_title("ft_any_test");
	tab = ft_split("hey ho !", ' ');
	length = ft_get_tab_size((void **) tab);
	ft_putstr("the array is: ");
	ft_print_str_tab(tab, NULL);
	res = ft_any(tab, &ft_str_is_alpha);
	if (!res)
		some = "no";
	(ft_putstr("There are "), ft_putstr(some),
		ft_putstr(" non-alphabetical words\n"));
	check(res == 1);
	check(ft_any(NULL, &ft_str_is_alpha) == 0);
	ft_putstr("\n");
	ft_free_tab((void **) tab, length);
	return (0);
}
