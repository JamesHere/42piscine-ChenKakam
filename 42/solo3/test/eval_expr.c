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

#include "headers.h"

int		parenthesis(char **str)
{
	int		next;
	int		sign;

	next = 0;
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
		next = solve(str);
		if ((*str)[0] == ')')
			*str = *str + 1;
		return (sign * next);
	}
	while ((*str)[0] >= '0' && (*str)[0] <= '9')
	{
		next = (next * 10) + (*str)[0] - 48;
		*str = *str + 1;
	}
	return (sign * next);
}

int		special_solve(char **str)
{
	int		res;
	int		next;
	char	operator_2;

	res = parenthesis(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		operator_2 = (*str)[0];
		*str = *str + 1;
		next = parenthesis(str);
		res = do_op(res, next, operator_2);
	}
	return (res);
}

int		solve(char **str)
{
	int		res;
	int		next;
	char	operator;

	res = parenthesis(str);
	while ((*str)[0] != '\0' && (*str)[0] != ')')
	{
		operator = (*str)[0];
		*str = *str + 1;
		if (operator == '+' || operator == '-')
			next = special_solve(str);
		else
			next = parenthesis(str);
		res = do_op(res, next, operator);
	}
	return (res);
}

char	*rm_spaces(char *str)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	temp = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if (str[i] != ' ')
		{
			temp[j] = str[i];
			j = j + 1;
		}
		i = i + 1;
	}
	temp[j] = '\0';
	return (temp);
}

int		eval_expr(char *str)
{
	int result;

	str = rm_spaces(str);
	if (str[0] == '\0')
		result = 0;
	result = solve(&str);
	return (result);
}
