/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c01_test.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 01:14:51 by abelov            #+#    #+#             */
/*   Updated: 2024/03/07 01:14:53 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C01_TEST_H
# define C01_TEST_H
# include <stdio.h>
# include "c01.h"

# define FT_RED   "\033[0;31m"
# define FT_GREEN "\033[0;32m"
# define FT_CYAN  "\033[36m"
# define FT_RESET "\e[0m"

void ft_print_title(const char *title);
int	ft_ft_test(void);
int ft_ultimate_ft_test(void);
int ft_swap_test(void);
int ft_div_mod_test(void);
int ft_ultimate_div_mod_test(void);
int ft_putstr_test(void);
int	ft_strlen_test(void);
int	ft_rev_int_tab_test(void);
int	ft_sort_int_tab_test(void);

#endif //C01_TEST_H
