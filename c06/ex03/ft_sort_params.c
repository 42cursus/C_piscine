/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:35:06 by abelov            #+#    #+#             */
/*   Updated: 2023/10/20 12:56:17 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sysexits.h>
#include <unistd.h>
#include <stdbool.h>

static void	ft_swap(char **argv, unsigned int j)
{
	char	*temp;

	temp = argv[j];
	argv[j] = argv[j + 1];
	argv[j + 1] = temp;
}

static int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2++)
		if (*s1++ == 0)
			return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)--s2);
}

static void	ft_sort_arg_tab(char **tab, int size)
{
	int		i;
	int		j;
	bool	swapped;

	i = 1;
	while (i < size)
	{
		swapped = false;
		j = 1;
		while (j < size - i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap(tab, j);
				swapped = true;
			}
			j++;
		}
		i++;
		if (!swapped)
			break ;
	}
}

static int	ft_strlen(char *str)
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
	ft_sort_arg_tab(argv, argc);
	argg = 1;
	while (argg < argc)
	{
		str = argv[argg++];
		write(STDOUT_FILENO, str, ft_strlen(str));
		write(STDOUT_FILENO, "\n", 1);
	}
	return (EX_OK);
}
