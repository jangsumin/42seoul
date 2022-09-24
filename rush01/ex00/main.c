/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghuki <donghuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:04:39 by donghuki          #+#    #+#             */
/*   Updated: 2022/04/24 22:24:24 by donghuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		args(int argc, char *argv[], int *n);
void	initiate(int **box, int ***available, char *argv[]);
void	first_check(int **box, int ***available);
void	recursion(int **box, int ***available, int *over);
void	do_closing(int **box, int ***available, int n);
void	create_box(int **box, int n);
void	create_available(int ***available, int n);

void	do_closing(int **box, int ***available, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n + 2)
	{
		free(box[i]);
		while (j < n + 2)
		{
			free(available[i][j]);
			j++;
		}
		free(available[i]);
		i++;
	}
	free(box);
	free(available);
}

void	create_box(int **box, int n)
{
	int	i;

	i = 0;
	while (i < n + 2)
	{
		box[i] = (int *) malloc(sizeof (int) * (n + 2));
		i++;
	}
	box[0][0] = n;
	box[n + 1][n + 1] = 1;
}

void	create_available(int ***available, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n + 2)
	{
		available[i] = (int **) malloc(sizeof (int *) * (n + 2));
		j = 0;
		while (j < n + 2)
		{
			available[i][j] = (int *) malloc(sizeof (int) * (n + 1));
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	n;
	int	**box;
	int	***available;
	int	over;

	over = 0;
	n = 0;
	if (args(argc, argv, &n) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	box = (int **) malloc(sizeof (int *) * (n + 2));
	create_box(box, n);
	available = (int ***) malloc(sizeof (int **) * (n + 2));
	create_available(available, n);
	initiate(box, available, argv);
	first_check(box, available);
	recursion(box, available, &over);
	do_closing(box, available, n);
	if (!over)
		write(1, "Error\n", 6);
	return (0);
}
