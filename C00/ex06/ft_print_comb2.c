#include<unistd.h>
void    ft_putchar(char a)
{
    write(1, &a, 1);
}

void    ft_print_comb(int a,int b)
{
    ft_putchar((a / 10) + '0');
    ft_putchar((a % 10) + '0');
    write(1," ",1);
    ft_putchar((b / 10) + '0');
    ft_putchar((b % 10) + '0');
    if(!(a == 98 && b == 99))
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_print_comb2(void)
{
        int a;
        int b;

        a = 0;
        b = 0;
        
        while(a <= 98)
        {
            b = a + 1; 
            while(b <= 99)
            {
                ft_print_comb(a,b);
                b++;
            }
            a++;
        }
}
