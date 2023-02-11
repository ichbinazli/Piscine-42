/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:33:06 by nanapa            #+#    #+#             */
/*   Updated: 2022/07/28 17:44:37 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)

{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z'))
			return (0);
	c++;
	}
	return (1);
}
/*#include<stdio.h>
	int	main()
{
	printf("%d", ft_str_is_uppercase("ADASFSFDH"));
	printf("\n%d", ft_str_is_uppercase("ASDSDFGHnO"));
	printf("\n%d", ft_str_is_uppercase("-_456ASDFoASDFG7"));
}*/
