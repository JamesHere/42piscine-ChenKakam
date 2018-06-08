#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int result;

	if (power < 0 || nb == 0)
	{
		return (0);
	}
	if(power == 0 || nb == 1)
	{
		return (1);
	}
	result = nb * ft_recursive_power(nb, power - 1);
	return result;
}


int main()
{
	int nb;
	nb = ft_recursive_power(42,0);
	printf("%d", nb);
	return (0);
}
