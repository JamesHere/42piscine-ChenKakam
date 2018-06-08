#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}


void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(214748364);
		ft_putnbr(8);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb/10);
		ft_putchar(nb % 10 + 48);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}


int main()
{
	//int nb = 42138;
	//printf("%d\n", (42138) % 10);
	ft_putnbr( -2147483648);
}