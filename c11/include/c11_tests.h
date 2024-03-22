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

int		ft_foreach_test(void);
int		ft_map_test(void);
int		ft_any_test(void);
int		ft_count_if_test(void);

/* ---------- UTILS -------------------- */

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

#endif //C11_TESTS_H
