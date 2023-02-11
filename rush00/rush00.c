#include <unistd.h>

void    ft_putchar(char c);

void    ft_print(int len, char a, char b, char c)
{
    int n;
    n = 1;
    while(n <= len)
    {
        if(n == 1)
            ft_putchar(a);
        else if (n == len)
            ft_putchar(c);
        else
            ft_putchar(b);
        n++;
    }
    ft_putchar('\n');
}

void    rush(int x, int y)
{
    int satir;

    satir = 1;
    if(x >= 1 && y >= 1)
    {
        while(satir <= y)
        {
            if(satir == 1)
                ft_print(x, 'o', '-', 'o');
            else if (satir == y)
                ft_print(x, 'o', '-', 'o');
            else
                ft_print(x, '|', ' ', '|');
            satir++;
        }
    }
}
