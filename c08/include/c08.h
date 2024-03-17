/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c08.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:16:43 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 01:16:44 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C08_H
# define C08_H
# include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);
void		ft_show_tab(struct s_stock_str *par);

#endif //C08_H
