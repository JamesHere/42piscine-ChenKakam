#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= 46340)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int main()
{
	int rec = ft_sqrt(42);
	printf("%d", rec);
}