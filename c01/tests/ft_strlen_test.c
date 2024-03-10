/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:00:06 by abelov            #+#    #+#             */
/*   Updated: 2023/10/08 18:09:03 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c01_test.h"

int	ft_strlen_test(void)
{
	char *str;
	str = "This is the string";

	ft_print_title("ft_strlen_test");
	printf("Str: %s, len is: %d", str, ft_strlen(str));
	return (0);
}
