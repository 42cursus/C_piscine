/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 04:24:35 by abelov            #+#    #+#             */
/*   Updated: 2024/05/22 04:24:36 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

typedef enum e_op
{
	ft_add = '+',
	ft_sub = '-',
	ft_div = '/',
	ft_mul = '*',
	ft_mod = '%'
}	t_op;

void	ft_putstr(const char *str);
size_t	ft_strlen(const char *str);

#endif //DO_OP_H
