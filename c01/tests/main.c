/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 01:09:23 by abelov            #+#    #+#             */
/*   Updated: 2024/03/07 01:09:25 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include "c01_test.h"

int main(void)
{
	setbuf(stdout, NULL);
	ft_ft_test();
	ft_ultimate_ft_test();
	ft_swap_test();
	ft_div_mod_test();
	ft_ultimate_div_mod_test();
	ft_putstr_test();
	ft_strlen_test();
	ft_rev_int_tab_test();
	ft_sort_int_tab_test();
	return (EX_OK);
}
