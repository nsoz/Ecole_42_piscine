int	whitespace(char *str, int *count)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while((str[i] == 43 || str[i] == 45) && str[i])
	{
		if(str[i] == 45)
		sign *= -1;
		i++;
	}
	*count = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = whitespace(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
