/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c00_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:25:36 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 02:25:37 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C00_TESTS_H
# define C00_TESTS_H
# include "c00.h"
# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>

# define FT_RED   "\033[0;31m"
# define FT_GREEN "\033[0;32m"
# define FT_CYAN  "\033[36m"
# define FT_RESET "\e[0m"

int		ft_putchar_test(void);
int		ft_print_alphabet_test(void);
int		ft_print_reverse_alphabet_test(void);
int		ft_print_numbers_test(void);
int		ft_is_negative_test(void);
int		ft_print_comb_test(void);
int		ft_print_comb2_test(void);
int		ft_putnbr_test(void);
int		ft_print_combn_test(void);

/* ---------- UTILS -------------------- */

void	check(bool succes);
void	ft_print_title(char *title);

char	*ft_strdup(char *src);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(char *str);

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

#endif //C00_TESTS_H
