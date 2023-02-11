/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:43:57 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/07 20:13:47 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int		*sayi;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	sayi = (int *)malloc(sizeof(int) * (max - min));
	if (sayi == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		sayi[i] = min;
		i++;
		min++;
	}
	return (sayi);
}
/*#include<stdio.h>
 int main(void)
 {
 	int min;
	int max;
	int *tab;
	int i = 0;
	int size;
	min = 10;
	max = 99;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ",tab[i]);
		i++;
	}
 }*/
