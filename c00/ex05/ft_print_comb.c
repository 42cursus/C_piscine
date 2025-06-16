/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:44:45 by abelov            #+#    #+#             */
/*   Updated: 2023/10/05 19:00:11 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

#define DELIMITER ", "

static
void	printout(int i, int j, int k)
{
	const char	*base = "0123456789";

	write(STDOUT_FILENO, &base[i], 1);
	write(STDOUT_FILENO, &base[j], 1);
	write(STDOUT_FILENO, &base[k], 1);
}

/**
 * @see: https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf
 * 	6.5.2.5 Compound literals
 *
 * In example: `&(char){r + ascii_zero}`, we create a "compound literal"
 * which creates an "anonymous variable" of type char and `&` is used
 * to get its address.
 * Then we can use this address to pass it as an argument to a `write` function.
 */
void	ft_print_comb(void)
{
	int			i;
	int			j;
	int			k;
	int const	*max = (int []){7, 8, 9};

	i = -1;
	while (i++ < max[0])
	{
		j = i;
		while (j++ < max[1])
		{
			k = j;
			while (k++ < max[2])
			{
				printout(i, j, k);
				if (!(i == max[0] && j == max[1] && k == max[2]))
					write(STDOUT_FILENO, DELIMITER, sizeof(DELIMITER) - 1);
			}
		}
	}
}
