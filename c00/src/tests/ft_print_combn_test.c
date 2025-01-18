/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:29:28 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 03:29:28 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"
#include "combn_test_data.h"

#define BUFSIZE 4096
#define READ_END STDIN_FILENO
#define WRITE_END STDOUT_FILENO

static ssize_t run_on_pipe(char *buf, int nbr)
{
	int fd[2];
	int terminal_fd;
	ssize_t bytes_read;

	if (pipe(fd) < 0)
	{
		fprintf(stderr, "(%s:%d, %s): ", __FILE__, __LINE__, __func__);
		return (perror("pipe failed"), -1);
	}
	terminal_fd = dup(STDOUT_FILENO);
	dup2(fd[WRITE_END], STDOUT_FILENO);

	ft_print_combn(nbr);

	close(fd[WRITE_END]);
	dup2(terminal_fd, STDOUT_FILENO);
	if ((bytes_read = read(fd[READ_END], buf, BUFSIZE)) < 0)
		return (perror("read failed"), -1);
	buf[bytes_read] = '\0';
	close(fd[READ_END]);

	return (bytes_read);
}

void run_print_combn_test(int nbr, char *(*test_data)[9])
{
	int		check_val;
	char	buf[BUFSIZE + 1] = {0};
	char	checkbuf[BUFSIZE] = {0};
	ssize_t bytes_read;

	char *src = (*test_data)[nbr - 1];
	snprintf(checkbuf, BUFSIZE, "%s", src);

	bytes_read = run_on_pipe(buf, nbr);

	check_val = (bytes_read == ft_strlen(checkbuf));
	if (!check_val)
	{
		fprintf(stdout, "bytes_read doesn't match expected value\n");
		fprintf(stdout, "got return size \"%d\" whilst [\"%d\"] was to be expected\n",
				bytes_read, ft_strlen(checkbuf));
	}
	else if (bytes_read > 0)
	{
		check_val = !ft_strcmp(buf, checkbuf);
		if (!check_val)
			fprintf(stdout, "got \"%.*s\" whilst \"%s\" was to be expected\n", bytes_read, buf, checkbuf);
	}
	check(check_val);
}

/**
 * Chapter XI
 * Exercise 08: ft_print_combn
 *
 * Allowed functions : write
 * function that displays all different combinations of n numbers
 * by ascending order.
 *
 * Constrains:
 * 	 0 < n < 10
 */
int ft_print_combn_test(void)
{
	int i;

	static char *test_data[9] = {
		COMBN_TEST_DATA_ONE,
		COMBN_TEST_DATA_TWO,
		COMBN_TEST_DATA_THREE,
		COMBN_TEST_DATA_FOUR,
		COMBN_TEST_DATA_FIVE,
		COMBN_TEST_DATA_SIX,
		COMBN_TEST_DATA_SEVEN,
		COMBN_TEST_DATA_EIGHT,
		COMBN_TEST_DATA_NINE,
	};

	ft_print_title("ft_print_combn_test");

	i = 0;
	while (++i < 10)
		run_print_combn_test(i, test_data);
	return (0);
}
