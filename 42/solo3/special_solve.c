/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_solve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 22:50:54 by kachen            #+#    #+#             */
/*   Updated: 2018/06/02 22:50:55 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		special_solve(char **str)
{
	int		nb1;
	int		nb2;
	char	operator;

	nb1 = parse_parenthesis(str);
	while ((*str)[0] == '*' || (*str)[0] == '/' || (*str)[0] == '%')
	{
		operator = (*str)[0];
		*str = *str + 1;
		nb2 = parse_parenthesis(str);
		nb1 = do_op(nb1, nb2, operator);
	}
	return (nb1);
}
