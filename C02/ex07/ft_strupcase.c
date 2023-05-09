char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while(str[c])
	{
		if(str[c] >= 'a' && str[c] <= 'z')
		{
		str[c] -= 32;
		}
	c++;
	}
	return (str);
}
