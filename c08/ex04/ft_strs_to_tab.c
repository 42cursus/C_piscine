/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:41:13 by abelov            #+#    #+#             */
/*   Updated: 2024/03/10 22:44:52 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}				t_stock_str;

static inline int	ft_strlen(char *str)
{
	const char	*ostr = str;

	while (*str)
		str++;
	return (str - ostr);
}

char	*ft_strcpy(char *dest, char *src)
{
	char *const	save = dest;
	const char	null_byte = '\0';

	while (*src)
		*dest++ = *src++;
	*dest = null_byte;
	return (save);
}

char	*ft_strdup(char *src)
{
	char	*new;

	new = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new)
		return (NULL);
	return (ft_strcpy(new, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	i = 0;
	stock = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (NULL);
	while (i < ac)
	{
		stock[i] = (t_stock_str){
			.size = ft_strlen(av[i]),
			.str = av[i],
			.copy = ft_strdup(av[i])
		};
		i++;
	}
	stock[i] = (t_stock_str){
		.size = 0,
		.str = 0,
		.copy = 0
	};
	return (stock);
}
