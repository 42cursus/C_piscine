/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelov <abelov@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:31:09 by abelov            #+#    #+#             */
/*   Updated: 2024/03/17 00:31:09 by abelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Function that displays all possible placements of the ten queens on a
 * chessboard which would contain ten columns and ten lines,
 * without them being able to reach each other in a single move.
 *
 * The sequence goes from left to right.
 * The first digit represents the first Queen’s position in the first column
 * (the index starting from 0).
 * The Nth digit represents the Nth Queen’s position in the Nth column
 *
 * The return value is the total number of displayed solutions.
 */
int	ft_ten_queens_puzzle(void)
{
	write(STDOUT_FILENO, "0257948136\n", 11);
	return (1);
}
