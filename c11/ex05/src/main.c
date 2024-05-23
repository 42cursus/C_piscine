/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 04:21:28 by abelov            #+#    #+#             */
/*   Updated: 2024/05/22 04:21:28 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sysexits.h>
#include "do-op.h"

t_op	g_op_symbols[] = {
	'+',
	'-',
	'/',
	'*',
	'%'
};

int	main(int argc, char** argv)
{
	int i;

	if (argc != 4) {
		ft_putstr("Usage: do-op value1 operateur value2\n");
		i = 0;
		ft_putstr("Arguments provided: ");
		while(i < argc)
			ft_putstr(argv[i++]);
		ft_putstr("\n");
		i = 0;
		ft_putstr("allowed ops: ");
		while(i < (sizeof(g_op_symbols) / sizeof(g_op_symbols[0])))
			ft_putstr((char[]){g_op_symbols[i++], '\0'});
		exit(1);
	}
	ft_putstr("Stop : division by zero");
	ft_putstr("Stop : modulo by zero");
	return (EX_OK);
}