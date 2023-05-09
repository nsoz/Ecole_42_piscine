int	ft_iterative_factorial(int nb)
{
	int	c;

	c = nb - 1;
	while(c > 1)
	{
		nb *= c;
		c--;
	}
	if(nb < 0)
	{
		return (0);
	}
	return (nb);
}
