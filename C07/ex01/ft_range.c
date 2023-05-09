#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	range;
	char	*dest;
	int	c;

	c = 0;
	range = max - min;
	dest = malloc(sizeof(int) * range);
	if(dest == NULL)
		return (NULL);
	while(min < max)
	{
		dest[c] = min;
		c++;
		min++;
	}
	return (dest);
}
