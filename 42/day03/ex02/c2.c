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
	if (nb > 10)
	{
		ft_putchar((nb / 10) + 48);
		ft_putchar((nb % 10) + 48);
	}
	else
	{
		ft_putchar((nb % 10) + 48);
	}
}



void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 42;
	int b = 66;
	ft_putchar('a');
	ft_putchar(':');
	ft_putchar(' ');
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putchar('b');
	ft_putchar(':');
	ft_putchar(' ');
	ft_putnbr(b);
	ft_putchar('\n');
	//===after swap====

	ft_putchar('=');
	ft_putchar('=');
	ft_putchar('=');
	ft_putchar('=');
	ft_putchar('\n');

	ft_swap(&a, &b);
	ft_putchar('a');
	ft_putchar(':');
	ft_putchar(' ');
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putchar('b');
	ft_putchar(':');
	ft_putchar(' ');
	ft_putnbr(b);

	return (0);
}