/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:23:28 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/06 16:34:41 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	l;

	l = 0;
	while ((s1[l] == s2[l]) && (s1[l] != '\0') && (s2[l] != '\0'))
		l++;
	return (s1[l] - s2[l]);
}
#include <stdio.h>
 int	main()

{
	char	s1[]  = "hata";
	char	s2[] = "hat";

	printf("%d",ft_strcmp(s1,s2));
}
