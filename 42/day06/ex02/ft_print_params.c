/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:38:36 by kachen            #+#    #+#             */
/*   Updated: 2018/05/23 13:38:38 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int size;
	int i;

	size = 1;
	i = 0;
	while (size < argc)
	{
		while (argv[size][i])
		{
			ft_putchar(argv[size][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		size++;
	}
	return (0);
}
