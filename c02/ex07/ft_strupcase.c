/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:05:43 by nanapa            #+#    #+#             */
/*   Updated: 2022/07/28 19:13:58 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	h;

	h = 0;
	while (str[h] != '\0')
	{
		if ((str[h] >= 'a') && (str[h] <= 'z'))
			str[h] -= 'a' - 'A';
		h++;
	}
	return (str);
}
/*#include<stdio.h>
 int	main()
 {
 	char str[] = "asdfghxcvbn";
	printf("%s", ft_strupcase(str));
 }*/
