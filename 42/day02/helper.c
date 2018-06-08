
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main(){
	ft_putchar((8/ 10)+48);
	ft_putchar((8 % 10));
}
