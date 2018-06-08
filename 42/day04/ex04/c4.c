#include <stdio.h>

int	ft_fibonacci(int index)
{
	int result;
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

int main()
{
	int res = ft_fibonacci(20);
	printf("%d", res);
	return (0);
}