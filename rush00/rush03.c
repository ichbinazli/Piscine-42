#include <unistd.h>

void    ft_putchar(char c);

void    ft_print(int len, char bas, char orta, char son)
{
    int n;
    n = 1;
    while(n <= len)
    {
        if(n == 1)
            ft_putchar(bas);
        else if(n == len)
            ft_putchar(son);
        else
            ft_putchar(orta);
        n++;
    }
    ft_putchar('\n');
}
void    rush(int x, int y)
{
    int satir;
    if(x >= 1 && y >= 1)
    {
        while(satir <= y)
        {
            if (satir == 1)
                ft_print(x, 'A', 'B', 'C');
            else if (saitr == y)
                ft_print(x, 'A', 'B', 'C');
            else
                ft_print(x, 'B', ' ', 'B');
            satir++;
        }
    }
}
