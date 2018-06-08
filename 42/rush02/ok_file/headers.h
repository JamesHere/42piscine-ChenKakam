/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:08:13 by kachen            #+#    #+#             */
/*   Updated: 2018/06/03 16:08:14 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		cmp(char *s1, char *s2, int *flag);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	rush00(int col, int row, int r, int c);
char	*setup00(int col, int row, int i);
char	rush01(int col, int row, int r, int c);
char	*setup01(int col, int row, int i);
char	rush02(int col, int row, int r, int c);
char	*setup02(int col, int row, int i);
char	rush03(int col, int row, int r, int c);
char	*setup03(int col, int row, int i);
char	rush04(int col, int row, int r, int c);
char	*setup04(int col, int row, int i);
void	ft_putnbr(int nb);

#endif
