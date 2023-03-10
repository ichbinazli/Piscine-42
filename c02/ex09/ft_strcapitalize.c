/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:47:29 by nanapa            #+#    #+#             */
/*   Updated: 2022/07/28 19:50:22 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcapitalize(char *str)

{
	int	t;
	int	i;

	t = 0;
	i = 0;
	while (str[t] != '\0')
	{
		if (i == 0 && (str[t] >= 'a' && str[t] <= 'z'))
		{
			str[t] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[t] >= 'A' && str[t] <= 'Z'))
			str[t] += 'a' - 'A';
		else if ((str[t] < '0') || (str[t] > '9' && str[t] < 'A')
			|| (str[t] > 'Z' && str[t] < 'a') || (str[t] > 'z'))
			i = 0;
		else
			i++;
		t++;
	}
	return (str);
}
/*#include<stdio.h>
int    main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";
    printf("%s", ft_strcapitalize(str));
    printf("\n%s", ft_strcapitalize(str1));
}*/
