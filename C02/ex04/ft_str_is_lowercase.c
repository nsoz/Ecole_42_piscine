int ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while(str[c])
	{
		if(!(str[c] >= 'a' && str[c] <= 'z'))
		{
			return (0);
		}
	c++;
	}
	return (1);
}
