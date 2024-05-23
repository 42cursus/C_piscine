/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:27:01 by abelov            #+#    #+#             */
/*   Updated: 2024/03/27 15:37:31 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C12_TESTS_H
# define C12_TESTS_H
# include "c12.h"
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

int		ft_create_elem_test(void);
int		ft_list_push_front_test(void);
int		ft_list_size_test(void);
int		ft_list_last_test(void);
int		ft_list_push_back_test(void);
int		ft_list_push_strs_test(void);
int		ft_list_clear_test(void);
int		ft_list_at_test(void);
int		ft_list_reverse_test(void);
int		ft_list_foreach_test(void);
int		ft_list_foreach_if_test(void);
int		ft_list_find_test(void);
int		ft_list_remove_if_test(void);
int		ft_list_merge_test(void);
int		ft_list_sort_test(void);
int		ft_list_reverse_fun_test(void);
int		ft_sorted_list_insert_test(void);
int		ft_sorted_list_merge_test(void);

typedef void			(*t_apply_fun)(void *);
typedef int				(*t_cmp_fun)(void *, void *);
typedef int				(*t_test_fun)(void);
static t_test_fun		g_tests[] = {
//	ft_create_elem_test,
//	ft_list_push_front_test,
//	ft_list_size_test,
//	ft_list_last_test,
//	ft_list_push_back_test,
//	ft_list_push_strs_test,
//	ft_list_clear_test,
//	ft_list_at_test,
//	ft_list_reverse_test,
//	ft_list_foreach_test,
//	ft_list_foreach_if_test,
//	ft_list_find_test,
//	ft_list_remove_if_test,
//	ft_list_merge_test,
	ft_list_sort_test,
	ft_list_reverse_fun_test,
	ft_sorted_list_insert_test,
	ft_sorted_list_merge_test
};

/* ---------- UTILS -------------------- */

int		ft_list_has_next(t_list	*list);
t_list	*ft_list_get_next(t_list *list);
void	ft_list_append(t_list **list, t_list *new);
int		*ft_range(int min, int max);
void	ft_puts(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	*ft_calloc(size_t nmemb, size_t size);
t_uint	ft_get_tab_size(void **tab);
void	ft_bzero(void *s, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
int		ft_tolower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_signed_int(t_uint value);

void	check(bool succes);
void	ft_print_title(char *title);

#endif //C12_TESTS_H
