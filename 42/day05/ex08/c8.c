#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}


int main()
{
	char str[] = "awefs34523wefa234Wef";
	char *res;

	res = ft_strupcase(str);
	int index = 0;
	while (res[index] != '\0')
	{
		ft_putchar(res[index]);
		index++;
	}



	return (0);
}