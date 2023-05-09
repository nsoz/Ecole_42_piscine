#include <stdlib.h>
int	*ft_range(int **range,int min, int max)
{
	int	r;
	char	*dest;
	int	c;

	c = 0;
	r = max - min;
	dest = malloc(sizeof(int) * r);
	if(dest == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = dest;
	while(min < max)
	{
		dest[c] = min;
		c++;
		min++;
	}
	return (dest);
}
