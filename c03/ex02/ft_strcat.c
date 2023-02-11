/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:50:31 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/06 16:35:42 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	naz;

	naz = 0;
	while (str[naz] != '\0')
	{
		naz++;
	}
	return (naz);
}

char	*ft_strcat(char *dest, char *src)

{
	int	a;
	int	b;

	a = 0;
	b = ft_strlen(dest);
	while (src[a] != '\0')
	{
		dest[a + b] = src[a];
		a++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*#include<stdio.h>
 int	main()
{
	char *t;
	char a[30] = "na";
	char b[30] = "anapa";
	t = ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}*/
