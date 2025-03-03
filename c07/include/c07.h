/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c07.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:31:28 by abelov            #+#    #+#             */
/*   Updated: 2024/03/14 17:14:39 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C07_H
# define C07_H
# include <stdlib.h>
# include <string.h>

char			*ft_strjoin(int size, const char **strs, const char *sep);
int				ft_ultimate_range(int **range, int min, int max);
unsigned int	ft_range_array_size(int start, int end);
int				*ft_range(int min, int max);
size_t			ft_strlen(const char *str);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
char			**ft_split(char *str, char *charset);
#endif //C07_H
