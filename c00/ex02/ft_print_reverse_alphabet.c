/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanapa <nanapa@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:01:41 by nanapa            #+#    #+#             */
/*   Updated: 2022/07/23 16:36:21 by nanapa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	nazli;

	nazli = 'z';
	while (nazli >= 'a')
	{
		ft_putchar(nazli);
		nazli--;
	}
}
