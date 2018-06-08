#include <unistd.h>


void 	sorting(char *str, int len)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	while (i < len - 1)
	{
		while (j < len - 1 - i)
		{
			if(str[j] > str[j+1])
			{
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

int		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(int argc, char **argv)
{
	int size;
	int i;
	int len;

	size = 1;
	i = 0;
	while (size < argc)
	{
		len = ft_strlen(argv[size]);
		sorting(argv[size], len);
		while (argv[size][i] != '\0')
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
