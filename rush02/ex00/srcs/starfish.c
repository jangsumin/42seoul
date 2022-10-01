/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starfish.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 14:52:41 by sumijang          #+#    #+#             */
/*   Updated: 2022/05/01 15:57:30 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	starfish(void)
{
	int		fd;
	char	arr[10000];

	fd = open("starfish.dict", O_RDONLY);
	read(fd, arr, 10000);
	ft_putstr(arr);
	ft_putstr("\n");
	return (0);
}
