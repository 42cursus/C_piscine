/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:47:52 by abelov            #+#    #+#             */
/*   Updated: 2024/03/15 14:14:01 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_is_separator(char c, char *charset)
{
	int			i;
	const char	null_byte = '\0';

	i = 0;
	while (charset[i] != null_byte)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == null_byte)
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int			i;
	int			words;
	const char	null_byte = '\0';

	words = 0;
	i = 0;
	while (str[i] != null_byte)
	{
		if (char_is_separator(str[i + 1], charset) == 1
			&& char_is_separator(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *from, char *charset)
{
	int			i;
	const char	null_byte = '\0';

	i = 0;
	while (char_is_separator(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = null_byte;
}

void	write_split(char **split, char *str, char *charset)
{
	int			i;
	int			j;
	int			word;
	const char	null_byte = '\0';

	word = 0;
	i = 0;
	while (str[i] != null_byte)
	{
		if (char_is_separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_separator(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		words;

	words = count_words(str, charset);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	split[words] = 0;
	write_split(split, str, charset);
	return (split);
}
