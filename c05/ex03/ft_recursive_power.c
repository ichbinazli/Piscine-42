/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:25:33 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/03 14:08:05 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int		a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	return (a);
}
/*#include<stdio.h>
 int main()
 {
 	printf("%d\n",ft_recursive_power(5,3));
	printf("%d\n",ft_recursive_power(0,3));
	return 0;
 }*/
