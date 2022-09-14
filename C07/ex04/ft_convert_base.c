/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:24:42 by sumijang          #+#    #+#             */
/*   Updated: 2022/05/01 16:50:04 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	errcheck(char *str);
int	i_base(char c, char *base);
int	whitespace(char *str, int *ptr);
int	ft_atoi_base(char *str, char *base);

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_nbr(unsigned int i, char *base)
{
	int	cnt;

	cnt = 0;
	while (i >= ft_strlen(base))
	{
		i = i / ft_strlen(base);
		cnt++;
	}
	return (cnt + 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				converting;
	unsigned int	nb;
	char			*result;
	int				i;

	if (!errcheck(base_from) || !errcheck(base_to))
		return (0);
	converting = ft_atoi_base(nbr, base_from);
	if (converting < 0)
		nb = -converting;
	else
		nb = converting;
	i = count_nbr(nb, base_to) + (converting < 0);
	result = (char *) malloc((i + 1) * sizeof(char));
	if (result == 0)
		return (0);
	result[i] = '\0';
	while (i--)
	{
		result[i] = base_to[nb % ft_strlen(base_to)];
		nb = nb / ft_strlen(base_to);
	}
	if (converting < 0)
		result[0] = '-';
	return (result);
}
