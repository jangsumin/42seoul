/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:19:40 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/27 10:49:53 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recur(int i, int n)
{
	if (i == 0)
		return (n);
	if (i > 0)
	{
		return (ft_recur(i - 1, n * i));
	}
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	return (ft_recur(nb, 1));
}
