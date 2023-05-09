char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while(str[c])
	{
		if(str[c] >= 'A' && str[c] <= 'Z')
		{
			str[c] += 32;
		}
		c++;
	}
	return (str);
}
