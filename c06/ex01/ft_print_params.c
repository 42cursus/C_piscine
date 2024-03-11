/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:13:07 by abelov            #+#    #+#             */
/*   Updated: 2023/10/20 11:34:28 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sysexits.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	const char	*ostr = str;

	while (*str)
		str++;
	return (str - ostr);
}

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
		write(STDOUT_FILENO, "\n", 1);
	}
	return (EX_OK);
}
