/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starfish.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 14:52:41 by sumijang          #+#    #+#             */
/*   Updated: 2022/05/01 16:20:38 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	luffy(void)
{
	int		fd;
	char	arr[10000];

	fd = open("luffy.dict", O_RDONLY);
	read(fd, arr, 10000);
	ft_putstr(arr);
	ft_putstr("\n");
	return (0);
}