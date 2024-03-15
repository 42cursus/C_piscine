/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:25:44 by abelov            #+#    #+#             */
/*   Updated: 2024/03/15 12:19:20 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BUF_SIZE 75
#define BYTES_PER_LINE 16

typedef struct s_mem {
	size_t	size;
	void	*ptr;
}					t_mem;

size_t	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

t_mem	pad_spaces(t_mem *mem, char *buf, size_t offset1, size_t offset2)
{
	mem->size--;
	if (!mem->size)
	{
		while (offset1 < 58)
			buf[offset1++] = ' ';
		buf[offset2++] = '\n';
		buf[offset2++] = '\0';
	}
	return (*mem);
}

char	*ft_ultoa_buf_base(unsigned long abs,
							char *buf, size_t length, char pad)
{
	char			*ptr;
	char			c;
	const char		*hex_base = "0123456789abcdef";
	size_t const	radix = 16;

	ptr = buf + --length;
	while (abs >= radix && length--)
	{
		c = hex_base[(abs % radix)];
		*ptr-- = c;
		abs /= radix;
	}
	*ptr-- = hex_base[abs];
	while (length--)
		*ptr-- = pad;
	return (buf);
}

t_mem	ft_put_string(t_mem mem, char *buf)
{
	char	c;
	size_t	n;
	size_t	offset1;
	size_t	offset2;

	ft_ultoa_buf_base((unsigned long long) mem.ptr, buf,
		sizeof(void*) * 2, '0');
	n = 0;
	offset1 = (sizeof(void *) * 2) + 2;
	offset2 = 58;
	while (n < BYTES_PER_LINE)
	{
		ft_ultoa_buf_base(*(unsigned char *)mem.ptr, buf + offset1, 2, '0');
		c = *(char *)mem.ptr++;
		if (!((c >= '\x20') && (c != '\x7f')))
			c = '.';
		buf[offset2++] = c;
		offset1 += 2;
		if ((n % 2))
			buf[offset1++] = ' ';
		if (!pad_spaces(&mem, buf, offset1, offset2).size)
			break ;
		n++;
	}
	return (mem);
}

/**
 * https://www.ibm.com/docs/en/zos/2.5.0
 * 	?topic=initializers-designated-aggregate-types-c-only
 * Designated initializers, a C99 feature, are supported for aggregate types,
 * including arrays, structures, and unions.
 * A designated initializer, or designator, points out a particular element
 * to be initialized. A designator list is a comma-separated list
 * of one or more designators.
 */
void	*ft_print_memory(void *addr, size_t size)
{
	t_mem	mem;
	char	buf[BUF_SIZE];

	buf[(sizeof(void *) * 2)] = ':';
	buf[(sizeof(void *) * 2) + 1] = ' ';
	buf[BUF_SIZE - 1] = '\n';
	mem.size = size;
	mem.ptr = addr;
	if (size == 0 || !addr)
		return (addr);
	while (mem.size > 0)
	{
		mem = ft_put_string(mem, buf);
		write(STDOUT_FILENO, buf, ft_strlen(buf));
	}
	return (addr);
}
