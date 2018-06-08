/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 12:48:07 by kachen            #+#    #+#             */
/*   Updated: 2018/05/27 12:48:08 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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