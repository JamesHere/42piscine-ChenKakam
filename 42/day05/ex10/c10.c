
#include <unistd.h>
#include <stdio.h>


void	ft_putchar(char c)
{
	write (1, &c, 1);
}


int		UpperCheck(char c, int *i, int *cnt)
{
	if (c >= 'A' && c <= 'Z')
	{	
		*cnt=*cnt+1;
		if (*i != 1)
			return (2); //upper -> lower
		else
		{
			*i = 0;
			return (1); //no change
		}
	}
	return (0); //no upper
}

int		LowerCheck(char c, int *i, int *cnt)
{
	if (c >= 'a' && c<= 'z')
	{
		*cnt=*cnt+1;
		if (*i == 1)
		{
			*i = 0;
			return (2); //lower -> upper
		}
		else
			return (1); //no change
	}
	return (0); //no lower

}

void	numCheck(char c, int *i, int *cnt)
{
	if ((c >= '0' && c <= '9'))
	{
		*cnt = *cnt+1;
		if (*i == 1)
		{
			*i = 0;
		}
	}
}


char	*ft_strcapitalize(char *str)
{
	int index;
	int isUpper;
	int cnt;

	cnt = 0;
	index = 0;
	isUpper = 1;
	while (str[index])
	{
		if (UpperCheck(str[index], &isUpper, &cnt) == 2)
			str[index] += 32;
		else if (LowerCheck(str[index],&isUpper, &cnt) == 2)
			str[index] -= 32;
		else
			numCheck(str[index], &isUpper, &cnt);
			if (cnt == 0)
				isUpper = 1;
		index++;
		cnt = 0;
	}
	return (str);
}



int main()
{
	char str[] = "difu rfns- 4oij oij4oi oij4-  Rd  R R rw";
	char *res;
	res = ft_strcapitalize(str);

	int i = 0;
	while (res[i])
	{
		ft_putchar(res[i]);
		i++;
	}
	return 0;
}