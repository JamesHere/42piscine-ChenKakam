#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	*ft_strrev(char *str)
{
	int max = 0;
	while (str[max] != '\0')
	{
		max++;
	}
	max--;
	int index;

	index = 0;
	char temp[max];
	while (index <= max)
	{
		temp[index] = str[index];
		index++;
	}
	index = 0;
	while (max >= 0)
	{
		str[index] = temp[max];
		index++;
		max--;
	}
	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}


	return str;
}


int main()
{
	char str[] = "abcde";
	ft_strrev(str);
	return (0);
}