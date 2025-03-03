/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c04.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:05:15 by abelov            #+#    #+#             */
/*   Updated: 2024/03/11 22:20:44 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C04_H
# define C04_H

#include <stddef.h>

size_t ft_strlen(const char *str);
void	ft_putstr(const char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(const char *str, const char *base);

#endif //C04_H
