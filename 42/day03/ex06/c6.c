#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putchar((nb / 10) + 48);
		ft_putchar((nb % 10) + 48);
	}
	else
	{
		ft_putchar((nb % 10) + 48);
	}
}

//===========



int	ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	return cnt;
}


int main()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int result = ft_strlen(str);
	ft_putnbr(result);

}