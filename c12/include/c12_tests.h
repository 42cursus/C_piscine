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

# define RED   "\033[0;31m"
# define GREEN "\033[0;32m"
# define CYAN  "\033[36m"
# define RESET "\e[0m"

static void	ft_print_title(char *title)
{
	printf("--------------------------------------------------\n");
	printf("> %s%s%s\n", CYAN, title, RESET);
	printf("--------------------------------------------------\n");
}

/* ---------- TESTS -------------------- */

int	ft_create_elem_test(void);
int	ft_list_push_front_test(void);
int	ft_list_size_test(void);
int	ft_list_last_test(void);
int	ft_list_push_back_test(void);
int	ft_list_push_strs_test(void);
int	ft_list_clear_test(void);
int	ft_list_at_test(void);
int	ft_list_reverse_test(void);
int	ft_list_foreach_test(void);
int	ft_list_foreach_if_test(void);
int	ft_list_find_test(void);
int	ft_list_remove_if_test(void);
int	ft_list_merge_test(void);
int	ft_list_sort_test(void);
int	ft_list_reverse_fun_test(void);
int	ft_sorted_list_insert_test(void);
int	ft_sorted_list_merge_test(void);

#endif //C12_TESTS_H
