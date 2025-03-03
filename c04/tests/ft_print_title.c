/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_title.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 01:23:02 by abelov            #+#    #+#             */
/*   Updated: 2024/03/07 01:23:05 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c04_test.h"

#define FT_RED   "\033[0;31m"
#define FT_GREEN "\033[0;32m"
#define FT_CYAN  "\033[36m"
#define FT_RESET "\e[0m"

void ft_print_title(const char *title)
{
	printf("--------------------------------------------------\n");
	printf("> %s%s%s\n", FT_CYAN, title, FT_RESET);
	printf("--------------------------------------------------\n");
}