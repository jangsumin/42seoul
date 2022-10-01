/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sad_pisciner.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbae <wbae@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 14:38:06 by wbae              #+#    #+#             */
/*   Updated: 2022/05/01 16:37:59 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	sad_pisciner(void)
{
	int		fd;
	char	arr[12000];

	fd = open("pepe.dict", O_RDONLY);
	read(fd, arr, 12000);
	ft_putstr(arr);
	ft_putstr("\n");
	return (0);
}
