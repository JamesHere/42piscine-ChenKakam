/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 12:45:22 by kachen            #+#    #+#             */
/*   Updated: 2018/05/27 19:24:50 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*void	error(void)
{
}*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int		g_check(int **board, int row, int col, int num)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		if (board[row][i] == num || board[i][col] == num)
			return (0);
		i++;
	}
	i = 0;
	j = 0;
	while (i < 3)
	{
		while(j < 3)
		{
			if (board[((row / 3) * 3) + i][(3 * (col / 3)) + j] == num)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}


int		solve(int **board, int row, int col)
{
	int num;
	if (row == 8 && col == 9)
		return (1);
	if(col == 9)
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



int		num_check(char c)
{
	if (c >= 49 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

void	display(int **board)
{
	int c;
	int r;

	c = 0;
	r = 0;
	while(r < 9)
	{
		while(c < 8)
		{
			ft_putnbr(board[r][c]);
			ft_putchar('-');
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
			printf("%s\n", "Before the solve");
			if(solve(board, 0, 0))
			{
				printf("%s\n", "Before the display");
				display(board);
				free(board);
			}
			else
			{
				write(1, "Error_3\n", 8);
				return (0);
			}
		}
		else
		{
			write(1, "Error_1\n", 8);
		}
	}
	else
	{
		write(1, "Error_2\n", 8);
	}
	return (0);
}