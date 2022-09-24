/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghuki <donghuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:28:54 by donghuki          #+#    #+#             */
/*   Updated: 2022/04/24 22:27:20 by donghuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rule1_ver(int **box, int ***available, int i, int j);
void	rule1_hor(int **box, int ***available, int i, int j);
void	rule2(int **box, int ***available);

void	first_check(int **box, int ***available)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = box[0][0];
	while (i < n + 2)
	{
		j = 1;
		while (j < n + 1)
		{
			rule1_ver(box, available, i, j);
			rule1_hor(box, available, i, j);
			j++;
		}
		i += n + 1;
	}
	rule2(box, available);
}

void	rule1_ver(int **box, int ***available, int i, int j)
{
	int	k;
	int	offset;
	int	n;

	k = 0;
	offset = -1;
	n = box[0][0];
	if (i == 0)
		offset = 1;
	if (box[i][j] == n)
	{
		k = 1;
		while (k < n + 1)
		{
			box[i + k * offset][j] = k;
			available[i + k * offset][j][0] = 0;
			k++;
		}
	}
	else if (box[i][j] == 1)
	{
		box[i + offset][j] = n;
		available[i + offset][j][0] = 0;
	}
}

void	rule1_hor(int **box, int ***available, int i, int j)
{
	int	k;
	int	offset;
	int	n;

	k = 0;
	offset = -1;
	n = box[0][0];
	if (i == 0)
		offset = 1;
	if (box[j][i] == n)
	{
		k = 1;
		while (k < n + 1)
		{
			box[j][i + k * offset] = k;
			available[j][i + k * offset][0] = 0;
			k++;
		}
	}
	else if (box[j][i] == 1)
	{
		box[j][i + offset] = n;
		available[j][i + offset][0] = 0;
	}
}

void	rule2(int **box, int ***available)
{
	int	i;
	int	n;

	n = box[0][0];
	i = 1;
	while (i < n + 1)
	{
		if (box[0][i] + box[n + 1][i] == n + 1)
		{
			box[box[0][i]][i] = n;
			available[box[0][i]][i][0] = 0;
		}
		if (box[i][0] + box[i][n + 1] == n + 1)
		{
			box[i][box[i][0]] = n;
			available[i][box[i][0]][0] = 0;
		}
		i++;
	}
}
