#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	if (nb % 2 == 0 || nb % 3 == 0)
	{
		return (0);
	}
	while ((i * i) <= nb && i <= 46340)
	{
		if (nb % i == 0)
		{
			//printf("%d", i);
			//2147483647
			return (0);
		}

		i+=1;
	}
	return (1);
}

int main()
{
	int c = ft_is_prime(198);
	printf("%d", c);
	return (0);
}