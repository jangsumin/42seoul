/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghuki <donghuki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 20:51:37 by donghuki          #+#    #+#             */
/*   Updated: 2022/04/24 21:12:27 by donghuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_args(char *argv[])
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (argv[1][i])
	{
		if (!((argv[1][i] > '0' && argv[1][i] < '9') || argv[1][i] == 32))
			return (-1);
		i++;
	}
	if (i < 31)
		return (-1);
	if ((i + 1) % 8 != 0)
		return (-1);
	return ((i + 1) / 8);
}

int	valid_check(char *argv[], int nargs)
{
	int	i;
	int	n;

	n = nargs * 4;
	i = 0;
	while (i < (n / 2))
	{
		if ((argv[1][i] + argv[1][i + (n / 2)] - 96) >= ((n / 4) + 2))
			return (0);
		else if ((argv[1][i] + argv[1][i + (n / 2)] - 96) <= 2)
			return (0);
		i += 2;
	}
	i = n;
	while (i < (3 * (n / 2)))
	{
		if ((argv[1][i] + argv[1][i + (n / 2)] - 96) >= ((n / 4) + 2))
			return (0);
		else if ((argv[1][i] + argv[1][i + (n / 2)] - 96) <= 2)
			return (0);
		i += 2;
	}
	return (1);
}

int	args(int argc, char *argv[], int *n)
{
	int	nargs;

	if (argc == 2)
	{
		nargs = count_args(argv);
		*n = nargs;
		if (nargs == -1 || nargs > 10)
			return (0);
		else
		{
			if (valid_check(argv, nargs) == 1)
				return (1);
			else
				return (0);
		}
	}
	return (0);
}
