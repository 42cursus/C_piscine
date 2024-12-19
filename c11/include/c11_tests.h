/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c11_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:17:32 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 22:17:33 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C11_TESTS_H
# define C11_TESTS_H
# include "c11.h"
# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stddef.h>

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

typedef int	(*t_test_fun)(void);

/**
 * We can use a `flexible array member` as per
 * 	https://en.wikipedia.org/wiki/Flexible_array_member
 * 	and
 * 	https://gcc.gnu.org/onlinedocs/gcc/Zero-Length.html:
 * However, It's programmer's responsibility to allocate space for this array.
 * This usually means allocating the struct dynamically, using malloc.
 *
 * See also:
 * 	How to detect offending code for stack smashing error
 * 	https://stackoverflow.com/questions/13641379/
 */
typedef struct s_ops
{
	size_t size;
	const t_test_fun *functions;
} t_ops;

int		ft_foreach_test(void);
int		ft_map_test(void);
int		ft_any_test(void);
int		ft_count_if_test(void);
int		ft_is_sort_test(void);
int		ft_sort_string_tab_test(void);
int		ft_advanced_sort_string_tab_test(void);

/* ---------- UTILS -------------------- */

void	ft_print_int_tab(int tab[], size_t size, char *eol);
void	ft_print_str_tab(char **tab, char *eol);
void	ft_free_tab(void **tab, t_uint size);
int		*ft_range(int min, int max);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *src);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_print_title(char *title);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
t_uint	ft_get_tab_size(void **tab);
void	ft_rev_int_tab(int *tab, int size);
int		ft_strcmp(char *s1, char *s2);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

#endif //C11_TESTS_H
