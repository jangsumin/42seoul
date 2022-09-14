/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:45:15 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/28 20:52:57 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		a;
	int		i;
	int		n;
	int		count;

	a = 0;
	n = 0;
	count = 1;
	while (a < size)
		count += ft_strlen(strs[a++]) + ft_strlen(sep);
	tab = (char *)malloc (count * sizeof(char));
	a = -1;
	while (++a < size)
	{
		i = 0;
		while (strs[a][i])
			tab[n++] = strs[a][i++];
		i = 0;
		while (sep[i] && a < size - 1)
			tab[n++] = sep[i++];
	}
	tab[n] = '\0';
	return (tab);
}
