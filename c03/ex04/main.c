/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:47:44 by abelov            #+#    #+#             */
/*   Updated: 2023/10/17 19:29:59 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define RED   "\033[0;31m"
#define GREEN "\033[0;32m"
#define CYAN  "\033[36m"
#define RESET "\e[0m"

#define MAX_MEMORY 128

#define STR_EMPTY  ""
#define STR_SMALL  "TOTO"
#define STR_MEDIUM "1234567890ABCDEF"
#define STR_LARGE  "1234567890ABCDEF1234567890ABCDEF"

char *ft_strstr(char *str, char *to_find);

void ft_strstr_test(char *str, char *to_find) {
  char     str_a[MAX_MEMORY];
  char     str_b[MAX_MEMORY];
  char to_find_a[MAX_MEMORY];
  char to_find_b[MAX_MEMORY];

  // make sure all memories are set at 0
  bzero(    str_a, MAX_MEMORY);
  bzero(    str_b, MAX_MEMORY);
  bzero(to_find_a, MAX_MEMORY);
  bzero(to_find_b, MAX_MEMORY);

  // copy the value to another independent address
  memcpy(    str_a,     str, MAX_MEMORY);
  memcpy(    str_b,     str, MAX_MEMORY);
  memcpy(to_find_a, to_find, MAX_MEMORY);
  memcpy(to_find_b, to_find, MAX_MEMORY);

  char *return_a =    strstr(str_a, to_find_a);
  char *return_b = ft_strstr(str_b, to_find_b);

  if (strcmp(to_find_a, to_find) == strcmp(to_find_b, to_find)) {
    printf("_ src arg not override                        : %sOK%s\n", GREEN, RESET);
  } else {
    printf("_ src arg not override                        : %sKO%s\n", RED,   RESET);
    printf("> expected : %s\n", to_find_a);
    printf("> given    : %s\n", to_find_b);
  }
    printf("--------------------------------------------------\n");
  if ((return_a == str_a) == (return_b == str_b)) {
    printf("_ return address same as dest arg             : %sOK%s\n", GREEN, RESET);
  } else {
    printf("_ return address same as dest arg             : %sKO%s\n", RED,   RESET);
    printf("> a: str      : %s\n", str_a);
    printf("> a: to_find  : %s\n", to_find_a);
    printf("> b: str      : %s\n", str_b);
    printf("> b: to_find  : %s\n", to_find_b);
    printf("> expected : %p\n", return_a);
    printf("> given    : %p\n", return_b);
  }
    printf("--------------------------------------------------\n");
  if (strcmp(str_a, str_b) == 0) {
    printf("_ correct dest arg override                   : %sOK%s\n", GREEN, RESET);
  } else {
    printf("_ correct dest arg override                   : %sKO%s\n", RED,   RESET);
    printf("> expected : %s\n", str_a);
    printf("> given    : %s\n", str_b);
  }
}

void ft_print_title(char *title) {
  printf("--------------------------------------------------\n");
  printf("> %s%s%s\n", CYAN, title, RESET);
  printf("--------------------------------------------------\n");
}

int main(void) {
  char dest_0[MAX_MEMORY] = STR_EMPTY;
  char  src_0[MAX_MEMORY] = STR_EMPTY;

  ft_print_title("Test 0_0");
  ft_strstr_test(dest_0, src_0);

  char dest_1[MAX_MEMORY] = STR_EMPTY;
  char  src_1[MAX_MEMORY] = STR_MEDIUM;

  ft_print_title("Test 1_0");
  ft_strstr_test(dest_1, src_1);

  char dest_2[MAX_MEMORY] = STR_MEDIUM;
  char  src_2[MAX_MEMORY] = STR_EMPTY;

  ft_print_title("Test 2_0");
  ft_strstr_test(dest_2, src_2);

  char dest_3[MAX_MEMORY] = STR_MEDIUM;
  char  src_3[MAX_MEMORY] = "90AB";

  ft_print_title("Test 3_0");
  ft_strstr_test(dest_3, src_3);

  return (0);
}
