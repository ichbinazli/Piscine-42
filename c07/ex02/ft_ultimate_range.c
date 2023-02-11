/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:54:14 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/07 20:17:39 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*son;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	son = malloc(sizeof(int) * (max - min));
	if (son == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = son;
	i = 0;
	while (max > min)
	{
		son[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*#include<stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}
*/
