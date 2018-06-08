#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc > 0)
	{
		int index;

		index = 2;
		while (*(argv[0] + index))
		{
			ft_putchar(*(argv[0] + index));
			index++;
		}
		ft_putchar('\n');
	}

	return (0);
}