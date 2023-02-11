/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:14:45 by nanapa            #+#    #+#             */
/*   Updated: 2022/07/28 19:26:53 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	u;

	u = 0;
	while (str[u] != '\0')
	{
		if ((str[u] >= 'A') && (str[u] <= 'Z'))
			str[u] += 'a' - 'A';
		u++;
	}
	return (str);
}
/*#include<stdio.h>
 int	main()
{
 	char str[] = "ASDFGSDFGH";
	printf("%s", ft_strlowcase(str));
}*/
