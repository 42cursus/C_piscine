/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:23:05 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 00:23:06 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	char			*data;
}					t_list;

typedef struct s_list_swap
{
	t_list	*tmp;
	t_list	*el1;
	t_list	*el2;
}		t_list_swap;

t_list	*ft_create_elem(void *data);

#endif //FT_LIST_H
