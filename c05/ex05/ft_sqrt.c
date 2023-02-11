/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:09:30 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/03 14:14:18 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	tut;
	int	cikar;

	if (nb < 0)
		return (0);
	tut = 0;
	cikar = 1;
	while (nb > 0)
	{
		nb -= cikar;
		cikar += 2;
		tut++;
	}
	if (nb == 0)
		return (tut);
	else
		return (0);
}
/*#include<stdio.h>
 int main()
 {
 	printf("%d\n",ft_sqrt(-81));
	printf("%d\n",ft_sqrt(64));
	return 0;
 }*/
