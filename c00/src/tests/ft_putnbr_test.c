/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:26:26 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 03:26:27 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"

#define BUFSIZE 20
#define READ_END STDIN_FILENO
#define WRITE_END STDOUT_FILENO

static
ssize_t	run_on_pipe(char *buf, int nbr)
{
	int		fd[2];
	int		terminal_fd;
	ssize_t	bytes_read;

	if (pipe(fd) < 0)
	{
		fprintf(stderr, "(%s:%d, %s): ", __FILE__, __LINE__, __func__);
		return (perror("pipe failed"), -1);
	}
	terminal_fd = dup(STDOUT_FILENO);
	dup2(fd[WRITE_END], STDOUT_FILENO);
	ft_putnbr(nbr);
	close(fd[WRITE_END]);
	dup2(terminal_fd, STDOUT_FILENO);
	bytes_read = read(fd[READ_END], buf, BUFSIZE);
	if (bytes_read < 0)
		return (perror("read failed"), -1);
	buf[bytes_read] = '\0';
	close(fd[READ_END]);
	return (bytes_read);
}

void	run_putnbr_test(int nbr, const char *const	expected)
{
	int			check_val;
	ssize_t		bytes_read;
	char *const	buf = (char [BUFSIZE + 1]){0x0};
	char *const	checkbuf = (char [BUFSIZE]){0x0};

	snprintf(checkbuf, BUFSIZE, "%s", expected);
	bytes_read = run_on_pipe(buf, nbr);
	check_val = (bytes_read == (ssize_t)ft_strlen(checkbuf));
	if (!check_val)
	{
		fprintf(stdout, "bytes_read doesn't match expected value\n");
		fprintf(stdout, "got return size \"%zd\""
			" whilst [\"%zu\"] was to be expected\n",
			bytes_read, ft_strlen(checkbuf));
	}
	if (bytes_read > 0)
	{
		check_val = !ft_strcmp(buf, checkbuf);
		if (!check_val)
			fprintf(stdout, "got \"%.*s\" whilst \"%s\""
				" was to be expected\n", (int)bytes_read, buf, checkbuf);
	}
	check(check_val);
}

/**
 * Chapter X
 * Exercise 07: ft_putnbr
 *
 * Allowed functions : write
 * Create a function that displays the number entered as a parameter.
 *
 * Constrains:
 * 	 INT_MIN <= nbr <=INT_MAX
 */
int	ft_putnbr_test(void)
{
	int			i;
	int			nbr;
	const char	*expected;
	static long	test_data[][2] = {
	{INT_MIN, (long)"-2147483648"},
	{INT_MAX, (long)"2147483647"},
	{42, (long)"42"},
	{-100, (long)"-100"},
	};

	ft_print_title("ft_putnbr_test");
	i = -1;
	while (++i < (int)(sizeof(test_data) / sizeof(test_data[0])))
	{
		nbr = (int)test_data[i][0];
		expected = (const char *)test_data[i][1];
		run_putnbr_test(nbr, expected);
	}
	return (0);
}
