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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int d;
	int m;

	d = (*a / *b);
	m = (*a % *b);
	*a = d;
	*b = m;
}


int main()
{
	int a = 42;
	int b = 4;
	ft_ultimate_div_mod(&a,&b);
	ft_putchar('a');
	ft_putchar(':');
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putchar('b');
	ft_putchar(':');
	ft_putnbr(b);

}