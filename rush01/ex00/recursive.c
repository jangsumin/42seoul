/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_recur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghuki <donghuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:17:42 by donghuki          #+#    #+#             */
/*   Updated: 2022/04/24 22:25:13 by donghuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	update_available(int **box, int ***available);
void	print_result(int **box);
int		get_col(int count, int n);
int		get_row(int count, int n);
void	recursion(int **box, int ***available, int *over);
int		checked(int **box);

void	pass_recursion(int **box, int ***available, int *over)
{
	int	n;

	n = box[0][0];
	box[n + 1][n + 1] += 1;
	recursion(box, available, over);
	box[n + 1][n + 1] -= 1;
}

void	next_recursion(int **box, int ***available, int *over, int i)
{
	int	n;
	int	row;
	int	col;

	n = box[0][0];
	row = get_row(box[n + 1][n + 1], n);
	col = get_col(box[n + 1][n + 1], n);
	box[row][col] = i;
	box[n + 1][n + 1] += 1;
	if (checked(box))
		recursion(box, available, over);
	box[row][col] = 0;
	box[n + 1][n + 1] -= 1;
}

void	inner_recursion(int **box, int ***available, int *over)
{
	int	i;
	int	n;
	int	row;
	int	col;

	i = 0;
	n = box[0][0];
	row = get_row(box[n + 1][n + 1], n);
	col = get_col(box[n + 1][n + 1], n);
	if (available[row][col][0] == 0)
		pass_recursion(box, available, over);
	else
	{
		while (++i < n + 1)
		{
			update_available(box, available);
			if (available[row][col][i])
				next_recursion(box, available, over, i);
		}
	}
}

void	recursion(int **box, int ***available, int *over)
{
	int	n;
	int	row;
	int	col;
	int	count;

	n = box[0][0];
	count = box[n + 1][n + 1];
	row = get_row(count, n);
	col = get_col(count, n);
	if (count > n * n)
	{
		print_result(box);
		*over = 1;
		return ;
	}
	else
	{
		inner_recursion(box, available, over);
	}
}
