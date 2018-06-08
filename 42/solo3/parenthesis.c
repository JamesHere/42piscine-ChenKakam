/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parenthesis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 22:17:13 by kachen            #+#    #+#             */
/*   Updated: 2018/06/02 22:17:14 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
