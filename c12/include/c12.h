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

typedef struct s_list
{
	struct s_list *next;
	void *data;
}				t_list;

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

#endif //C12_H
