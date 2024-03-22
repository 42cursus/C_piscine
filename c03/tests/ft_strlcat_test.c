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

// cc ft_strlcpy.c -lbsd
#include <stdio.h>
#include <bsd/string.h>

#define FT_RED   "\033[0;31m"
#define FT_GREEN "\033[0;32m"
#define FT_CYAN  "\033[36m"
#define FT_RESET "\e[0m"

#define MAX_MEMORY 128

#define STR_EMPTY  ""
#define STR_SMALL  "TOTO"
#define STR_MEDIUM "1234567890ABCDEF"
#define STR_LARGE  "1234567890ABCDEF1234567890ABCDEF"

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

void ft_strlcat_test1(char *dest, char *src, unsigned int n)
{
  char dest_a[MAX_MEMORY];
  char dest_b[MAX_MEMORY];
  char  src_a[MAX_MEMORY];
  char  src_b[MAX_MEMORY];

  // make sure all memories are set at 0
  bzero(dest_a, MAX_MEMORY);
  bzero(dest_b, MAX_MEMORY);
  bzero( src_a, MAX_MEMORY);
  bzero( src_b, MAX_MEMORY);

  // copy the value to another independent address
  memcpy(dest_a, dest, MAX_MEMORY);
  memcpy(dest_b, dest, MAX_MEMORY);
  memcpy( src_a, src, MAX_MEMORY);
  memcpy( src_b, src, MAX_MEMORY);

  unsigned int return_a =    strlcat(dest_a, src_a, n);
  unsigned int return_b = ft_strlcat(dest_b, src_b, n);

  if (strcmp(src_a, src) == strcmp(src_b, src)) {
    printf("_ src arg not override                        : %sOK%s\n", FT_GREEN, FT_RESET);
  } else {
    printf("_ src arg not override                        : %sKO%s\n", FT_RED, FT_RESET);
    printf("> expected : %s\n", src_a);
    printf("> given    : %s\n", src_b);
  }
    printf("--------------------------------------------------\n");
  if (return_a == return_b) {
    printf("_ return value is correct                     : %sOK%s\n", FT_GREEN, FT_RESET);
  } else {
    printf("_ return value is correct                     : %sKO%s\n", FT_RED, FT_RESET);
    printf("> expected : %u\n", return_a);
    printf("> given    : %u\n", return_b);
  }
  printf("--------------------------------------------------\n");
  if (strcmp(dest_a, dest_b) == 0) {
    printf("_ correct dest arg override                   : %sOK%s\n", FT_GREEN, FT_RESET);
  } else {
    printf("_ correct dest arg override                   : %sKO%s\n", FT_RED, FT_RESET);
    printf("> expected : %s\n", dest_a);
    printf("> given    : %s\n", dest_b);
  }
}

void ft_print_title(char *title) {
  printf("--------------------------------------------------\n");
  printf("> %s%s%s\n", FT_CYAN, title, FT_RESET);
  printf("--------------------------------------------------\n");
}

int ft_strlcat_test(void)
{
  char dest_0[MAX_MEMORY] = STR_EMPTY;
  char  src_0[MAX_MEMORY] = STR_EMPTY;

  ft_print_title("Test 0_0");
	ft_strlcat_test1(dest_0, src_0, 0);
  ft_print_title("Test 0_1");
	ft_strlcat_test1(dest_0, src_0, 5);
  ft_print_title("Test 0_2");
	ft_strlcat_test1(dest_0, src_0, 10);
  ft_print_title("Test 0_3");
	ft_strlcat_test1(dest_0, src_0, MAX_MEMORY);
//  ft_print_title("Test 0_4");
//  ft_strncpy_test(dest_0, src_0, MAX_MEMORY + 1000);

  char dest_1[MAX_MEMORY] = STR_EMPTY;
  char  src_1[MAX_MEMORY] = STR_MEDIUM;

  ft_print_title("Test 1_0");
	ft_strlcat_test1(dest_1, src_1, 0);
  ft_print_title("Test 1_1");
	ft_strlcat_test1(dest_1, src_1, 5);
  ft_print_title("Test 1_2");
	ft_strlcat_test1(dest_1, src_1, 10);
  ft_print_title("Test 1_3");
	ft_strlcat_test1(dest_1, src_1, MAX_MEMORY);
//  ft_print_title("Test 1_4");
//  ft_strncpy_test(dest_1, src_1, MAX_MEMORY + 1000);

  char dest_2[MAX_MEMORY] = STR_MEDIUM;
  char  src_2[MAX_MEMORY] = STR_EMPTY;

  ft_print_title("Test 2_0");
	ft_strlcat_test1(dest_2, src_2, 0);
  ft_print_title("Test 2_1");
	ft_strlcat_test1(dest_2, src_2, 5);
  ft_print_title("Test 2_2");
	ft_strlcat_test1(dest_2, src_2, 10);
  ft_print_title("Test 2_3");
	ft_strlcat_test1(dest_2, src_2, MAX_MEMORY);
//  ft_print_title("Test 2_4");
//  ft_strncpy_test(dest_2, src_2, MAX_MEMORY + 1000);

  char dest_3[MAX_MEMORY] = STR_MEDIUM;
  char  src_3[MAX_MEMORY] = STR_MEDIUM;

  ft_print_title("Test 3_0");
	ft_strlcat_test1(dest_3, src_3, 0);
  ft_print_title("Test 3_1");
	ft_strlcat_test1(dest_3, src_3, 5);
  ft_print_title("Test 3_2");
	ft_strlcat_test1(dest_3, src_3, 10);
  ft_print_title("Test 3_3");
	ft_strlcat_test1(dest_3, src_3, MAX_MEMORY);
//  ft_print_title("Test 3_4");
//  ft_strncpy_test(dest_3, src_3, MAX_MEMORY + 1000);

  return (0);
}
