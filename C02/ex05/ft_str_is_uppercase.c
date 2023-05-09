int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while(str[c])
	{
		if(!(str[c] >= 'A' && str[c] <= 'Z'))
		{
		return (0);
		}
	c++;
	}
	return (1);
}
