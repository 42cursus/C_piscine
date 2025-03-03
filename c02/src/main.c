/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:19:58 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:20:00 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include "c02_tests.h"

int	main(int argc, char **argv)
{
	setbuf(stdout, NULL);
	ft_str_is_alpha_test();
	ft_str_is_lowercase_test();
	ft_str_is_numeric_test();
	ft_str_is_printable_test();
	ft_str_is_uppercase_test();
	ft_strcapitalize_test(argc, argv);
	ft_strcpy_test();
	ft_strlcpy_test();
	ft_strlowcase_test();
	ft_strncpy_test(argc, argv);
	ft_strupcase_test();
	ft_putstr_non_printable_test();
	ft_print_memory_test();
	return (EX_OK);
}
