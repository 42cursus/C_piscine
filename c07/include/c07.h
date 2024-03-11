/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:31:28 by abelov            #+#    #+#             */
/*   Updated: 2023/10/26 19:46:41 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C07_H
# define C07_H
# include <stdlib.h>
# include <string.h>

char			*ft_strjoin(int size, char **strs, char *sep);
int				ft_ultimate_range(int **range, int min, int max);
unsigned int	ft_range_ary_size(int start, int end);
int				*ft_range(int min, int max);
int				ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
char			**ft_split(char *str, char *charset);
#endif //C07_H
