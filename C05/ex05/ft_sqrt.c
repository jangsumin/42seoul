/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:06:36 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/27 11:09:51 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recur(int nb, int i)
{
	if (nb > 2147395600)
		return (0);
	if (nb == i * i)
		return (i);
	if (i * i < nb)
		return (ft_recur(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_recur(nb, 0));
}
