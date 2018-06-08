#include <stdio.h>


int numCheck(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	if (str[0] != '\0')
	{
		while (str[index])
		{
			if (!(numCheck(str[index])))
				return (0);
			index++;
		}
	}
	return (1); //empty return 0
}

int	main()
{
	char c[] = "4345345";
	char a[] = "v345e";
	char g[] = "344";
	char r[] = "3";

	printf("%d\n", ft_str_is_numeric(c));
	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(g));
	printf("%d\n", ft_str_is_numeric(r));
	return 0;
}