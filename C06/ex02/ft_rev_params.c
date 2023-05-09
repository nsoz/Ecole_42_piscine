#include <unistd.h>
void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while(str[c])
	{
		write(1, &str[c], 1);
		c++;
	}
}
int	main(int ac, char **av) 
{
	int	c;

	c = ac - 1;
	if(ac > 1)
	{
		while(c > 0)
		{
			ft_putstr(av[c]);
			c--;
		}
	}
	return 0;
}
