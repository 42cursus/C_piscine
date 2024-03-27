/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c12.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:29:46 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 00:29:47 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C12_H
# define C12_H
# include "ft_list.h"

void	ft_list_push_front(t_list **list, void *data);
int		ft_list_size(t_list *list);
t_list	*ft_list_last(t_list *list);
void	ft_list_push_back(t_list **list, void *data);
t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_clear(t_list *list, void (*del_fun)(void *));
t_list	*ft_list_at(t_list *list, unsigned int nbr);
void	ft_list_reverse(t_list **list);
void	ft_list_foreach(t_list *list, void (*f)(void *));
void	ft_list_foreach_if(t_list *list, void (*f)(void *), void *data_ref,
			int (*cmp)(t_list *, void *));
t_list	*ft_list_find(t_list *list, void *data_ref,
			int (*cmp)(t_list *, void *));
void	ft_list_remove_if(t_list **list, void *data_ref,
			int (*cmp)(t_list *, void *), void (*del_fun)(void *));
void	ft_list_merge(t_list **list1, t_list *list2);
void	ft_list_sort(t_list **list, int (*cmp)(t_list *, void *));
void	ft_list_reverse_fun(t_list *list);
void	ft_sorted_list_insert(t_list **list, void *data,
			int (*cmp)(t_list *, void *));
void	ft_sorted_list_merge(t_list **list1, t_list *list2,
			int (*cmp)(t_list *, void *));

#endif //C12_H
