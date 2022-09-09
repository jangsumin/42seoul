/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:17:14 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/27 11:36:20 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	promising(char *board, int cdx)
{
	int	i;

	i = -1;
	while (++i < cdx)
	{
		if (board[cdx] == board[i] || cdx - i == ft_abs(board[cdx] - board[i]))
			return (0);
	}
	return (1);
}

void	nqueen(char *board, int cdx, int *count)
{
	int	i;

	i = -1;
	if (cdx == 10)
	{
		cdx = 0;
		while (cdx < 10)
			ft_putchar(board[cdx++] + '0');
		ft_putchar('\n');
		*count += 1;
		return ;
	}
	while (++i < 10)
	{
		board[cdx] = i;
		if (promising(board, cdx))
			nqueen(board, cdx + 1, count);
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		count;
	int		i;

	i = 0;
	count = 0;
	nqueen(board, i, &count);
	return (count);
}
