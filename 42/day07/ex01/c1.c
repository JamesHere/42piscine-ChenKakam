
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *ary;
	int index;

	index = 0;
	ary = (int*)malloc(sizeof(*ary) * (max - min));
	while (min < max)
	{
		ary[index] = min;
		index++;
		min++;
	}
	return (ary);
}
