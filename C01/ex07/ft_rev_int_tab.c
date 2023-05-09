void    ft_rev_int_tab (int *tab, int size)
{
	int c;
	int hol;

    	c = 0;
    	while (tab[c] && c < size / 2)
	{
		hol = tab[c];
		tab[c] = tab[size - 1 - c];
		tab[size - 1 - c] = hol;
		c++;
	}
}
