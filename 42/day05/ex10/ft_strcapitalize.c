/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 22:35:16 by kachen            #+#    #+#             */
/*   Updated: 2018/05/21 22:35:17 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		uppercheck(char c, int *i, int *cnt)
{
	if (c >= 'A' && c <= 'Z')
	{
		*cnt = *cnt + 1;
		if (*i != 1)
			return (2);
		else
		{
			*i = 0;
			return (1);
		}
	}
	return (0);
}

int		lowercheck(char c, int *i, int *cnt)
{
	if (c >= 'a' && c <= 'z')
	{
		*cnt = *cnt + 1;
		if (*i == 1)
		{
			*i = 0;
			return (2);
		}
		else
			return (1);
	}
	return (0);
}

void	numcheck(char c, int *i, int *cnt)
{
	if ((c >= '0' && c <= '9'))
	{
		*cnt = *cnt + 1;
		if (*i == 1)
		{
			*i = 0;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int index;
	int isupper;
	int cnt;

	cnt = 0;
	index = 0;
	isupper = 1;
	while (str[index])
	{
		if (uppercheck(str[index], &isupper, &cnt) == 2)
			str[index] += 32;
		else if (lowercheck(str[index], &isupper, &cnt) == 2)
			str[index] -= 32;
		else
		{
			numcheck(str[index], &isupper, &cnt);
			if (cnt == 0)
				isupper = 1;
		}
		index++;
		cnt = 0;
	}
	return (str);
}
