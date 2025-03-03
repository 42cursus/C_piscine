/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_title.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:47:51 by abelov            #+#    #+#             */
/*   Updated: 2024/03/27 22:47:52 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c12_tests.h"

void	ft_print_title(const char *title)
{
	printf("--------------------------------------------------\n");
	printf("> %s%s%s\n", FT_CYAN, title, FT_RESET);
	printf("--------------------------------------------------\n\n");
}
