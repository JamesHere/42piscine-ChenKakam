#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

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
