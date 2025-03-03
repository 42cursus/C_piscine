/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c07_tests.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:12:14 by abelov            #+#    #+#             */
/*   Updated: 2024/03/11 22:12:16 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C07_TESTS_H
# define C07_TESTS_H
# include <stdio.h>
# include "c07.h"

typedef struct s_pos
{
	int	min;
	int	max;
}	t_pos;

void	test1(t_pos	pos);
void	ft_free_tab(void **tab, size_t size);
size_t	ft_get_tab_size(void **tab);

#endif //C07_TESTS_H
