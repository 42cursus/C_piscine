/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:38:40 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 02:38:41 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c00_tests.h"

#define BUFSIZE 1024
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

	ft_print_comb();

	close(fd[WRITE_END]);
	dup2(terminal_fd, STDOUT_FILENO);
	if ((bytes_read = read(fd[READ_END], buf, BUFSIZE)) < 0)
		return (perror("read failed"), -1);
	buf[bytes_read] = '\0';
	close(fd[READ_END]);

	return (bytes_read);
}


int ft_print_comb_test(void)
{
	int		check_val;
	char	buf[BUFSIZE + 1] = {0};
	char	checkbuf[BUFSIZE] = {0};
	ssize_t	bytes_read;

	ft_print_title("ft_print_comb_test");

	snprintf(checkbuf, BUFSIZE, "%s",
			 "012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, "
			 "027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, "
			 "048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, "
			 "123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, "
			 "139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, "
			 "169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, "
			 "247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, "
			 "289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, "
			 "369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, "
			 "479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789");

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
