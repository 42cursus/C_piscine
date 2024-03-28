/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:09:23 by abelov            #+#    #+#             */
/*   Updated: 2024/03/15 15:10:19 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c03_tests.h"
#include <bsd/string.h>
#include <sysexits.h>

#define MAX_MEMORY 128

#define STR_EMPTY  ""
#define STR_SMALL  "TOTO"
#define STR_MEDIUM "1234567890ABCDEF"
#define STR_LARGE  "1234567890ABCDEF1234567890ABCDEF"

void ft_strlcat_test1(char *dest, char *src, unsigned int n) {
	char 	dest_a[MAX_MEMORY];
	char 	dest_b[MAX_MEMORY];
	char 	src_a[MAX_MEMORY];
	char 	src_b[MAX_MEMORY];
	t_uint 	return_a;
	t_uint 	return_b;

	// make sure all memories are set at 0
	ft_bzero(dest_a, MAX_MEMORY);
	ft_bzero(dest_b, MAX_MEMORY);
	ft_bzero(src_a, MAX_MEMORY);
	ft_bzero(src_b, MAX_MEMORY);

	// copy the value to another independent address
	ft_memcpy(dest_a, dest, MAX_MEMORY);
	ft_memcpy(dest_b, dest, MAX_MEMORY);
	ft_memcpy(src_a, src, MAX_MEMORY);
	ft_memcpy(src_b, src, MAX_MEMORY);

	return_a = strlcat(dest_a, src_a, n);
	return_b = ft_strlcat(dest_b, src_b, n);

	check(ft_strcmp(src_a, src) == ft_strcmp(src_b, src));
	check(return_a == return_b);
	check(!ft_strcmp(dest_a, dest_b));
}

int ft_strlcat_test(void) {
	char dest_0[MAX_MEMORY] = STR_EMPTY;
	char src_0[MAX_MEMORY] = STR_EMPTY;

	ft_print_title("ft_strlcat_test: Test 0_0");
	ft_strlcat_test1(dest_0, src_0, 0);
	ft_print_title("ft_strlcat_test: Test 0_1");
	ft_strlcat_test1(dest_0, src_0, 5);
	ft_print_title("ft_strlcat_test: Test 0_2");
	ft_strlcat_test1(dest_0, src_0, 10);
	ft_print_title("ft_strlcat_test: Test 0_3");
	ft_strlcat_test1(dest_0, src_0, MAX_MEMORY);

	char dest_1[MAX_MEMORY] = STR_EMPTY;
	char src_1[MAX_MEMORY] = STR_MEDIUM;

	ft_print_title("ft_strlcat_test: Test 1_0");
	ft_strlcat_test1(dest_1, src_1, 0);
	ft_print_title("ft_strlcat_test: Test 1_1");
	ft_strlcat_test1(dest_1, src_1, 5);
	ft_print_title("ft_strlcat_test: Test 1_2");
	ft_strlcat_test1(dest_1, src_1, 10);
	ft_print_title("ft_strlcat_test: Test 1_3");
	ft_strlcat_test1(dest_1, src_1, MAX_MEMORY);

	char dest_2[MAX_MEMORY] = STR_MEDIUM;
	char src_2[MAX_MEMORY] = STR_EMPTY;

	ft_print_title("ft_strlcat_test: Test 2_0");
	ft_strlcat_test1(dest_2, src_2, 0);
	ft_print_title("ft_strlcat_test: Test 2_1");
	ft_strlcat_test1(dest_2, src_2, 5);
	ft_print_title("ft_strlcat_test: Test 2_2");
	ft_strlcat_test1(dest_2, src_2, 10);
	ft_print_title("ft_strlcat_test: Test 2_3");
	ft_strlcat_test1(dest_2, src_2, MAX_MEMORY);

	char dest_3[MAX_MEMORY] = STR_MEDIUM;
	char src_3[MAX_MEMORY] = STR_MEDIUM;

	ft_print_title("ft_strlcat_test: Test 3_0");
	ft_strlcat_test1(dest_3, src_3, 0);
	ft_print_title("ft_strlcat_test: Test 3_1");
	ft_strlcat_test1(dest_3, src_3, 5);
	ft_print_title("ft_strlcat_test: Test 3_2");
	ft_strlcat_test1(dest_3, src_3, 10);
	ft_print_title("ft_strlcat_test: Test 3_3");
	ft_strlcat_test1(dest_3, src_3, MAX_MEMORY);
	return (EX_OK);
}
