/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c02_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:27:01 by abelov            #+#    #+#             */
/*   Updated: 2024/12/02 20:15:59 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C12_TESTS_H
# define C12_TESTS_H
# include "c02.h"
# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# include <limits.h>

# ifndef T_UINT
#  define T_UINT
/**
 * When an expression contains operands of different built-in types,
 * and no explicit casts are present, the compiler uses built-in standard
 * conversions to convert one of the operands so that the types match.
 *
 * See also:
 *	 https://learn.microsoft.com =>
 *	 	=> /en-us/cpp/cpp/type-conversions-and-type-safety-modern-cpp
 */
typedef unsigned int	t_uint;
# endif

# define FT_RED   "\033[0;31m"
# define FT_GREEN "\033[0;32m"
# define FT_CYAN  "\033[36m"
# define FT_RESET "\e[0m"

/* ---------- TESTS -------------------- */

int	ft_putstr_non_printable_test(void);
int	ft_str_is_alpha_test(void);
int	ft_str_is_lowercase_test(void);
int	ft_str_is_numeric_test(void);
int	ft_str_is_printable_test(void);
int	ft_str_is_uppercase_test(void);
int	ft_strcapitalize_test(int argc, char **argv);
int	ft_strcpy_test(void);
int	ft_strlcpy_test(int argc, char **argv);
int	ft_strlowcase_test(void);
int	ft_strncpy_test(int argc, char **argv);
int	ft_strupcase_test(void);
int	ft_print_memory_test(void);

/* ---------- UTILS -------------------- */

void	check(bool succes);
void	ft_print_title(char *title);

#endif //C12_TESTS_H
