/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:03:16 by abelov            #+#    #+#             */
/*   Updated: 2023/10/26 22:03:17 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const char	g_ascii_zero_character = '\0';

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == 0 || base[i + 1] == 0)
		return (0);
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] <= 32 || base[i] == 127)
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (i);
}

int	check_and_skip(char *str, int *i)
{
	int	is_negative;

	is_negative = 1;
	while (str[*i] == ' ' || (str[*i] >= '\t' && str[*i] <= '\r'))
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			is_negative *= -1;
		*i += 1;
	}
	return (is_negative);
}

int	get_num(char c, char *base)
{
	int	n;

	n = 0;
	while (base[n] != '\0')
	{
		if (c == base[n])
			return (n);
		n++;
	}
	return (-1);
}

/*
 * The  ft_strncat() function  appends at most n bytes from src string to
 * the dest string, overwriting the terminating null byte ('\0') at the end
 * of dest, and then adds a terminating null byte. The strings may not overlap,
 * and the dest string must have enough space for the result. The src does not
 * need to be null-terminated if it contains n or more bytes.
 * The resulting string in dest is always null-terminated.
 * If  src  contains  n or more bytes, strncat() writes n+1 bytes to dest
 * (n from src plus the terminating null byte).
 * Therefore, the size of dest must be at least strlen(dest)+n+1.
 */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *const		save_pointer = dest;
	unsigned int	i;

	i = 0;
	while (*dest)
		dest++;
	while (*src && (i++ < nb))
		*dest++ = *src++;
	*dest = g_ascii_zero_character;
	return (save_pointer);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	is_negative;
	int	result;
	int	radix;

	i = 0;
	result = 0;
	radix = is_base_valid(base);
	if (!radix)
		return (result);
	is_negative = check_and_skip(str, &i);
	while (get_num(str[i], base) != -1)
	{
		result = result * radix + get_num(str[i], base);
		i += 1;
	}
	return (result * is_negative);
}
