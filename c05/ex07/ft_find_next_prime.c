/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:15:08 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/03 17:15:37 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2 && n <= 46341)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb <= 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*#include<stdio.h>
int main()
 {
 	printf("%d\n",ft_find_next_prime(1));
	printf("%d\n",ft_find_next_prime(5));
	printf("%d\n",ft_find_next_prime(123123));
	return 0;
 }*/
