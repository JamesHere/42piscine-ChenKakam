/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 12:43:47 by kachen            #+#    #+#             */
/*   Updated: 2018/06/02 12:43:48 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	do_op(int a, int b, char operator)
{
	if (operator == '+')
		return (a + b);
	else if (operator == '-')
		return (a - b);
	else if (operator == '/')
		return (a / b);
	else if (operator == '*')
		return (a * b);
	else if (operator == '%')
		return (a % b);
	return (0);
}
