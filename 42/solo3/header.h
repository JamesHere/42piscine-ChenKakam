/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 12:37:29 by kachen            #+#    #+#             */
/*   Updated: 2018/06/02 12:37:30 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

char			*rm_spaces(char *str);
int				parenthesis(char **str);
int				do_op(int a, int b, char operator);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
void			ft_putstr(char *str);
void			ft_strlen(char *str);
int				solve(char **str);
int				special_solve(char **str);

#endif