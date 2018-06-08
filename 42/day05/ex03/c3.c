#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];

	return (dest);
}




int main()
{
	char s1[] = "old";
	char s2[] = "new";
	char *s3;
	s3 = ft_strcpy(s1, s2);

	int index = 0;
	while (s3[index])
	{
		ft_putchar(s3[index]);
		index++;
	}
}