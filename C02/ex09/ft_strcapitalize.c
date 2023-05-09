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
char	*ft_strcapitalize(char *str)
{
	int	c;
	int	big;

	ft_strlowcase(str);    
	c = 0;
	big = 1;
	while(str[c])
	{
		if(str[c] >= 'a' && str[c] <= 'z')
		{
			if(big == 1)
				str[c] -= 32;
			big = 0;
		}
		else if(str[c] >= '0' && str[c] <= '9')
			big = 0;
		else
			big = 1;
		c++;
	}
	return (str);
}
