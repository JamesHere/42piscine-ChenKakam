/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 15:37:19 by kachen            #+#    #+#             */
/*   Updated: 2018/06/02 15:37:20 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		parenthesis(char **str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	if ((*str)[0] == '+' || (*str)[0] == '-')
	{
		if ((*str)[0] == '-')
			sign = -1;
		*str = *str + 1;
	}
	if ((*str)[0] == '(')
	{
		*str = *str + 1;
		nbr = solve(str);
		if ((*str)[0] == ')')
			*str = *str + 1;
		return (sign * nbr);
	}
	while ('0' <= (*str)[0] && (*str)[0] <= '9')
	{
		nbr = (nbr * 10) + (*str)[0] - '0';
		*str = *str + 1;
	}
	return (sign * nbr);
}

int		special_solve(char **str)
{
	int		nb1;
	int		nb2;
	char	operator;

	nb1 = parenthesis(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		operator = (*str)[0];
		*str = *str + 1;
		nb2 = parenthesis(str);
		nb1 = do_op(nb1, nb2, operator);
	}
	return (nb1);
}

int		solve(char **str)
{
	int		nb1;
	int		nb2;
	char	operator;

	nb1 = parenthesis(str);
	while ((*str)[0] != '\0' && (*str)[0] != ')')
	{
		operator = (*str)[0];
		*str = *str + 1;
		if (operator == '+' || operator == '-')
			nb2 = special_solve(str);
		else
			nb2 = parenthesis(str);
		nb1 = do_op(nb1, nb2, operator);
	}
	return (nb1);
}

char	*rm_spaces(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	str2 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str2[j] = str[i];
			j = j + 1;
		}
		i = i + 1;
	}
	str2[j] = '\0';
	return (str2);
}


int		eval_expr(char *str)
{
	str = rm_spaces(str);
	if (str[0] == '\0')
		return (0);
	return (solve(&str));
}
