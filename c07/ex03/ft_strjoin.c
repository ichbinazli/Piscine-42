/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:58:01 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/07 20:23:18 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}	
	s[c] = '\0';
	return (s);
}
/*#include<stdio.h>
int	main(void)
{
	char	*tab[5];
	tab[0] = "ogulcan";
	tab[1] = "benim";
	tab[2]	= "birtanem";
	tab[3] = "onucok";
	tab[4] = "seviyorum";
	printf("%s", ft_strjoin(5, tab, "nazli"));
	return (0);
}*/
