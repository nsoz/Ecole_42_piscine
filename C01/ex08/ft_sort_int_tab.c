void    ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	hol;
	int	sizet;

	c = 0;
	sizet = 0;
	while(sizet < size - 1)
	{
		c = 0;
		while(c < size - 1)
		{
			if(tab[c] > tab[c + 1])
			{	
				hol = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = hol;
			}
		c++;
		}
	sizet++;
	}
}
