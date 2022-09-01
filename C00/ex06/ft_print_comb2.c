/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:40:06 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/14 18:32:34 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(char f, char b)
{
	ft_putchar(f / 10 + '0');
	ft_putchar(f % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_comb2(void)
{
	char	forw;
	char	backw;

	forw = 0;
	while (forw <= 98)
	{
		backw = forw + 1;
		while (backw <= 99)
		{
			if (forw == 98)
				break ;
			print_numbers(forw, backw);
			write(1, ", ", 2);
			backw++;
		}
		forw++;
	}
	print_numbers(98, 99);
}
