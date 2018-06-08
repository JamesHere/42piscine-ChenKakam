/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:44:40 by kachen            #+#    #+#             */
/*   Updated: 2018/05/23 12:44:41 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;

	if (argc > 0)
	{
		index = 0;
		while (argv[0][index])
		{
			ft_putchar(argv[0][index]);
			index++;
		}
		ft_putchar('\n');
	}
	return (0);
}
