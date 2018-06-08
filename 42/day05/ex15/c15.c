
int		ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] - 33 < 0 || str[index] != 127)
			return (0);
	}
	return (1);
}