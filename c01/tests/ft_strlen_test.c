/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:00:06 by abelov            #+#    #+#             */
/*   Updated: 2023/10/08 18:09:03 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c01_test.h"

int	ft_strlen_test(void)
{
	const char	*str;
	str = "This is the string";

	ft_print_title("ft_strlen_test");
	printf("Str: %s, len is: %lu", str, ft_strlen(str));
	return (0);
}
