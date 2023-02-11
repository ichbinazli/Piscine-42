/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:08:50 by nanapa            #+#    #+#             */
/*   Updated: 2022/07/28 16:39:15 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < '0') || (str[a] > '9'))
			return (0);
		a++;
	}
	return (1);
}
/*#include<stdio.h>
	int	main()
{
	printf("%d", ft_str_is_numeric("210932894751"));
	printf("\n%d", ft_str_is_numeric("29304843076389587"));
	printf("\n%d", ft_str_is_numeric("-_selambennazliii,"));	
}*/
