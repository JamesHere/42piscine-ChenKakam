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


void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a/b);
	*mod = (a%b);
}

//===========

int main()
{
	int a = 42;
	int b = 4;
	int d;
	int m;
	ft_div_mod(a,b,&d,&m);
	ft_putchar('d');
	ft_putchar(':');
	ft_putnbr(d);
	ft_putchar('\n');
	ft_putchar('m');
	ft_putchar(':');
	ft_putnbr(m);


	return (0);
}