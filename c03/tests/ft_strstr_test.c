/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:47:44 by abelov            #+#    #+#             */
/*   Updated: 2023/10/20 20:46:53 by abelov           ###   ########.fr       */
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

int main(void) {

	char *str = "";
	char *tf = "1";
	char *p;

	p = ft_strstr(str, tf);
	
	printf(" s: \"%s\",\n tf: \"%s\",\n"
		   " sp: \"%p\",\n p: \"%p\"", str, tf, str, p);

	return (0);
}
