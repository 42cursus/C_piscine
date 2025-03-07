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

# define FT_RED   "\033[0;31m"
# define FT_GREEN "\033[0;32m"
# define FT_CYAN  "\033[36m"
# define FT_RESET "\e[0m"


struct s_input
{
	int *arr;
	int arrSize;
	int *expected;
	int expectedSize;
};

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

/* ---------- UTILS -------------------- */

void	ft_free_tab(void **tab, size_t size);
void	ft_print_int_tab(int tab[], size_t size, char *eol);
void	ft_print_str_tab(char **tab, char *eol);
int		ft_list_has_next(t_list	*list);
t_list	*ft_list_get_next(t_list *list);
void	ft_list_append(t_list **list, t_list *new);
int		*ft_range(int min, int max);
void	ft_puts(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(const char *str);
void	ft_putstr_eol(char *str, const char *eol);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_get_tab_size(void **tab);
void	ft_bzero(void *s, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *src);
size_t ft_strlen(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strcmp_fun(void* a, void* b);
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
int		ft_signed_int(size_t value);
void	ft_sort_string_tab_fun(char **tab, int(*cmp)(char *, char *));
void	check(bool succes);
void	ft_print_title(const char *title);

#endif //C12_TESTS_H
