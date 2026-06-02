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
	size_t	length;
	int		count;

	ft_print_title("ft_count_if");
	tab = ft_split("hey ho Lets go !", ' ');
	length = ft_get_tab_size((void **) tab);
	ft_putstr("the array is: ");
	ft_print_str_tab(tab, NULL);
	count = ft_count_if(tab, (int)length, &ft_str_is_alpha);
	(ft_putstr("There are "), ft_putnbr(count));
	ft_putstr(" fully alphabetical words\n");
	check(count == 4);
	check(ft_count_if(NULL, 0, &ft_str_is_alpha) == 0);
	ft_putstr("\n");
	ft_free_tab((void **) tab, length);
	return (0);
}
