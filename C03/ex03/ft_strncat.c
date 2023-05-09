char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	int	c;
	unsigned	int	j;

	c = 0;
	j = 0;
	while(dest[c])
		c++;
	while(src[j] && j < nb)
	{
		dest[j + c] = src[j];
		j++;
	}
	dest[j + c] = '\0';
	return (dest);
}
