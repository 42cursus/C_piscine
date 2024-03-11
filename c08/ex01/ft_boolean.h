/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:52:37 by abelov            #+#    #+#             */
/*   Updated: 2023/10/26 22:52:39 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# include <unistd.h>
# define FT_BOOLEAN_H
# undef TRUE
# define TRUE    1
# undef FALSE
# define FALSE   0
# define EVEN(a) ((a % 2) ? FALSE : TRUE)
# define ODD_MSG ("I have an odd number of arguments.\n")
# define EVEN_MSG ("I have an even number of arguments.\n")
# define SUCCESS (0)

typedef int	t_bool;
#endif //FT_BOOLEAN_H
