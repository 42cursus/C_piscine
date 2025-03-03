/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c03.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:05:15 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:05:16 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C03_H
# define C03_H

# ifndef T_UINT
#  define T_UINT
/**
 * When an expression contains operands of different built-in types,
 * and no explicit casts are present, the compiler uses built-in standard
 * conversions to convert one of the operands so that the types match.
 *
 * See also:
 *	 https://learn.microsoft.com =>
 *	 	=> /en-us/cpp/cpp/type-conversions-and-type-safety-modern-cpp
 */
typedef unsigned int	t_uint;
# endif

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
t_uint	ft_strlcat(char *dest, char *src, unsigned int size);

#endif //C03_H
