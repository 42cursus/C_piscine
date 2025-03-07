/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:49:42 by abelov            #+#    #+#             */
/*   Updated: 2023/10/26 22:49:50 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stddef.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(const char *str);
size_t ft_strlen(const char *str);
int		ft_strcmp(const char *s1, const char *s2);

#endif //FT_H