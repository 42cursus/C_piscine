/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:24:55 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 02:24:56 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"
#include "comb2_test_data.h"

#define BUFSIZE 65536
#define READ_END STDIN_FILENO
#define WRITE_END STDOUT_FILENO

static ssize_t run_on_pipe(char *buf)
{
	int		fd[2];
	int		terminal_fd;
	ssize_t	bytes_read;

	if (pipe(fd) < 0)
	{
		fprintf(stderr, "in %s at %s:%d", __func__, __FILE__, __LINE__);
		return (perror("pipe failed"), -1);
	}
	terminal_fd = dup(STDOUT_FILENO);
	dup2(fd[WRITE_END], STDOUT_FILENO);

	ft_print_comb2();

	close(fd[WRITE_END]);
	dup2(terminal_fd, STDOUT_FILENO);
	if ((bytes_read = read(fd[READ_END], buf, BUFSIZE)) < 0)
		return (perror("read failed"), -1);
	buf[bytes_read] = '\0';
	close(fd[READ_END]);

	return (bytes_read);
}

int	ft_print_comb2_test(void)
{
	int		check_val;
	char	buf[BUFSIZE + 1] = {0};
	char	checkbuf[BUFSIZE] = {0};
	ssize_t	bytes_read = 0;

	ft_print_title("ft_print_comb2_test");

	snprintf(checkbuf, BUFSIZE, "%s", COMB2_TEST_DATA);

	bytes_read = run_on_pipe(buf);

	check_val = (bytes_read == ft_strlen(checkbuf));
	if (!check_val)
	{
		fprintf(stdout, "bytes_read doesn't match expected value\n");
		fprintf(stdout, "got return size \"%d\" whilst [\"%d\"] was to be expected\n",
				bytes_read, ft_strlen(checkbuf));
	}
	if (bytes_read > 0)
	{
		check_val = !ft_strcmp(buf, checkbuf);
		if (!check_val)
			fprintf(stdout, "got \"%.*s\" whilst \"%s\" was to be expected\n", bytes_read, buf, checkbuf);
	}
	check(check_val);
	return (0);
}
