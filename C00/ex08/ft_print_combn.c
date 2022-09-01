/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_new.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 10:51:32 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/17 13:35:02 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n, int *num, int sep)
{
	int	i;

	i = 0;
	if (sep == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	while (i < n)
	{
		ft_putchar(num[i] + '0');
		i++;
	}
}

void	ft_up(int n, int *num)
{
	int	i;
	int	last;

	i = n - 1;
	last = 9;
	while (num[i] == last)
	{
		i--;
		last--;
	}
	num[i]++;
	while (i < n)
	{
		num[i + 1] = num[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	num[10];
	int	i;

	i = 0;
	while (i < n)
	{
		num[i] = i;
		i++;
	}
	ft_print(n, num, 0);
	while (num[0] != 10 - n)
	{
		if (num[n - 1] != 9)
			num[n - 1]++;
		else
			ft_up(n, num);
		ft_print(n, num, 1);
	}
}
