/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 19:24:34 by kachen            #+#    #+#             */
/*   Updated: 2018/05/27 19:24:35 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		solve(int **board, int row, int col)
{
	int num;

	if (row == 8 && col == 9)
		return (1);
	if (col == 9)
	{
		row++;
		col = 0;
	}
	if (board[row][col] != 0)
		return (solve(board, row, col + 1));
	num = 1;
	while (num <= 9)
	{
		if (g_check(board, row, col, num))
		{
			board[row][col] = num;
			if (solve(board, row, col + 1))
				return (1);
		}
		num++;
	}
	board[row][col] = 0;
	return (0);
}

void	display(int **board)
{
	int c;
	int r;

	c = 0;
	r = 0;
	while (r < 9)
	{
		while (c < 8)
		{
			ft_putnbr(board[r][c]);
			ft_putchar(' ');
			c++;
		}
		ft_putnbr(board[r][c]);
		c = 0;
		r++;
		ft_putchar('\n');
	}
}

int		**sudo_setup(char **argv)
{
	int c;
	int r;
	int **board;

	r = 1;
	c = 0;
	board = (int **)malloc(sizeof(int*) * 9);
	while (r < 10)
	{
		board[r - 1] = (int *)malloc(sizeof(int) * 9);
		while (c < 9)
		{
			if (argv[r][c] == '\0')
				return (0);
			if (!(num_check(argv[r][c])))
				board[r - 1][c] = 0;
			else
				board[r - 1][c] = (argv[r][c] - 48);
			c++;
		}
		c = 0;
		r++;
	}
	return (board);
}

int		main(int argc, char **argv)
{
	int **board;

	if (argc == 10)
	{
		board = sudo_setup(argv);
		if (board)
		{
			if (solve(board, 0, 0))
			{
				display(board);
				free(board);
			}
			else
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
