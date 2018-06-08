#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void	ft_putstr(char *str)
{
	int cnt;

	cnt=0;
	while(str[cnt])
	{
		ft_putchar(str[cnt]);
		cnt++;
	}
}


int main()
{
	char str[] = "GenjiGod";
	ft_putstr(str);
	return (0);
}


/*
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
*/