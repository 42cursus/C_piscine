/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:58:42 by abelov            #+#    #+#             */
/*   Updated: 2023/10/20 12:24:15 by abelov           ###   ########.fr       */
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
	if (argc < 1)
		return (EX_NOINPUT);
	write(STDOUT_FILENO, argv[0], ft_strlen(argv[0]));
	write(STDOUT_FILENO, "\n", 1);
	return (EX_OK);
}
