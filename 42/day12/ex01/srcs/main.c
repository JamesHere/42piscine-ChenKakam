/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kachen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:54:24 by kachen            #+#    #+#             */
/*   Updated: 2018/05/31 14:54:25 by kachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define NBYTE 4096

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_error(int argc)
{
	char c;

	if (argc == 1)
	{
		while (read(0, &c, 1))
			write(1, &c, 1);
		return (1);
	}
	return (0);
}

void	ft_bad_name(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": No such file or directory\n");
}

void	ft_folder_name(char *str)
{
	ft_putstr("cat: ");
	ft_putstr(str);
	ft_putstr(": Is a directory\n");
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	int		ret;
	char	buf[NBYTE + 1];

	if (ft_error(argc))
		return (0);
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			ft_bad_name(argv[i]);
		else if (read(fd, 0, 0) < 0)
			ft_folder_name(argv[i]);
		else
			while ((ret = read(fd, buf, NBYTE)))
			{
				buf[ret] = '\0';
				write(1, buf, ret);
			}
		close(fd);
		i++;
	}
	return (errno);
}
