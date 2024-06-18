/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c13_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:52:40 by abelov            #+#    #+#             */
/*   Updated: 2024/06/17 21:52:41 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C13_TESTS_H
# define C13_TESTS_H
# include "c13.h"
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

void	check(bool succes);
void	ft_print_title(char *title);

typedef struct s_cont	t_cont;
struct s_cont
{
	void	*data;
	int 	size;
};

typedef int	(*t_test_fun)(void);

typedef struct s_ops
{
	size_t size;
	const t_test_fun *functions;
} t_ops;

int		btree_create_node_test(void);
int		btree_apply_prefix_test(void);
int		btree_apply_infix_test(void);
int		btree_apply_suffix_test(void);
int		btree_insert_data_test(void);
int		btree_search_item_test(void);
int		btree_level_count_test(void);
int		btree_apply_by_level_test(void);

/* ---------- UTILS -------------------- */

void	ft_tab_foreach(void **tab, size_t tab_size, void (*f)(void *, void *), void *ref);
void	ft_print_int_tab(int tab[], t_uint size, char *eol);
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
void	ft_putstr_eol(char *str, char *eol);
char	*ft_empty_string(size_t length);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
t_uint	ft_get_tab_size(void **tab);
void	ft_rev_int_tab(int *tab, int size);
int		*ft_sort_int_tab(int *tab, int size);
void	ft_sort_string_tab(char **tab);
int		ft_string_tab_is_sort(char **tab, int (*f)(char *, char *));
void	ft_sort_string_tab_fun(char **tab, int (*cmp)(char *, char *));
int		ft_strcmp(char *s1, char *s2);
size_t	ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_itoa(int nb);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

#endif //C13_TESTS_H
