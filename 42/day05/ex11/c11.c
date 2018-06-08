
#include <stdio.h>

int	alphaCheck(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	if (str[0] != '\0')
	{
		while (str[index])
		{
			if (!(alphaCheck(str[index])))
				return (0);
			index++;
		}
	}
	return (1); //empty return 0
}







int	main()
{
	char c[] = "giuvndgisjjnvdiur";
	char a[] = "vuierh fhisufhe";
	char g[] = "eiosj4fsUE34";
	char r[] = "a";

	printf("%d\n", ft_str_is_alpha(c));
	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(g));
	printf("%d\n", ft_str_is_alpha(r));
	return 0;
}