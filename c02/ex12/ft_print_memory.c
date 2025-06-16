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
#include <sys/uio.h>
#include <sys/types.h>

#define BUF_SIZE 81
#define BYTES_PER_LINE 16

size_t	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

struct iovec	pad_spaces(struct iovec *mem, char *buf, size_t *offsets)
{
	size_t	off1;
	size_t	off2;

	off1 = offsets[0];
	off2 = offsets[1];
	mem->iov_len--;
	if (!mem->iov_len)
	{
		while (off1 < 58)
			buf[off1++] = ' ';
	}
	buf[off2++] = '\n';
	buf[off2] = '\0';
	return (*mem);
}

char	*ft_ultoa_buf_base(u_long abs, char *buf, size_t length, char pad)
{
	char			*ptr;
	const char		hex_base[] = "0123456789abcdef";
	size_t const	radix = sizeof(hex_base) - 1;

	ptr = buf + --length;
	while (abs >= radix && length--)
	{
		*ptr-- = hex_base[(abs % radix)];
		abs /= radix;
	}
	*ptr-- = hex_base[abs];
	while (length--)
		*ptr-- = pad;
	return (buf);
}

struct iovec	ft_put_string(struct iovec mem, char *buf)
{
	char	c;
	size_t	n;
	size_t	off1;
	size_t	off2;

	ft_ultoa_buf_base((u_quad_t)mem.iov_base, buf, __SIZEOF_POINTER__ * 2, '0');
	off1 = (__SIZEOF_POINTER__ * 2) + 2;
	off2 = 58;
	n = -1;
	while (++n < BYTES_PER_LINE)
	{
		ft_ultoa_buf_base(*(u_char *)mem.iov_base, buf + off1, 2, '0');
		c = *(char *)mem.iov_base++;
		if (!((c >= '\x20') && (c != '\x7f')))
			c = '.';
		buf[off2++] = c;
		off1 += 2;
		if ((n % 2))
			buf[off1++] = ' ';
		if (!pad_spaces(&mem, buf, (size_t []){off1, off2}).iov_len)
			break ;
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
	struct iovec	mem;
	char			buf[BUF_SIZE];

	buf[__SIZEOF_POINTER__ * 2] = ':';
	buf[__SIZEOF_POINTER__ * 2 + 1] = ' ';
	mem.iov_len = size;
	mem.iov_base = addr;
	if (size == 0 || !addr)
		return (addr);
	while (mem.iov_len > 0)
	{
		mem = ft_put_string(mem, buf);
		write(STDOUT_FILENO, buf, ft_strlen(buf));
	}
	return (addr);
}
