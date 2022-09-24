/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghuki <donghuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:49:07 by donghuki          #+#    #+#             */
/*   Updated: 2022/04/24 22:19:31 by donghuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_row(int count, int n);
int	get_col(int count, int n);

int	check_up(int **box, int row, int col, int n)
{
	int	max;
	int	i;
	int	view_cal;

	max = 0;
	i = 0;
	view_cal = 0;
	while (++i < row + 1)
	{
		if (max < box[i][col])
		{
			view_cal++;
			max = box[i][col];
		}
	}
	if (max != n)
	{
		view_cal++;
		if (view_cal > box[0][col])
			return (0);
	}
	else
		if (view_cal != box[0][col])
			return (0);
	return (1);
}

int	check_left(int **box, int row, int col, int n)
{
	int	max;
	int	i;
	int	view_cal;

	max = 0;
	i = 0;
	view_cal = 0;
	while (++i < col + 1)
	{
		if (max < box[row][i])
		{
			view_cal++;
			max = box[row][i];
		}
	}
	if (max != n)
	{
		view_cal++;
		if (view_cal > box[row][0])
			return (0);
	}
	else
		if (view_cal != box[row][0])
			return (0);
	return (1);
}

int	check_right(int **box, int row, int n)
{
	int	max;
	int	i;
	int	view_cal;

	i = n;
	max = 0;
	view_cal = 0;
	while (i > 0)
	{
		if (max < box[row][i])
		{
			view_cal++;
			max = box[row][i];
		}
		i--;
	}
	if (view_cal != box[row][n + 1])
		return (0);
	return (1);
}

int	check_down(int **box, int col, int n)
{
	int	max;
	int	i;
	int	view_cal;

	i = n;
	max = 0;
	view_cal = 0;
	while (i > 0)
	{
		if (max < box[i][col])
		{
			view_cal++;
			max = box[i][col];
		}
		i--;
	}
	if (view_cal != box[n + 1][col])
		return (0);
	return (1);
}

int	checked(int **box)
{
	int	n;
	int	row;
	int	col;

	n = box[0][0];
	row = get_row(box[n + 1][n + 1] - 1, n);
	col = get_col(box[n + 1][n + 1] - 1, n);
	if (!check_up(box, row, col, n))
		return (0);
	if (!check_left(box, row, col, n))
		return (0);
	if (col == n)
		if (!check_right(box, row, n))
			return (0);
	if (row == n)
		if (!check_down(box, col, n))
			return (0);
	return (1);
}
