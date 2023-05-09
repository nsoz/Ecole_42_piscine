#include<unistd.h>
void    ft_putchar(char a)
{
    write(1, &a, 1);
}

void   ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
    }
    else if(nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else 
    {
        ft_putchar(nb + '0');
    }
}
