/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:27:24 by kachen            #+#    #+#             */
/*   Updated: 2018/05/23 14:27:26 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int size;
	int i;

	size = argc - 1;
	i = 0;
	while (size > 0)
	{
		while (argv[size][i])
		{
			ft_putchar(argv[size][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		size--;
	}
	return (0);
}
