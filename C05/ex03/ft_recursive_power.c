/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:40:35 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/27 11:02:27 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recur(int nb, int power, int i)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (i);
	while (power-- > 0)
	{
		return (ft_recur(nb, power, i * nb));
	}
	return (0);
}

int	ft_recursive_power(int nb, int power)
{
	return (ft_recur(nb, power, 1));
}
