/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:45:05 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/07 20:10:03 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		uzun;
	int		i;
	char	*dest;

	uzun = 0;
	i = 0;
	while (src[uzun] != '\0')
		uzun++;
	dest = (char *)malloc(sizeof(char) * (uzun + 1));
	if (dest == NULL )
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include<stdio.h>
 int main()
 {
 	char a[] = "oguben";
	ft_strdup(a);
	printf("%s\n",a);
	return 0;
 }*/
