/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:47:44 by abelov            #+#    #+#             */
/*   Updated: 2024/03/28 03:39:51 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include "c03_tests.h"

#define MAX_MEMORY 128

#define STR_EMPTY  ""
#define STR_SMALL  "TOTO"
#define STR_MEDIUM "1234567890ABCDEF"
#define STR_LARGE  "1234567890ABCDEF1234567890ABCDEF"

int		ft_strstr_test_main(void);
void	ft_strstr_test1(char *str, char *to_find);

int	ft_strstr_test(void)
{
	char *str = "2212";
	char *tf = "1";
	char *p;

	ft_print_title("ft_strstr_test");
	p = ft_strstr(str, tf);

	printf(" s: \"%s\",\n tf: \"%s\",\n"
		   " sp: \"%p\",\n p: \"%lu\"\n", str, tf, str, p - str);
	ft_strstr_test_main();
	return (EX_OK);
}

void	ft_strstr_test1(char *str, char *to_find)
{
	char	str_a[MAX_MEMORY];
	char	str_b[MAX_MEMORY];
	char	to_find_a[MAX_MEMORY];
	char	to_find_b[MAX_MEMORY];
	char	*return_a;
	char	*return_b;

	// make sure all memories are set at 0
	ft_bzero(    str_a, MAX_MEMORY);
	ft_bzero(    str_b, MAX_MEMORY);
	ft_bzero(to_find_a, MAX_MEMORY);
	ft_bzero(to_find_b, MAX_MEMORY);

	// copy the value to another independent address
	ft_memcpy(    str_a,     str, MAX_MEMORY);
	ft_memcpy(    str_b,     str, MAX_MEMORY);
	ft_memcpy(to_find_a, to_find, MAX_MEMORY);
	ft_memcpy(to_find_b, to_find, MAX_MEMORY);

	return_a = strstr(str_a, to_find_a);
	return_b = ft_strstr(str_b, to_find_b);

	check (ft_strcmp(to_find_a, to_find) == ft_strcmp(to_find_b, to_find));
	check ((return_a == str_a) == (return_b == str_b));
	check (!ft_strcmp(str_a, str_b));
}

int ft_strstr_test_main(void)
{
	char dest_0[MAX_MEMORY] = STR_EMPTY;
	char  src_0[MAX_MEMORY] = STR_EMPTY;

	ft_print_title("ft_strstr_test: Test 0_0");
	ft_strstr_test1(dest_0, src_0);

	char dest_1[MAX_MEMORY] = STR_EMPTY;
	char  src_1[MAX_MEMORY] = STR_MEDIUM;

	ft_print_title("ft_strstr_test: Test 1_0");
	ft_strstr_test1(dest_1, src_1);

	char dest_2[MAX_MEMORY] = STR_MEDIUM;
	char  src_2[MAX_MEMORY] = STR_EMPTY;

	ft_print_title("ft_strstr_test: Test 2_0");
	ft_strstr_test1(dest_2, src_2);

	char dest_3[MAX_MEMORY] = STR_MEDIUM;
	char  src_3[MAX_MEMORY] = "90AB";

	ft_print_title("ft_strstr_test: Test 3_0");
	ft_strstr_test1(dest_3, src_3);

	return (0);
}
