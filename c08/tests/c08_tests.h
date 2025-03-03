/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c08_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:18:09 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 01:18:10 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C08_TESTS_H
# define C08_TESTS_H
# include "c08.h"
# include <stdlib.h>

int		ft_boolean_test(int argc, char **argv);
int		ft_strs_to_tab_test(void);
int		ft_point_test(void);
size_t	ft_strlen(const char *str);
void	ft_free_tab(void **tab, size_t size);
void	ft_free_stock_tab(t_stock_str *tab, size_t size);
size_t	ft_get_tab_size(void **tab);

#endif //C08_TESTS_H
