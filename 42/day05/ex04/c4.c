char	*ft_strncpy(char *dest, char *src, unsigned n)
{
	unsigned index;

	index =0;
	while (index < n && src[i] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	while (index < n) //or <= the size of dest? I don't get it
	{
		dest[index] = '/0';
		index++;
	}
	return (dest);
}