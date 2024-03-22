/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:27:01 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 00:27:01 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C12_TESTS_H
# define C12_TESTS_H
# include "c12.h"
# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>

# define FT_RED   "\033[0;31m"
# define FT_GREEN "\033[0;32m"
# define FT_CYAN  "\033[36m"
# define FT_RESET "\e[0m"

static void	ft_print_title(char *title)
{
	printf("--------------------------------------------------\n");
	printf("> %s%s%s\n", FT_CYAN, title, FT_RESET);
	printf("--------------------------------------------------\n");
}

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

/* ---------- UTILS -------------------- */

void	ft_list_append(t_list **begin_list, t_list *new);
int		*ft_range(int min, int max);
void	ft_putnbr(int nb);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *src);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_strlen(char *str);
void	ft_putstr(char *str);

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

void	check(bool succes);

#endif //C12_TESTS_H
