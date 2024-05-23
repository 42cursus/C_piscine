/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:28:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/21 20:28:13 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "c12_tests.h"

/**
 * https://sergioprado.blog/gcc-extensions-to-the-c-language/
 * https://gcc.gnu.org/onlinedocs/gcc/Nested-Functions.html
 * https://thephd.dev/lambdas-nested-functions-block-expressions-oh-my
 *
 * The nested function can access all the variables of the containing function
 * that are visible at the point of its definition.
 * This is called lexical scoping.
 *
 * However:
 * Clang has its own set of extensions and does not
 * support all of GCC extensions, like nested functions,
 * but it does support Objective C-style "blocks"
 * https://en.wikipedia.org/wiki/Blocks_(C_language_extension)
 * https://stackoverflow.com/questions/24959440/
 *
 * See also:
 * 		https://stackoverflow.com/questions/62157904/
 */
int	ft_list_foreach_test(void)
{
	char	**tab;
	int		length;
	t_list	*list;
	t_uint	tab_size;
	void	(*f)(void *);

	ft_print_title("ft_list_foreach_test");
	tab = ft_split("alpha beta gamma delta", ' ');
	tab_size = ft_get_tab_size(tab);
	length = ft_signed_int(tab_size);
	list = ft_list_push_strs(length, tab);
	ft_list_reverse(&list);
	length = 0;
	f = (void (*)(void *))({
			void lambda_fun(void *data){check(tab[length++] == data);}
			lambda_fun;
	});
	ft_list_foreach(list, f);
	printf("\n");
	fflush(stdout);
	return (0);
}
