/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:34:43 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/16 16:16:52 by taeypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	row_print(int x, char first, char line, char last)
{
	int	middle_numbers;

	middle_numbers = 0;
	if (x == 1)
		ft_putchar(first);
	if (x > 1)
	{
		ft_putchar(first);
		while (middle_numbers < x - 2)
		{
			ft_putchar(line);
			middle_numbers++;
		}
		ft_putchar(last);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	y_count;

	y_count = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (y_count < y)
	{
		if (y_count == 0)
			row_print(x, 'o', '-', 'o');
		else if (y_count == (y - 1))
			row_print(x, 'o', '-', 'o');
		else
			row_print(x, '|', ' ', '|');
		y_count++;
	}
}
