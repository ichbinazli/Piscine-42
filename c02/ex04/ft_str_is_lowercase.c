/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:18:40 by nanapa            #+#    #+#             */
/*   Updated: 2022/07/28 17:32:03 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)

{
	int	d;

	d = 0;
	while (str[d] != '\0')
	{
		if ((str[d] < 'a') || (str[d] > 'z'))
			return (0);
		d++;
	}
	return (1);
}
/*#include <stdio.h>
 int	main()
{
 	printf("%d", ft_str_is_lowercase("asdfghhjkasd"));
	printf("\n%d", ft_str_is_lowercase("asdasdNasd"));
	printf("\n%d", ft_str_is_lowercase("-_0622gfNseG5"));
}*/
