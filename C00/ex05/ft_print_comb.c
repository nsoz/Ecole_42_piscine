#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = 0;
	while (i <= 7)
	{
		j = 1;
		while (j <= 8)
		{
			k = 2;
			while (k <= 9)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i != 7)
				{
					ft_putchar(",")
					ft_putchar(" ");
				}
			k++;
			}
		j++;
		}
	i++;
	}
}
