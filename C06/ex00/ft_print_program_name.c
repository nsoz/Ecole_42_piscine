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
	if(ac > 0)
	{
		ft_putstr(av[0]);
	}
	return 0;
}
