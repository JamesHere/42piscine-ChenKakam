#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0 || nb == 0)
	{
		return (0);
	}

	if (power == 0 || nb == 1)
	{
		return (1);
	}

	while (power > 1)
	{
		result *= nb;
		power--;
	}

	return (result);
}

int main()
{
	int a = ft_iterative_power(3,0);
	printf("%d", a);
	return (0);
}