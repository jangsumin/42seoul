/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_available.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghuki <donghuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:09:46 by donghuki          #+#    #+#             */
/*   Updated: 2022/04/24 21:26:47 by donghuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_row(int count, int n);
int	get_col(int count, int n);

void	reset_available(int ***available, int n, int except_zero)
{
	int	i;
	int	j;
	int	k;

	if (except_zero)
		k = 1;
	else
		k = 0;
	while (k < n + 1)
	{
		i = 1;
		while (i < n + 2)
		{
			j = 1;
			while (j < n + 2)
			{
				available[i][j][k] = 1;
				j++;
			}
			i++;
		}
		k++;
	}
}

void	update_available(int **box, int ***available)
{
	int	i;
	int	j;
	int	k;
	int	n;

	reset_available(available, box[0][0], 1);
	n = box[0][0];
	i = 0;
	while (++i < n + 1)
	{
		j = 0;
		while (++j < n + 1)
		{
			if (box[i][j] != 0)
			{
				k = 1;
				while (k < n + 1)
				{
					available[i][k][box[i][j]] = 0;
					available[k][j][box[i][j]] = 0;
					k++;
				}
			}
		}
	}
}
