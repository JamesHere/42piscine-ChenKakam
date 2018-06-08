/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:23:39 by kachen            #+#    #+#             */
/*   Updated: 2018/05/28 21:23:42 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

typedef struct	s_cal
{
	char	op;
	int		(*f)(int a, int b);
}				t_cal;
int				ft_atoi(char *str);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_mod(int a, int b);
int				ft_div(int a, int b);
int				ft_do_op(int a, char op, int b);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
void			ft_putstr(char *str);

#endif
