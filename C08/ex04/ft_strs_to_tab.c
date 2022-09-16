/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:55:05 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/30 13:25:11 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == 0)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*array;

	i = 0;
	array = malloc((argc + 1) * sizeof(struct s_stock_str));
	if (array == 0)
		return (0);
	while (i < argc)
	{
		array[i].size = ft_strlen(argv[i]);
		array[i].str = argv[i];
		array[i].copy = ft_strdup(argv[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}
