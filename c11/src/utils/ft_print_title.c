/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_title.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 05:58:10 by abelov            #+#    #+#             */
/*   Updated: 2024/05/22 05:58:11 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11_tests.h"

void	ft_print_title(const char *title)
{
	void	(*prnt)(const char *str) = ft_putstr;

	prnt("--------------------------------------------------\n");
	(prnt("> "FT_CYAN), prnt(title), prnt(FT_RESET"\n"));
	prnt("--------------------------------------------------\n");
}
