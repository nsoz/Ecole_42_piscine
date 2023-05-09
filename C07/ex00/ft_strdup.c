#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int	c;
	char 	*dest;

	c = 0;
	dest = malloc(sizeof(src) + 1);
	if(dest == NULL)
		return (NULL);
	while(src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
