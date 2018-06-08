#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++; 
	if (str[i] == '-')
		sign = 0;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result *= 10;
		result += ((str[i]) - 48);
		i++;
	}
	if (sign)
		return (result);
	else
		return (-result);
}

int	main()
{
	char str[] = "42";
	int res = ft_atoi(str);
	printf("%d\n", res+4);
}