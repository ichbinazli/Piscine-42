/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:49:44 by nanapa            #+#    #+#             */
/*   Updated: 2022/07/30 10:59:04 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	c;

		c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
		dest[c] = '\0';
	return (dest);
}
#include <stdio.h>
int	main()
{
	char src[] = "nazli";
	char dest[] = "Wo";
	printf("%s" , ft_strcpy(dest, src));

}
