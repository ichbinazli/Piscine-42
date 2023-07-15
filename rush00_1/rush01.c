#include <unistd.h>

void    ft_putchar(char c)

void    ft_print(int x, char n, char a, char z)
{
    int ogu;
    while(ogu <= x)
    {
        if (ogu == 1)
            ft_putchar(n);
        else if (ogu == x)
            ft_putchar(z)
        else
        ft_putchar(a);
        ogu++;
    }
    ft_putchar('\n');
}
void    rush(int x, int y)
{
    int satir;
    satir = 1;
    if (x >= 1 && y >= 1)
    {
        while(satir <= y)
        {
            if (satir == 1)
                ft_print(x, '/', '*', '\\');
            else if (satir == y)
                ft_print(x, '\\', '*', '/');
            else
                ft_print(x, '*', ' ', '*');
            satir++;
        }
    }
}
