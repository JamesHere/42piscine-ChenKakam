#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int r;
	if (nb == 0 || nb == 1)
	{
		r = 1;
	}
	else
	{
		r = ft_iterative_factorial(nb - 1) * nb;
	}

	return (r);
}

int main()
{
	int nb;
	nb = ft_iterative_factorial(8);
	printf("%d", nb);
	return (0);
}
