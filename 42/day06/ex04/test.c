#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] > s2[index])
			return (1);
		if (s1[index] < s2[index])
			return (-1);
		index++;
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc - 1)
	{
		if(ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);	
}