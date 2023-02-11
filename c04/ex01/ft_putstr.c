#include <unistd.h>

void	ft_putchar(char a)

{
	write(1, &a, 1);
}

void	ft_putstr(char *str)

{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}
#include<stdio.h>
 
  int main()
  {
  	char a[] = "iloveyou";
	ft_putstr(a);
 }