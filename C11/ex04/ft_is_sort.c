/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 23:08:21 by sumijang          #+#    #+#             */
/*   Updated: 2022/05/04 11:00:18 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	up;
	int	down;

	i = 0;
	up = 1;
	down = 1;
	if (length == 0 || length == 1)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			up++;
		else if ((*f)(tab[i], tab[i + 1]) > 0)
			down++;
		else
		{
			up++;
			down++;
		}
		i++;
	}
	if (up == length || down == length)
		return (1);
	return (0);
}
