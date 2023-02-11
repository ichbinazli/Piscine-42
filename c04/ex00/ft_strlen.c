/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:29:19 by nanapa            #+#    #+#             */
/*   Updated: 2022/08/02 10:45:51 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		p;

	p = 0;
	while (str[p] != '\0')
	{
		p++;
	}
	return (p);
}
#include<stdio.h>
 int main()
{
	char a[] = "oguben";
	printf("%d",ft_strlen(a));
}
