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
	int		length;
	int		i;

	ft_print_title("ft_count_if");
	otab = ft_split("hey ho Lets go !", ' ');
	tab = otab;
	length = (int)ft_get_tab_size((void **) tab);
	ft_putstr("the array is: ");
	ft_print_str_tab(tab, NULL);
	i = ft_count_if(otab, length, &ft_str_is_alpha);
	(ft_putstr("There are "), ft_putnbr(i));
	ft_putstr(" fully alphabetical words\n");
	ft_putstr("\n");
	while (length--)
		free(otab[length]);
	free(otab);
	return (0);
}
