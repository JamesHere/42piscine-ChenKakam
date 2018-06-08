/*
strcmp() compares the entire string down to the end, 
while strncmp() only compares the first n characters of the strings. 
It's a little funky what they return. 
Basically it's a difference of the strings, 
so if the strings are the same, it'll return zero 
(since the difference is zero).
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned index;

	index = 0;
	while ((s1[index] != '\0' && s2[index] != '\0') && index < n)
	{
		if (s1[index] < s2[index])
		{
			return (-1);
		}
		if (s1[index] > s2[index])
		{
			return (1);
		}
		index++;
	}
	if (index == n)
		return (0);
	else
		return (s1[index] - s2[index]);
}
