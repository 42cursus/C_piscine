/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:59:28 by abelov            #+#    #+#             */
/*   Updated: 2024/03/20 14:59:29 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include "ft.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		argg;

	if (argc < 1)
		return (EX_NOINPUT);
	argg = 1;
	while (argg < argc)
	{
		str = argv[argg++];
		write(STDOUT_FILENO, str, ft_strlen(str));
		ft_putchar('\n');
	}
	return (EX_OK);
}
