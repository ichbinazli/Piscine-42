/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:12:07 by nanapa            #+#    #+#             */
/*   Updated: 2022/07/27 15:33:43 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;

	a = 0;
	while (a < size -1)
	{
		temp = tab[a];
		tab[a] = tab[size -1];
		tab[size -1] = temp;
		size--;
		a++;
	}
}
