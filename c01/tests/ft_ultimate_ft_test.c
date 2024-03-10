/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:53:38 by abelov            #+#    #+#             */
/*   Updated: 2023/10/08 15:53:41 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "c01_test.h"

int ft_ultimate_ft_test(void)
{
	int x;
	int *p = &x;
	int **pp = &p;
	int ***ppp = &pp;
	int ****pppp = &ppp;
	int *****ppppp = &pppp;
	int ******pppppp = &ppppp;
	int *******ppppppp = &pppppp;
	int ********pppppppp = &ppppppp;
	int *********ppppppppp = &pppppppp;

	ft_print_title("ft_ultimate_ft_test");
	ft_ultimate_ft(ppppppppp);
	printf("x: %d\n", x);
	return (0);
}
