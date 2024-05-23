/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c11.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:13:55 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 22:13:56 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C11_H
# define C11_H

void	ft_foreach(int *tab, int length, void (*f)(int));
int		*ft_map(int *tab, int length, int (*f)(int));
int		ft_any(char **tab, int (*f)(char *));
int		ft_count_if(char **tab, int length, int (*f)(char *));
int		ft_is_sort(int *tab, int length, int (*f)(int, int));
void	ft_sort_string_tab(char **tab);
void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

#endif //C11_H
