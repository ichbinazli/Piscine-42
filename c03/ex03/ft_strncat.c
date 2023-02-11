/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:59:08 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/06 16:37:36 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0' && d < nb)
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}
/*#include<stdio.h>
 
  char *ft_strncat(char *dest, char *src, unsigned int nb);

  int	main(void)
  {
  	char dest[20] = "na";
	char src[] = "anapa";
	unsigned int nb = 5;

	ft_strncat(dest, src, nb);
	printf("%s", dest);
	return (0);
  }*/
