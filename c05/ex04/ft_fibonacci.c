/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:31:02 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/02 17:35:10 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}
/*#include<stdio.h>
 int main()
{
 	printf("%d\n",ft_fibonacci(5));
	printf("%d\n",ft_fibonacci(6));
	return 0;
}*/
