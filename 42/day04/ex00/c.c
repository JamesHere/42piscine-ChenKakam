#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int index;
	int result;

	index = nb;
	result = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	
	while (index >= 1)
	{
		result *= index;
		index--;
	}
	return (result);
}

int main()
{
	int r = ft_iterative_factorial(12);
	printf("%d",r);
	return (0);

}