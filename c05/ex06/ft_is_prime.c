/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:40:58 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/02 17:47:23 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a < nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
/*#include<stdio.h>
 int main()
 {
 	printf("%d\n",ft_is_prime(18));
	printf("%d\n",ft_is_prime(16));
	printf("%d\n",ft_is_prime(13));
	return 0;
 }*/
