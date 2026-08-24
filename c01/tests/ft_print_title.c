/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_title.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 01:23:02 by abelov            #+#    #+#             */
/*   Updated: 2026/08/24 17:32:25 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c01_test.h"

void ft_print_title(const char *title)
{
	printf("--------------------------------------------------\n");
	printf("> %s%s%s\n", FT_CYAN, title, FT_RESET);
	printf("--------------------------------------------------\n");
}

void	check(bool success)
{
	if (success)
		printf("> "FT_GREEN".OK "FT_RESET"\n");
	else
		printf("> "FT_RED".KO "FT_RESET"\n");
}

void	ft_print_int_tab(int tab[], size_t size, const char *eol)
{
	size_t	pos;

	pos = 0;
	printf("[");
	if (pos < size)
		printf("%d", tab[pos++]);
	while (pos < size)
		printf(", %d", tab[pos++]);
	printf("]%s", (!eol) ? "\n" : eol);
}