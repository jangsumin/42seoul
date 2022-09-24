/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghuki <donghuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:30:17 by donghuki          #+#    #+#             */
/*   Updated: 2022/04/24 21:15:29 by donghuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	reset_available(int ***available, int n, int except_zero);

void	argv_to_box(int **box, char *argv[], int n)
{
	int	i;

	i = 1;
	while (i < n + 1)
	{
		box[0][i] = (int) argv[1][2 * (i - 1)] - '0';
		box[n + 1][i] = (int) argv[1][2 * (i - 1 + n)] - '0';
		box[i][0] = (int) argv[1][2 * (i - 1 + 2 * n)] - '0';
		box[i][n + 1] = (int) argv[1][2 * (i - 1 + 3 * n)] - '0';
		i++;
	}
}

void	initiate(int **box, int ***available, char *argv[])
{
	int	i;
	int	j;
	int	n;

	i = 1;
	n = box[0][0];
	while (i < (n + 1))
	{
		j = 1;
		while (j < (n + 1))
		{
			box[i][j] = 0;
			j++;
		}
		i++;
	}
	argv_to_box(box, argv, n);
	reset_available(available, n, 0);
}

void	print_result(int **box)
{
	int	i;
	int	j;
	int	temp;
	int	n;

	n = box[0][0];
	i = 1;
	while (i < n + 1)
	{
		j = 1;
		while (j < n + 1)
		{
			temp = box[i][j] + '0';
			write(1, &temp, 1);
			if (j != n)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			j++;
		}
		i++;
	}
}

int	get_col(int count, int n)
{
	if (count % n == 0)
		return (n);
	else
		return (count % n);
}

int	get_row(int count, int n)
{
	if (count % n == 0)
		return (count / n);
	else
		return (count / n + 1);
}
