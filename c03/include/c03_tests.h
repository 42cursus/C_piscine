/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c03_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:21:21 by abelov            #+#    #+#             */
/*   Updated: 2024/03/28 03:28:19 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C03_TESTS_H
# define C03_TESTS_H
# include "c03.h"
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# include <limits.h>
# include <time.h>

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

int		ft_strcmp_test(void);
int		ft_strncmp_test(void);
int 	ft_strcat_test(void);
int 	ft_strncat_test(void);
int		ft_strstr_test(void);
int 	ft_strlcat_test(void);

/* ---------- UTILS -------------------- */

void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	check(bool succes);
void	ft_print_title(char *title);

#endif //C03_TESTS_H
