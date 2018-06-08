

int upperCheck(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}


int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	if (str[0] != '\0')
	{
		while (str[index])
		{
			if (!(upperCheck(str[index])))
				return (0);
			index++;
		}
	}
	return (1); //empty return 0
}