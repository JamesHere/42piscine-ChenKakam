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

	while ((i * i) <= nb && i <= 46340)
	{
		if (nb % i == 0)
		{
			return (0);
		}

		i+=1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int isprime;

	isprime = ft_is_prime(nb);
	if (isprime == 1)
	{
		return (nb);
	}
	else
	{
		while (isprime != 1)
		{
			isprime = ft_is_prime(nb);	
			nb++;
		}
		nb--;
	}
	return (nb);
}



int main()
{
	int res = ft_find_next_prime(190);
	printf("%d\n", res);
	return 0;
}